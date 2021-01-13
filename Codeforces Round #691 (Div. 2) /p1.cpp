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
    cin >> n;
    string str1,str2;
    cin >> str1 >> str2;
    int rC = 0,bC = 0;
    for(int i=0;i<n;i++)
    {
        if(str1[i] > str2[i])
            rC++;
        else if(str1[i] < str2[i])
            bC++;
    }
    if(rC > bC)
        cout << "RED";
    else if((rC < bC))
        cout << "BLUE";
    else
        cout << "EQUAL";
} 