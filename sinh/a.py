import streamlit as st
import folium
from streamlit_folium import st_folium
import requests

# Hàm lấy vị trí hiện tại dựa trên địa chỉ IP
def get_current_location():
    try:
        # Gọi API ipinfo.io để lấy vị trí
        response = requests.get("https://ipinfo.io/")
        data = response.json()
        # Lấy tọa độ từ chuỗi location (latitude,longitude)
        location = data["loc"].split(",")
        latitude = float(location[0])
        longitude = float(location[1])
        return latitude, longitude
    except Exception as e:
        # Nếu không lấy được, trả về vị trí mặc định
        st.write("Không thể lấy vị trí hiện tại, sử dụng vị trí mặc định.")
        return 10.8231, 106.6297  # TP. Hồ Chí Minh, Việt Nam

# Lấy vị trí hiện tại
latitude, longitude = get_current_location()

# Khởi tạo bản đồ với vị trí hiện tại
m = folium.Map(location=[latitude, longitude], zoom_start=12)

# Thêm dấu chấm để đánh dấu vị trí hiện tại
folium.Marker(
    location=[latitude, longitude],
    popup="Vị trí của bạn",
    icon=folium.Icon(color="blue", icon="info-sign"),
).add_to(m)

# Thêm công cụ để lấy tọa độ khi nhấp chuột
m.add_child(folium.LatLngPopup())

# Hiển thị bản đồ trong Streamlit và lấy thông tin đầu ra
output = st_folium(m, width=700, height=500)

# Hiển thị tọa độ khi nhấp chuột vào bản đồ
if output["last_clicked"]:
    lat = output["last_clicked"]["lat"]
    lon = output["last_clicked"]["lng"]
    st.write(f"Tọa độ đã chọn: Latitude = {lat}, Longitude = {lon}")
    print("Kinh do {lat}, vi do {lon}")
else:
    st.write("Hãy nhấp vào bản đồ để xem tọa độ.")
