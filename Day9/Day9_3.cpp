#include<bits/stdc++.h>
using namespace std;

 string addStrings(string a, string b) {
        int carry=0;
        string s="";
        int x,y,t;
        x=a.size()-1;
        y=b.size()-1;
        while(x>=0 || y>=0 || carry>0)
        {
            if(x>=0)
            {
                carry=carry+(a[x]-'0');
                x--;
            }
            if(y>=0)
            {
                carry=carry+(b[y]-'0');
                y--;
            }
            t=carry%10+'0';
            s.push_back(t);
            carry=carry/10;
        }
        reverse(s.begin(),s.end());
        return s;
    }

int main()
{   
    string x,y;
    getline(cin,x);
    getline(cin,y);
    string t=addStrings(x,y);
    cout<<t;
return 0;
}
