#include<bits/stdc++.h>
using namespace std;
void compare_arr(vector<int> heights)
{
	vector<int>height;
    int count=0;
    for(int i=0;i<heights.size();i++)
    {
        height.push_back(heights[i]);
    }
    sort(height.begin(),height.end());
    for(int i=0;i<heights.size();i++)
    {
        if(heights[i]!=height[i])
        {
            count++;
        }
    }
cout<<count;
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
    
    compare_arr(arr);
return 0;
}
