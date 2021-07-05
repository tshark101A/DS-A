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
	vector<vector<int> > arr1(arr[0].size(),vector<int>(arr.size(),0));
	for(i=0;i<arr.size();i++)
	{
		for(j=0;j<arr[0].size();j++)
		{
			arr1[j][i]=arr[i][j];
		}
	}
	for(i=0;i<arr1.size();i++)
	{
		for(j=0;j<arr1[0].size();j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<"\n";
	}
return 0;
}
