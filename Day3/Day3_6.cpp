#include<bits/stdc++.h>
using namespace std;

void truncateSentence(string s, int k) {
     string :: iterator it;
     string res="";
     int c=0;
     for(it=s.begin();it!=s.end();it++)
     {
         if(*it==' ')
             c++;
         if(c==k)
             break;
         res+=*it;
     }
    cout<<res;
return;
}

int main()
{   
    int k;
	string str;
    getline (cin,str);
    cin>>k;
    truncateSentence(str,k);
return 0;
}
