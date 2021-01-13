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
    int n,m;
    cin >> m;
    int arrM[m];
    for(int i=0;i<m;i++) {
        cin >> arrM[i];
    }
    cin >> n;
    int arrN[n];
    for(int i=0;i<n;i++) {
        cin >> arrN[i];
    }
    int sum = 0;
    int maxi = 0,maxi1 = 0;
    int cntM = 0,cntN = 0;
    int i,j;
    // for(i=0,j=0;i<m && j<n;)
    // {
    //     if(abs(cntN-cntM) == 0) {
    //         if(arrM[i] > arrN[j]) {
    //             sum += arrM[i++];
    //             maxi = max(maxi,sum);
    //             cntM++;
    //         }
    //         else {
    //             sum += arrN[j++];
    //             maxi = max(maxi,sum);
    //             cntN++;
    //         }
    //     }
    //     else if(cntN > cntM) {
    //         sum += arrM[i++];
    //         maxi = max(maxi,sum);
    //         cntM++;
    //     }
    //     else {
    //         sum += arrN[j++];
    //         maxi = max(maxi,sum);
    //         cntN++;
    //     }
    // }
    // while(i < m) {
    //     sum += arrM[i++];
    //     maxi = max(maxi,sum);
    // }
    // while(j < n) {
    //     sum += arrN[j++];
    //     maxi = max(maxi,sum);
    // }
    sum = 0;
    for(i=0;i<m;i++) {
        sum += arrM[i];
        maxi = max(maxi,sum);
    }
    sum = 0;
    for(j=0;j<n;j++) {
        sum += arrN[j];
        maxi1 = max(sum,maxi1);
    }
    cout << maxi+maxi1;
} 