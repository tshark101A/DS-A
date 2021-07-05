#include<bits/stdc++.h>
using namespace std;

void find_res(vector<vector<int> > arr)
{
	 int ans=0;
        int i,j;
        for(i=0;i<arr.size();i++)
        {
            for(j=0;j<arr[0].size();j++)
            {
                if(arr[i][j]!=0)
                {
                    ans=ans+4*arr[i][j]+2;
                }
                if(i>0)
                {
                    ans=ans-min(arr[i][j],arr[i-1][j])*2;
                }
                if(j>0)
                {
                    ans=ans-min(arr[i][j],arr[i][j-1])*2;
                }
            }
        }
        cout<<ans;
return;
}

int main()
{   
 int n,m,val;
    cin>>n>>m;
	vector<vector<int> > arr;
	int i,j;
	for(i=0;i<n;i++)
	{
		vector<int>a;
		for(j=0;j<m;j++)
		{
		cin>>val;
		a.push_back(val);
	    }
	    arr.push_back(a);
	}
    find_res(arr);
return 0;
}
