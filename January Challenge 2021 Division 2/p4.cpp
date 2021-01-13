#include<bits/stdc++.h> 
#define int long long
#define vi vector<int>
#define vs vector<string>
#define F first
#define S second
#define mii map<int,int>
#define mci map<char,int>

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

void solve() 
{ 
    int n,k,x,y;
    cin >> n >> k >> x >> y;\
    if(x == y) {
        cout << n << ' ' << n;
    } else {
        int val[4][2] = {  {n-abs(y-x),n},  {n,n-abs(y-x)},  {abs(y-x),0},  {0,abs(y-x)}  };
        k--;
        k += 4;
        k = k%4;
        if(x<y) {
            cout << val[k][0] << ' ' << val[k][1];
        } else {
            cout << val[k][1] << ' ' << val[k][0];
        }
    }
} 