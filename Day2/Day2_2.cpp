#include<bits/stdc++.h>
using namespace std;
void intersection(int arr[],int arr1[],int n,int m)
{
	set<int> result;
	int i;
	map<int,int> inters;
	for(i=0;i<n;i++)
	{
		inters[arr[i]]++;
	}
	for(i=0;i<m;i++)
	{
		if(inters[arr1[i]])
		{
			result.insert(arr1[i]);
		}
	}
	set<int> :: iterator it;
    for(it=result.begin();it!=result.end();it++)
       cout<<*it<<" ";
return;
}

int main()
{   
    int n,x,m;
    cin>>n>>m;
	int arr[n],arr1[m];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>arr1[i];
	}
    intersection(arr,arr1,n,m);
return 0;
}
