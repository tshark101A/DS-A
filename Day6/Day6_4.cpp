#include<bits/stdc++.h>
using namespace std;

bool special_mat(vector<vector<int> > matrix)
{
	 int i,j;
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[0].size();j++)
            {
                if(i>0 && j>0 && matrix[i-1][j-1]!=matrix[i][j])
                    return false;
            }
        }
    return true;
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
   bool x=special_mat(arr);
   if(x==true)
        cout<<"special";
   else
        cout<<"not special";
return 0;
}
