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
        cout << endl; 
    } 
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0; 
} 

void solve() 
{ 
    int n,m;
    cin >> n >> m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++) {
        cin >> arr1[i];
        arr1[i]--;
    }
    for(int j=0;j<m;j++) {
        cin >> arr2[j];
    }
    sort(arr1,arr1+n);
    int u = 0;
    int sum = 0;
    for(int i=n-1;i>=0;i--) {
        if(u<arr1[i] && arr2[arr1[i]]>arr2[u]) {
            sum += arr2[u++];
        } else {
            sum += arr2[arr1[i]];
        }
    }
    cout << sum;
} 