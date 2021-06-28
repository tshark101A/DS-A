#include<bits/stdc++.h>
using namespace std;
void process_array(int arr[],int n,int k)
{
	int i=0,j=n-1,temp;
	while(i<j)
	{
		if(arr[i]==k)
		   {
		   	temp=arr[i];
		   	arr[i]=arr[j];
		   	arr[j]=temp;
		   	j--;
		   }
		else
		    i++;
	}	
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int i,k;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>k;
	process_array(arr,n,k);
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
return 0;
}
