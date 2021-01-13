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

int ChkDist(int arr[],int n) {
    set<int> st;
    for(int i=0;i<n;i++) {
        st.insert(arr[i]);
    }
    return st.size();
}

// void Check(int arr[],int x,int n,int &res,map<int,int> mp) {
//     if(x == n) {
//         res = max(ChkDist(arr,n),res);
//         return;
//     }
//     // mp[arr[x]]
//     arr[x] += 1;
//     Check(arr,x+1,n,res,mp);
//     arr[x] -= 1;
//     Check(arr,x+1,n,res,mp);
// }

void solve() 
{ 
    int n;
    cin >> n;
    int arr[n];
    map<int,int> mp;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        mp[arr[i]] = 1;
    }
    // int res = INT_MIN;
    // Check(arr,0,n,res,mp);
    // cout << res;
    int maxi = mp.size();
    for(int i=0;i<n;i++) {
        if(count(arr,arr+n,arr[i]) > 1) {
            mp[arr[i]+1] = 1;
        }
        maxi = max(maxi,(int)(mp.size()));
    }
    cout << maxi;
} 