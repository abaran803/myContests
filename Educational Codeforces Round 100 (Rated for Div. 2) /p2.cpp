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
	int n;
	cin >> n;
	int arr[n];
	int sumO = 0;
	int sumE = 0;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		if(i&1)
			sumO += arr[i];
		else
			sumE += arr[i];
	}
	if(sumO>sumE)
		for(int i=0;i<n;i+=2)
			arr[i] = 1;
	else
		for(int i=1;i<n;i+=2)
			arr[i] = 1;
	for(int i=0;i<n;i++)
		cout << arr[i] << ' ';
} 