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
    map<int,int> mp;
    int n,x;
    cin >> n >> x;
    int arr[n];
    int sum1 = 0;
    int sum2 = 0;
    int count = 0;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        sum1 += ceil(arr[i]/(float)x);
        sum2 += arr[i]/x;
        count += (arr[i]%x);
    }
    cout << sum2+ceil(count/(float)x) << ' ' << sum1;
} 