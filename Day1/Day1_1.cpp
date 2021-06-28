#include<bits/stdc++.h>
using namespace std;
int remove_dup(int arr[],int n)
{
	int i=0,j;
	if(n==0)
	    return 0;
		for(j=1;j<n;j++)
		{
			if(arr[i]!=arr[j])
			{
			   i++;
			   arr[i]=arr[j];
		}
}
return i+1;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int x=remove_dup(arr,n);
	cout<<x<<endl;
	for(i=0;i<x;i++)
	{
		cout<<arr[i]<<" ";
	}
return 0;
}
