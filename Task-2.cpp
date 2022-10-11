#include<iostream>
using namespace std;

string encode(string s,int j)
{
    string str1;
    for(int i=2;i<s.length();i+=j)
    {
       int x=int (s[i]);
       str1[i]=char(x+2);
       s[i]=str1[i];
       i+=1;
    }
    return s;
}

int main()
{
    string str="I am a student";
    string str1=encode(str,2);
    for(int i=0;i<str.length();i++)
    {
        cout<<str1[i];
    }

    return 0;
}
