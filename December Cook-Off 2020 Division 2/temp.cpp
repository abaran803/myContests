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

bool isValid(string str)
{
    int lC,rC;
    lC = rC = 0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i] == '(')
            lC++;
        else if(str[i] == ')')
            rC++;
        if(rC > lC)
            return false;
        return true;
    }
}

bool isEqual(string str)
{
    int lC,rC;
    lC = rC = 0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i] == '(')
            lC++;
        else if(str[i] == ')')
            rC++;
        if(rC == lC)
            return false;
        return true;
    }
}

void algoUtils(string str,int x,int n,set<string> &st,string curr)
{
    if(!isValid(str))
        return;
    if(x == n && isEqual(curr))
    {
        st.insert(curr);
        return;
    }
    // With next
    algoUtils(str,x+1,str.length(),st,curr+str[x+1]);
    // Without next
    algoUtils(str,x+1,str.length(),st,curr);
}

void algo(string s)
{  
    set<string> st;
    algoUtils(s,0,s.length(),st,"");
    for(auto it: st)
        cout << it << endl;
}

void solve() 
{ 
    string str;
    cin >> str;
    algo(str);
} 