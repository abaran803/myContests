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
    int zC = 0,oC = 0;
    int zC1 = 0,oC1 = 0;
    string str,str1;
    cin >> str >> str1;
    for(int i=0;i<n;i++)
    {
        if(str[i] == '0')
            zC++;
        else if(str[i] == '1')
            oC++;
        if(str1[i] == '0')
            zC1++;
        else if(str1[i] == '1')
            oC1++;
    }
    cout << oC << ' ' << oC1 << ' ' << zC << ' ' << zC1 << endl;
    if(oC != oC1 || zC != zC1)
        cout << "No";
    // else
    // {
    //     cout << "Yes";
    // }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(str[i] == '1' && str1[i] == '0')
            {
                if(zC <= 0)
                {
                    cout << "No";
                    break;
                }
                zC--;
            }
            else if(str[i] == '0')
                zC--;
        }
        cout << "Yes";
    }
    
    
} 