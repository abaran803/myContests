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

bool cmp(int a,int b) {
    return (a>b);
}

void solve() 
{ 
    int n,m;
    cin >> n >> m;
    int arr1[n],arr2[m];
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++) {
        cin >> arr1[i];
        sum1 += arr1[i];
    }
    sort(arr1,arr1+n);
    for(int i=0;i<m;i++) {
        cin >> arr2[i];
        sum2 += arr2[i];
    }
    sort(arr2,arr2+m,cmp);
    int cnt = 0;
    if(sum1 > sum2) {
        cout << cnt;
    }
    else {
        bool isWin = false;
        for(int i=0;i<n && i<m && arr1[i]<arr2[i];i++) {
            sum2 -= arr2[i];
            sum2 += arr1[i];
            sum1 += arr2[i];
            sum1 -= arr1[i];
            cnt++;
            if(sum1 > sum2) {
                cout << cnt;
                isWin = true;
                break;
            }
        }
        if(!isWin) {
            cout << -1;
        }
    }
} 