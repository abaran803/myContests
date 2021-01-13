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
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++)    
        cin >> arr[i];
    bool isCorr = true;
    for(int i=1;i<n;i++) {
        if(arr[i] < arr[i-1]-(k-1) || arr[i] > arr[i-1]+k-1) {
            isCorr = false;
            break;
        }
    }
    for(int i=n-2;i>=0;i--) {
        if(arr[i] < arr[i+1]-(k-1) || arr[i] > arr[i+1]+k-1) {
            isCorr = false;
            break;
        }
    }
    if(isCorr) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
} 