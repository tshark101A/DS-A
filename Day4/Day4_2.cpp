#include<bits/stdc++.h>
using namespace std;

void xor_sum(vector<int> arr)
{
	    int bits=0,it;
        for(it=0;it<arr.size();it++)
        {
            bits=bits|arr[it];
		}
        int x= bits*pow(2,arr.size()-1);
        cout<<x;
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
    
    xor_sum(arr);
return 0;
}
