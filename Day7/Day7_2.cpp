#include<bits/stdc++.h>
using namespace std;

void find_res(vector<vector<int> > arr,int k)
{
	int i,j;
        vector<int> ar;
        vector<pair<int,int> > ki;
        int c;
        for(i=0;i<arr.size();i++)
        {
            c=0;
            for(j=0;j<arr[0].size();j++)
            {
                if( arr[i][j]==1)
                {
                    c++;
                }
            }
            ki.push_back({c,i});
        }
        
        sort(ki.begin(),ki.end());
        for(i=0;i<k;i++){
            ar.push_back(ki[i].second);
        }
        for(i=0;i<ar.size();i++)
        {
        	cout<<ar[i]<<" ";
		}
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
	cin>>k;
   find_res(arr,k);
return 0;
}
