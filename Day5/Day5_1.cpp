#include<bits/stdc++.h>
using namespace std;

int main()
{   
 int n,k,m;
    cin>>n>>m;
	int arr[n][m];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		cin>>arr[i][j];
	    }
	}
	
	int peri = 0,rows,cols;
    rows = n;
    cols = m;
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
          {
          	if(!arr[i][j])
          	     continue;
          	peri= peri+(i==0 || !arr[i-1][j]);
			peri= peri+(i==rows-1 || !arr[i+1][j]);
			peri= peri+(j==0 || !arr[i][j-1]);
			peri= peri+(j==cols-1 || !arr[i][j+1]);
		  }
	cout<<peri;
return 0;
}
