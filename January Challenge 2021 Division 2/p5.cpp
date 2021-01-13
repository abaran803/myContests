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

bool res = false;

void Algo(int arr[],int x,int n,bool isCorr1,bool isCorr2,int currSum,int totSum,int &mini,int ele) {
    if(currSum >= totSum) {
        if(!isCorr1) {
            isCorr1 = true;
            currSum = 0;
        } else {
            isCorr2 = true;
            mini = min(mini,ele);
            res = true;
            return;
        }
    }
    if(x >= n) {
        return;
    }
    Algo(arr,x+1,n,isCorr1,isCorr2,currSum,totSum,mini,ele);
    if(x+1 < n) {
        Algo(arr,x+1,n,isCorr1,isCorr2,currSum+arr[x+1],totSum,mini,ele+1);
    }
}

void solve() 
{ 
    int n,k;
    cin >> n >> k;
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum < k*2) {
        cout << -1;
    }
    else{
        bool isCorr1 = false;
        bool isCorr2 = false;
        int mini = INT_MAX;
        int ele = 0;
        Algo(arr,-1,n,isCorr1,isCorr2,0,k,mini,ele);
        if(res) {
            cout << mini;
            res = false;
        } else {
            cout << -1;
        }
    }  
} 