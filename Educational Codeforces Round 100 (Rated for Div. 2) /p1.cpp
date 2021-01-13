#include<bits/stdc++.h> 
#define int long long
#define endl '\n'

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
		cout<<"\n"; 
	} 
	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 

void solve() 
{ 
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	int sum = arr[0]+arr[1]+arr[2];
	if(sum%9)
		cout << "NO";
	else
	{
		int k = sum/9;
		if(arr[0] < k || arr[1] < k || arr[2] < k)
			cout << "NO";
		else
			cout << "YES";
	}
} 