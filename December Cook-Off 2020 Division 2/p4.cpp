#include<bits/stdc++.h> 
#define int long long

using namespace std;
void solve(); 

int32_t main() 
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
        freopen("inp.txt", "r", stdin); 
        freopen("err.txt", "w", stderr); 
        freopen("out.txt", "w", stdout); 
    #endif 

    int t=1; 
    cin>>t; 
    while(t--) 
    { 
    solve(); 
    cout<<endl; 
    } 
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0; 
} 

int LF(int m,int n)
{
    for(int i=min(n,m);i>=1;i--)
        if(m%i == 0)
            return i;
    return 1;
}

void solve() 
{ 
    int n,m;
    cin >> n >> m;
    int arr[m];
    for(int i=0;i<m;i++)
        cin >> arr[i];
    int kills = 0;
    for(int i=0;i<m;i++)
    {
        kills += (n-LF(arr[i],n));
        n -= kills;
    }
    cout << kills;
} 