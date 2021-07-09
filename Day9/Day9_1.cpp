#include<bits/stdc++.h>
using namespace std;
int find_val(char s)
    {
        switch(s)
        {
            case 'I' : return 1;
            case 'V' : return 5; 
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
        }
    return 0;
    }
    
int romanToInt(string s)
    {
       int i;
       int val=0;
       for(i=0;i<s.length();i++)
       {
           if(find_val(s[i])<find_val(s[i+1]))
              {
                  val=val+find_val(s[i+1])-find_val(s[i]);
                  i++;
              }
            else
                val=val+find_val(s[i]);
    }
             
 return val;
}

int main()
{   
	string s;
	getline(cin,s);
    int x=romanToInt(s);
    cout<<x;
return 0;
}
