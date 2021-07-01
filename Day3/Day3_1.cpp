#include<bits/stdc++.h>
using namespace std;

void min_ele(int arr[],int n)
{
	int i,j,count;
	vector<int> res;
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(i!=j && arr[i]>arr[j])
			{
				count++;
			}
		}
		res.push_back(count);
	}
    for(i=0;i<res.size();i++)
    {
    	cout<<res[i]<<" ";
	}
return;
}

int main()
{   
    int n,k;
    cin>>n;
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    min_ele(arr,n);
return 0;
}
