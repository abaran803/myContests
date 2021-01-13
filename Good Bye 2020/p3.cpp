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

bool isPal(string str) {
    int n = str.length();
    for(int i=0,j=n-1;i<j;i++,j--) {
        if(str[i] != str[j]) {
            return false;
        }
    }
    return true;
}

int cnt = 0;
char k = k%26+65;

void Algo(string str,int x,int n,int &cnt) {
    if(x >= n) {
        return;
    }
    for(int i=x+1;i<n;i++) {
        if(isPal(str.substr(x,i-x+1))) {
            cnt++;
            str[i] = k++;
            Algo(str,i+1,n,cnt);
        }
    }
    Algo(str,x+1,n,cnt);
}

void solve() 
{ 
    string str;
    cin >> str;
    int cnt = 0;
    Algo(str,0,str.length(),cnt);
    // if(str.length()&(1) && str.length()>2) {
    //     if(str[str.length()-1] == str[str.length()-2]) {
    //         cnt++;
    //     }
    // }
    cout << cnt;
    cnt = 0;
} 