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
    int n;
    cin >> n;
    string str;
    cin >> str;
    for(int i=0;i<n/4;i++) {
        int val = 0;
        if(str[4*i+0] == '1') {
            val += 8;
        }
        if(str[4*i+1] == '1') {
            val += 4;
        }
        if(str[4*i+2] == '1') {
            val += 2;
        }
        if(str[4*i+3] == '1') {
            val += 1;
        }
        cout << (char)(val+'a');
    }
} 