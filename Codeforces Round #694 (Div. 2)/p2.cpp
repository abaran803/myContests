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
    int n,k;
    cin >> n >> k;
    int arr[n],arr1[n];
    int sum = 0;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        sum += arr[i];
        arr1[i] = arr[i];
        if(arr[i]%k) {
            arr[i] = 0;
        } else {
            arr[i] /= k;
        }
    }
    while(1) {
        int i;
        for(i=0;i<n;i++) {
            if(arr[i] == 0) {
                break;
            }
            sum += arr1[i];
            if(arr[i]%k == 0) {
                arr[i] = arr[i]/k;
            } else {
                arr[i] = 0;
            }
        }
        if(i != n) {
            break;
        }
    }
    cout << sum;
} 