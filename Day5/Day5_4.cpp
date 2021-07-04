#include<bits/stdc++.h>
using namespace std;

void reshape_mat(vector<vector<int> > arr,int n,int m)
{
	int i,j;
	vector<int> a;
	vector<vector<int> > a1;
	int c=0;
	if(n*m != arr.size()*arr[0].size()) 
	{
		for(i=0;i<arr.size();i++)
		{
			for(j=0;j<arr[0].size();j++)
			{
				cout<<arr[i][j]<<" ";
			}
			cout<<"\n";
		}
		return;
	}
	for(i=0;i<arr.size();i++) 
	{
        for(j=0;j<arr[0].size();j++) 
		{
            a.push_back(arr[i][j]);
            c++;
            if(c == m) {
                a1.push_back(a);
                a.clear();
                c=0;
            }
        }
    }
    for(i=0;i<a1.size();i++)
		{
			for(j=0;j<a1[0].size();j++)
			{
				cout<<a1[i][j]<<" ";
			}
		cout<<"\n";
		}
return;
  } 
int main()
{   
 int n,k,m,val,r,c;
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
	cin>>r>>c;
	reshape_mat(arr,r,c);
return 0;
}
