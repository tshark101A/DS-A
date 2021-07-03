#include<bits/stdc++.h>
using namespace std;

void peak_arr(vector<int> arr)
{
	int i=0;
    while(arr[i]<arr[i+1])
            i++;
    cout<< i;
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
    
    peak_arr(arr);
return 0;
}
