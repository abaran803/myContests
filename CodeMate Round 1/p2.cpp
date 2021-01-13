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
    //cin>>t; 
    while(t--) 
    { 
        solve(); 
        // cout<<endl; 
    } 
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0; 
} 

void solve() 
{ 
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i=0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        mp[a] = b;
    }
    bool isCOrr = false;
    for(auto it: mp) {
        int k = it.first+it.second;
        if(mp.find(k) != mp.end()) {
            if(k+mp[k] == it.first) {
                isCOrr = true;
                break;
            }
        }
    }
    if(isCOrr) {
        cout << "YES";
    } else {
        cout << "NO";
    }
} 