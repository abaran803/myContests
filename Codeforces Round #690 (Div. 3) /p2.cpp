#include<iostream>
#include<vector>
using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("inp.txt","r",stdin);
		freopen("out.txt","w",stdout);
	#endif
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		char arr[n];
		bool isCorr = false;
		for(int i=0;i<n;i++)
			cin >> arr[i];
		if(arr[0] == '2' && arr[1] == '0' && arr[2] == '2' && arr[3] == '0')
			isCorr = true;
		else if(arr[0] == '2' && arr[1] == '0' && arr[2] == '2' && arr[n-1] == '0')
			isCorr = true;
		else if(arr[0] == '2' && arr[1] == '0' && arr[n-2] == '2' && arr[n-1] == '0')
			isCorr = true;
		else if(arr[0] == '2' && arr[n-3] == '0' && arr[n-2] == '2' && arr[n-1] == '0')
			isCorr = true;
		else if(arr[n-4] == '2' && arr[n-3] == '0' && arr[n-2] == '2' && arr[n-1] == '0')
			isCorr = true;
		if(isCorr)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
	return 0;
}