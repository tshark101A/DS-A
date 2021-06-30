#include<bits/stdc++.h>
using namespace std;
int goodPairs(int arr[],int n)
{
	int i,j,PairCount=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				PairCount+=1;
			}
		}
	}
return PairCount;	
}
int main()
{   
    int n,x;
    cin>>n;
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	x=goodPairs(arr,n);
	cout<<x;
return 0;
}
