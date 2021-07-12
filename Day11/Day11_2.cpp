#include<bits/stdc++.h>
using namespace std;
string mostCommonWord(string paragraph, vector<string> banned) 
{
        int i,freq=INT_MIN;
        string t;
        unordered_set<string> s(banned.begin(),banned.end());
        for(i=0;i<paragraph.length();i++)
        {
            paragraph[i]=isalpha(paragraph[i]) ? tolower(paragraph[i]) : ' ';
        }
            stringstream s1(paragraph);
            string w;
            unordered_map<string,int> out;
            while(s1>>w)
            {
                if(s.find(w)==s.end())
                {
                    out[w]++;
                    if(freq<out[w])
                    {
                        t=w;
                        freq=out[w];
                    }
                }
            }
            
     return t;
}
int main()
{   
    int n,i;
    string k,t;
    getline(cin,t);
    cin>>n;
	vector<string> s;
	for(i=0;i<n;i++)
	{
		cin>>k;
		s.push_back(k);
	}
    string x=mostCommonWord(t,s);
    cout<<x;
return 0;
}
