#include<bits/stdc++.h>
using namespace std;

int main()
{   
 int n,k,m,val;
    cin>>n>>m;
	vector<vector<int> > arr;
	int i,j;
	for(i=0;i<n;i++)
	{
		vector<int>a;
		for(j=0;j<m;j++)
		{
		cin>>val;
		a.push_back(val);
	    }
	    arr.push_back(a);
	}
	cin>>k;
	vector<vector<int> > arr1=arr;
	while(k--)
	{
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(j+1<m)
			{
				arr1[i][j+1]=arr[i][j];
			}
			if(i+1<n)
			{
				arr1[i+1][0]=arr[i][m-1];
			}
		}
	}
	arr1[0][0]=arr[n-1][m-1];
    arr=arr1;
   }
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
	}
return 0;
}
