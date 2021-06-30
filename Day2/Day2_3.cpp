#include<bits/stdc++.h>
using namespace std;
void bool_res(vector<int> arr,int k)
{
	int i;
	vector<int> bool_val;
	int max1=*max_element(arr.begin(),arr.end());
	for(i=0;i<arr.size();i++)
	{
		if(arr[i]+k>=max1)
		      bool_val.push_back(true);
	    else
	          bool_val.push_back(false);
	}
	for(i=0;i<bool_val.size();i++)
	{
		cout<<bool_val[i]<<" ";
	}
return;
}
int main()
{   
    int n,x,k;
    cin>>n;
	vector<int> arr;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	cin>>k;
	bool_res(arr,k);
	
return 0;
}
