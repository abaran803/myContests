#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void chk(int arr[],int n,int l,int r,int &minVal)
{
	if(l == r)
		return;
	int mid = (l+r)/2;
	if(mid == 0)
		return;
	int k = 0;
	int i;
	for(i=0;i<n;)
	{
		int sum1 = 0;
		int l = 0;
		while(sum1 < mid)
		{
			sum1 += arr[i++];
			l++;
		}
		if(sum1 > mid)
			break;
		k += (l-1);
	}
	if(i == n)
		minVal = min(minVal,k);
	chk(arr,n,l,mid-1,minVal);
	chk(arr,n,mid+1,l,minVal);
}

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
		int sum = 0;
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		int minVal = 0;
		cout << "Hi";
		chk(arr,n,0,sum,minVal);
		cout << minVal;
		cout << "Hi";
	}
	return 0;
}