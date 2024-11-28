//#include <bits/stdc++.h>
#include <math.h>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <array>
#include <limits>
#include <numeric>
#include <climits>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <unordered_set>
#include <bitset>
#include <queue>
#include <iostream>
#include <algorithm>
#define fastIO ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define ll long long
#define fi first
#define pno cout<<"NO\n";
#define pys cout<<"YES\n";
#define se second
#define pb push_back
#define eb emplace_back //faster than push_back
#define mod1 1000000007
#define mod2 998244353
#define INF 9223372036854775807
#define dist(x, y) sqrt(abs(x) +abs(y))
//const int SZ=1E6;
using namespace std;

//ll lcm(ll a, ll b){
//    return (a/__gcd(a, b) * b);
//}

int isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    if(n%i==0)
        return 0;
    return 1;
}

//void dfs(int i)
//{
//    vis[i]=1;
//    for(auto x:adj[i])
//    {
//        if(!vis[x])
//            dfs(x);
//    }
//}

//--------------------------------CODE STARTS HERE----------------------------------------

//If the sum of all elements of the array is composite print all indexes
//As n>=3,if the number is prime it is odd,remove any one odd number(the sum becomes even) print all indexes except that of
//the chosen odd number

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int oddpos=-1,sum=0,arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]%2)
                oddpos=i;
        }
        if(isPrime(sum)==0)
        {
            cout<<n<<endl;
            for(int i=1;i<=n;i++)
            cout<<i<<" ";
        }
        else
        {
            cout<<n-1<<endl;
            for(int i=1;i<=n;i++)
            if(i!=(oddpos+1))
                cout<<i<<" ";
        }
        cout<<endl;
    }
}

int32_t main()
{
    solve();
}