#include<bits/stdc++.h>
using namespace std;

string convertToTitle(int cnum)
{
        string result="";
        while(cnum>0)
        {
            char c='A'+(cnum-1)%26;
            result=c+result;
            cnum=(cnum-1)/26;
        }
      return result;
}

int main()
{   
	int n;
	cin>>n;
    string x=convertToTitle(n);
    cout<<x;
return 0;
}
