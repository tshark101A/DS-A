#include<bits/stdc++.h>
using namespace std;

void reverse_xor(int arr[],int n,int k)
{
	int i;
	vector<int> res(n+1);
	res[0]=k;
	for(i=1;i<=n;i++)
	{
		res[i]=res[i-1]^arr[i-1];
	}
	for(i=0;i<=n;i++)
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
    cin>>k;
    reverse_xor(arr,n,k);
return 0;
}
