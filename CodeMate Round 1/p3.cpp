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
    int n,m;
    cin >> n >> m;
    vector<int> vec;
    for(int i=0;i<n;i++) {
        vec.push_back(10);
    }
    for(int i=0;i<m;i++) {
        int a,b,c;
        cin >> a >> b >> c;
        for(int j=a-1;j<b;j++) {
            vec[j] *= c;
        }
    }
    int sum = 0;
    for(int it: vec) {
        sum += it;
    }
    cout << sum/n;
} 