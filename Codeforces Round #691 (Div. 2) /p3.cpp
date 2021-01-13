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
    //cin>>t; 
    while(t--) 
    { 
    solve(); 
    cout<<endl; 
    } 
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0; 
} 

void solve() 
{ 
    int m,n;
    cin >> n >> m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<m;i++)
        cin >> b[i];
    for(int i=0;i<m;i++)
    {
        int ans = a[0]+b[i];
        for(int j=1;j<n;j++)
        {
            if((a[j]+b[i])%ans)
                ans = __gcd(ans,a[j]+b[i]);
        }
        cout << ans << ' ';
    }
} 