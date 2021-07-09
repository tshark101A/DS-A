#include<bits/stdc++.h>
using namespace std;


string addBinary(string a, string b) {
       int carry=0;
       string output="";
       int x,y;
       x=a.size()-1;
       y=b.size()-1;
       while(x>=0 || y>=0 || carry>0)
       {
           if(x>=0 && a[x--]=='1')
           {
               carry++;
           }
           if(y>=0 && b[y--]=='1')
           {
               carry++;
           }
           if(carry%2==1)
           {
               output.insert(0,1,'1');
           }
           else
           {
               output.insert(0,1,'0');
           }
           carry=carry/2;
       }
     return output;
    }
    
int main()
{   
    string x,y;
    getline(cin,x);
    getline(cin,y);
    string t=addBinary(x,y);
    cout<<t;
return 0;
}
