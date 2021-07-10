#include<bits/stdc++.h>
using namespace std;

bool check_vowel(char c)
{
        return c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U';
}
string reverseVowels(string s) 
{
        int i,j;
        i=0;
        j=s.length()-1;
        while(i<j)
        {
            while(i<j && !check_vowel(s[i]))
            {
                i++;
            }
            while(i<j && !check_vowel(s[j]))
            {
                j--;
            }
            swap(s[i],s[j]);
            i++;
            j--;
        }
     return s; 
}

int main()
{   
	string s;
	getline(cin,s);
    string x=reverseVowels(s);
    cout<<x;
return 0;
}
