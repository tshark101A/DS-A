#include<bits/stdc++.h>
using namespace std;

void find_res(vector<vector<int> > arr)
{
	int i,j;
        int count=0;
        for(i=0;i<arr.size();i++)
        {
            for(j=0;j<arr[0].size();j++)
            {
                if(arr[i][j]<0)
                    count++;
            }
        }
        cout<< count;
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
