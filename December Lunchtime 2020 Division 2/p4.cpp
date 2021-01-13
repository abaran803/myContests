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

bool algo(int **arr,int m,int n)
{
    for(int i = 0; i < n; i++)
    {
        int row = 0, col = i;
        int l;
        if(col < n && row < m)
            l = arr[row][col];
        while (col < n && row < m)
        {
            if(arr[row][col] != l)
                return false;
            row++;
            col++;
        }
    }
    for(int i = 0; i < m; i++)
    {
        int row = i+1, col = 0;
        int l;
        if(col < n && row < m)
            l = arr[row][col];
        while (col < n && row < m)
        {
            if(arr[row][col] != l)
                return false;
            row++;
            col++;
        }
    }
    return true;
}

void solve() 
{ 
    int m,n;
    cin >> m >> n;
    int **arr = new int*[m];
    for(int i=0;i<m;i++)
        arr[i] = new int[n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> arr[i][j];
    int q;
    cin >> q;
    for(int i=0;i<q;i++)
    {
        int u,v,w;
        cin >> u >> v >> w;
        arr[u-1][v-1] = w;
        if(algo(arr,m,n))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
} 