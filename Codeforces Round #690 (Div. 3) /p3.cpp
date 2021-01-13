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
		vector<int> vec;
		if(n > 45)
			cout << -1 << endl;
		else
		{
			if(n <= 9)
				cout << n << endl;
			else
			{
				int sum = 0;
				for(int i=9;i>0;i--)
				{
					vec.push_back(i);
					sum += i;
					if(sum == n)
						break;
					if(sum > n)
					{
						sum -= vec.back();
						vec.pop_back();
						vec.push_back(n-sum);
						break;
					}
				}	
				for(int i=vec.size()-1;i>=0;i--)
					cout << vec[i];
				cout << endl;
			}
		}
	}
	return 0;
}