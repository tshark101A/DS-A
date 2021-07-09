#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
      stack<char> stack;
        int i;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                stack.push(s[i]);
            else if(!stack.empty() && stack.top() == '(' && s[i]== ')')
                stack.pop();
            else if(!stack.empty() && stack.top() == '{' && s[i]== '}')
                stack.pop();
            else if(!stack.empty() && stack.top() == '[' && s[i]== ']')
                stack.pop();
            else 
                return false;
        }
        if(stack.empty())
            return true;
        else
            return false;
        }

int main()
{   
	string s;
	getline(cin,s);
    bool x=isValid(s);
    cout<<x;
return 0;
}
