#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        int i;
        string LCP=strs[0];
        for(i=1;i<strs.size();i++)
        {
            while(strs[i].find(LCP)!=0)
            {
                LCP=LCP.substr(0,LCP.length()-1);
                if(LCP.empty())
                    return "";
            }
        }
    return LCP;
    }
    
    
int main()
{   
    int n;
    string k;
    cin>>n;
	vector<string> arr;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>k;
		arr.push_back(k);
	}
    string x=longestCommonPrefix(arr);
    cout<<x;
return 0;
}
