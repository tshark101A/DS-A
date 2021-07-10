#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) 
{
       int i,j;
       i=0;
       j=s.length()-1;
       while(i<=j)
       {
          
           if(!isalnum(s[i]))
           {
               i++;
           }
           else if(!isalnum(s[j]))
           {
               j--;
           }
           else
           {
               if(tolower(s[i])!=tolower(s[j]))
                   return false;
               i++;
               j--;
           }
       }
    return true;
}

int main()
{   
	string s;
	getline(cin,s);
    bool x=isPalindrome(s);
    if(x==1)
        cout<<"True";
    else
        cout<<"False";
return 0;
}
