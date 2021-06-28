#include<bits/stdc++.h>
using namespace std;
void process_array(int arr[],int n,int temp[])
{
	int x=n/2,k=0,i;
    for(i=0;i<n;i++)
    {
    	if(i%2==0)
    	{
    	     temp[i]=arr[k];
    	     k++;
        }
        else
        {
        	temp[i]=arr[x];
        	x++;
		}
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n],temp[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	process_array(arr,n,temp);
	for(i=0;i<n;i++)
	{
		cout<<temp[i]<<" ";
	}
return 0;
}
