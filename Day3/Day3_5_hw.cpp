#include<bits/stdc++.h>
using namespace std;

void create_arr(int arr[],int index[],int n)
{
	int i;
	vector<int> res;
	for(i=0;i<n;i++)
	{
		res.insert(res.begin()+index[i],arr[i]);
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
	int arr[n],arr1[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
    create_arr(arr,arr1,n);
return 0;
}
