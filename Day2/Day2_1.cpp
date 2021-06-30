#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		     cin>>arr[i][j];
	}
	int max=0,sum,cust;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<m;j++)
		{
			sum+=arr[i][j];
		}
		if(max<sum)
		{
			max=sum;
			cust=i+1;
		}
	}
	cout<<cust;
return 0;
}
