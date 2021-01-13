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

char rev(char c)
{
    if(c == '1')
        return '0';
    else
        return '1';
}

void solve() 
{ 
    string str;
    cin >> str;
    stack<char> st;
    int cnt = 0;
    for(int i=0;i<str.length();i++)
    {
        if(!st.empty() && st.top() == rev(str[i]))
            st.pop();
        else
            st.push(str[i]);
    }
    cnt = st.size();
    if(cnt&1)
        cout << -1;
    else
        cout << cnt/2;
} 