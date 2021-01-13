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
    int n;
    string str;
    cin >> str;
    int OneC = 0,ZeroC = 0;
    for(int i=0;i<str.length();i++)  
    {
        if(str[i] == 1)
            OneC++;
        else
            ZeroC++;
    }
    OneC += n-str.length();
    if((OneC/(float)n)*100 >= 75)
        cout << "YES";
    else
        cout << "NO";
} 