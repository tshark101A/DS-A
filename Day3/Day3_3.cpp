#include<bits/stdc++.h>
using namespace std;
void find_result(int arr[],int n)
{   vector<int> res;
	int freq=0,value=0;
	int i;
	for(i=1;i<=n;i=i+2)
	{
		freq=arr[i-1];
		value=arr[i];
		while(freq--)
		{
			res.push_back(value);
		}
	}
 for(i=0;i<res.size();i++)
 {
 	cout<<res[i]<<" ";
 }
 return;
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

    find_result(arr,n);
return 0;
}
