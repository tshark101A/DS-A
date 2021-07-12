#include<bits/stdc++.h>
using namespace std;
 vector<string> findWords(vector<string> words) 
{
        int i,j,t,c;
        vector<string> out;
        int arr[26]={2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3};
        for(i=0;i<words.size();i++)
        {
            t=arr[tolower(words[i][0]) - 97];
            c=0;
            for(j=1;j<words[i].size();j++)
            {
                if(t!=arr[tolower(words[i][j]) - 97])
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                out.push_back(words[i]);
            }
        }
        return out;
}
int main()
{   
    int n,i;
    cin>>n;
    string k;
	vector<string> s;
	for(i=0;i<n;i++)
	{
		cin>>k;
		s.push_back(k);
	}
    vector<string> x=findWords(s);
    for(i=0;i<x.size();i++)
    {
    	cout<<x[i]<<" ";
	}
return 0;
}
