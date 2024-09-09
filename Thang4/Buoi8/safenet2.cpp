#include <iostream> 
#include <vector> 
#include <math.h>       
int n, m; 
int timeDfs = 0; 
std::vector <int> adj[30005]; 
int low[30005], numb[30005]; 
bool visited[30005]; 
std::vector <int> listVertex; 
std::vector <int> sizeComponent; 

void dfs(int u, int father) {
  timeDfs++; 
  numb[u] = timeDfs; 
  low[u] = timeDfs;
  if (adj[u].empty() == true) {
    sizeComponent.push_back(1); 
    return; 
  }
  listVertex.push_back(u); 
  int numbChildren = 0;  
  for (int i = 0; i < (int) adj[u].size(); i++) {
    int v = adj[u][i];
    if (v == father) {
      continue; 
    }  
    if (numb[v] == 0) {
      numbChildren++; 
      dfs(v, u); 
      low[u] = std::min(low[u], low[v]);  
      if (father == -1 || low[v] >= numb[u]) {
        int cnt = 1;
        while (true) {
          int ver = listVertex.back();
          listVertex.pop_back();
          cnt++; 
          if (ver == v) {
            break;   
          }           
        }
        sizeComponent.push_back(cnt);    
      }
    }
    else {
      low[u] = std::min(low[u], numb[v]); 
    }
  }
}  

int main () {
  std::cin >> n >> m; 
  for (int i = 1; i <= m; i++) {
    int u, v;
    std::cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  for (int i = 1; i <= n; i++) {
    if (numb[i] == 0) {
      dfs(i, -1); 
    } 
  } 
  int ans = 0; 
  for (int i = 0; i < (int) sizeComponent.size(); i++) {
    ans = std::max(ans, sizeComponent[i]); 
  }
  std::cout << ans;
  return 0; 
}