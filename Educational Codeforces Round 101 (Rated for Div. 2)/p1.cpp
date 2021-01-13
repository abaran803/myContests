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

void solve() 
{ 
    string str;
    cin >> str;
    int n = str.length();
    stack<char> st;
    if(n%2 != 0) {
        cout << "No";
    }
    else {
        if(str[0] == '?' && str[n-1] == '?') {
            cout << "Yes";
        }
        else if(str[0] == '?' && str[n-1] == ')') {
            cout << "Yes";
        }
        else if(str[0] == '(' && str[n-1] == '?') {
            cout << "Yes";
        }
        else if(str[0] == '(' && str[n-1] == ')') {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
    }
} 