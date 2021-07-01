#include<bits/stdc++.h>
using namespace std;
void Index_swap(int arr[],char arr1[],int n)
{
	char temp[n],i;
	for(i=0;i<n;i++)
	{
		temp[arr[i]]=arr1[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<temp[i]<<" ";
	}
return;
}
int main()
{   
    int n,x;
    cin>>n;
	int arr[n];
	char arr1[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
    Index_swap(arr,arr1,n);
return 0;
}
