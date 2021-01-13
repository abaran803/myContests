// #include<bits/stdc++.h> 
// #define int long long

// using namespace std;
// void solve(); 

// int32_t main() 
// { 
//     ios_base::sync_with_stdio(false);cin.tie(NULL); 

//     #ifndef ONLINE_JUDGE 
//         freopen("inp.txt", "r", stdin); 
//         freopen("err.txt", "w", stderr); 
//         freopen("out.txt", "w", stdout); 
//     #endif 

//     int t=1; 
//     //cin>>t; 
//     while(t--) 
//     { 
//     solve(); 
//     cout<<endl; 
//     } 
//     cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
//     return 0; 
// } 

// map<int,int> color;

// bool NonColouredNode(int **arr,int &val,int n) {
//     for(int i=0;i<n;i++) {
//         if(!color[i]) {
//             val = i;
//             return true;
//         }
//     }
//     return false;
// }

// bool isValid(int **arr,int val,int num,int n) {
//     for(int i=0;i<n;i++) {
//         if(arr[val][i] && color[i] == num) {
//             return false;
//         }
//     }
//     return true;
// }

// bool algo(int **arr,int n,int m) {
//     int val;
//     if(!NonColouredNode(arr,val,n))
//         return true;
//     for(int i=1;i<=m;i++) {
//         if(isValid(arr,val,i,n)) {
//             color[val] = i;
//             if(algo(arr,n,m)) {
//                 return true;
//             }
//             color[val] = 0;
//         }
//     }
//     return false;
// }

// void solve() 
// { 
//     int n,m,e;
//     cin >> n >> m >> e;
//     int **arr = new int*[n];
//     for(int i=0;i<n;i++)
//         arr[i] = new int[n];
//     for(int i=0;i<n;i++)
//         for(int j=0;j<n;j++)
//             arr[i][j] = 0;
//     for(int i=0;i<e;i++) {
//         int a,b;
//         cin >> a >> b;
//         arr[a-1][b-1] = 1;
//         arr[b-1][a-1] = 1;
//     }
//     cout << algo(arr,n,m);
// } 





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

map<int,int> color;

bool NonColouredNode(bool arr[101][101],int &val,int n) {
    for(int i=0;i<n;i++) {
        if(!color[i]) {
            val = i;
            return true;
        }
    }
    return false;
}

bool isValid(bool arr[101][101],int val,int num,int n) {
    for(int i=0;i<n;i++) {
        if(arr[val][i] && color[i] == num) {
            return false;
        }
    }
    return true;
}

bool graphColoring(bool arr[101][101],int m,int n) {
    int val;
    if(!NonColouredNode(arr,val,n))
        return true;
    for(int i=1;i<=m;i++) {
        if(isValid(arr,val,i,n)) {
            color[val] = i;
            if(graphColoring(arr,m,n)) {
                return true;
            }
            color[val] = 0;
        }
    }
    return false;
}

void solve() 
{ 
    int n,m,e;
    cin >> n >> m >> e;
    bool arr[101][101];
    for(int i=0;i<n;i++)
        memset(arr[i],0,sizeof(arr[i]));
    for(int i=0;i<e;i++) {
        int a,b;
        cin >> a >> b;
        arr[a-1][b-1] = 1;
        arr[b-1][a-1] = 1;
    }
    cout << graphColoring(arr,m,n);
} 
