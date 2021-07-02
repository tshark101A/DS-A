#include<bits/stdc++.h>
using namespace std;

void find_res(vector<int> arr)
{
	sort(arr.begin(),arr.end());
    int res=0,i;
    for(i=0;i<arr.size();i=i+2)
    {
        res+=arr[i];
    }
cout<<res;
return;
}

int main()
{   
 int n,k;
    cin>>n;
	vector<int> arr;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>k;
		arr.push_back(k);
	}
    
    find_res(arr);
return 0;
}
