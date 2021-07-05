#include<bits/stdc++.h>
using namespace std;

void flip_arr(vector<vector<int> > image)
{
	for(int i=0;i<image.size();i++)
    {   
        reverse(image[i].begin(),image[i].end());
    }
      
    for(int i=0;i<image.size();i++)
        {
            for(int j=0;j<image[0].size();j++)
                  image[i][j]=1^image[i][j];
        }
    for(int i=0;i<image.size();i++)
	{
		for(int j=0;j<image[0].size();j++)
		{
			cout<<image[i][j]<<" ";
		}
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
   flip_arr(arr);
return 0;
}
