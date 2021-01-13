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
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		vector<int> vec;
		for(int i=0,j=n-1;i<=j;i++,j--)
		{
			if(i == j)
				vec.push_back(arr[i]);
			else
			{
				vec.push_back(arr[i]);
				vec.push_back(arr[j]);
			}
		}
		for(int it: vec)
			cout << it << ' ';
		cout << endl;
	}
	return 0;
}