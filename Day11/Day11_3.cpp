#include<bits/stdc++.h>
using namespace std;
vector<int> shortestToChar(string s, char c) 
{
        int i,j;
        vector<int> index;
        vector<int> res(s.length());
        for(i=0;i<s.length();i++)
        {
            if(s[i]==c)
                index.push_back(i);
        }
        vector<int> dist(index.size());
        for(i=0;i<s.length();i++)
        {
            if(s[i]==c)
                res[i]=0;
            else
            {
                for(j=0;j<index.size();j++)
                {
                    dist[j]=abs(index[j]-i);
                }
                int min=dist[0];
                for(j=1;j<dist.size();j++)
                {
                    if(dist[j]<min)
                    {
                        min=dist[j];
                    }
                }
            res[i]=min;
            }
        }
     return res;}
int main()
{   
    string t;
    getline(cin,t);
    char c;
    cin>>c;
    vector<int> x=shortestToChar(t,c);
    for(int i=0;i<x.size();i++)
    	cout<<x[i]<<" ";
return 0;}
