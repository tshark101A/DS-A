#include<bits/stdc++.h>
using namespace std;

void find_res(vector<vector<int> > arr)
{
	    vector<int> res;
        int r=arr.size();
        int c=arr[0].size();
        int mint,maxt;
        int k;
        for(int i=0;i<r;i++)
        {
         maxt=INT_MAX;
         mint=INT_MIN;
         k=0;
            for(int j=0;j<c;j++)
            {
                if(arr[i][j]<maxt)
                {
              maxt=min(maxt,arr[i][j]);  
              k=j;
                }
            } 
            for(int j=0;j<r;j++)
            {
             mint=max(mint,arr[j][k]);  
            }
            if(maxt==mint)
            {
                res.push_back(maxt);
                cout<< res[0];
                return;
            }  
        }
        cout<< res[0];
    return;
    }

int main()
{   
 int n,k,m,val;
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
