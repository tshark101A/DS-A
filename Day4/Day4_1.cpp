#include<bits/stdc++.h>
using namespace std;

void find_res(vector<string> arr)
{
	vector<string> s={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	set<string> s1;
	string res;
	int i,j;
	for(i=0;i<arr.size();i++)
	{
		res="";
		for(j=0;j<arr[i].length();j++)
		{
			res+=s[arr[i][j]-'a'];
		}
		s1.insert(res);
	}
	cout<<s1.size();
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
    
    find_res(arr);
return 0;
}


