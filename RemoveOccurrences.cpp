#include<iostream>
#include<algorithm>
using namespace std;
string removeOccurences(string s, string part)
{
    while(s.length()>0 && s.find(part)<s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main()
{
    string s, part;
    cout<<"Enter the string: ";
    getline(cin,s);
    cout<<"Enter the part: ";
    getline(cin,part);
    cout<<removeOccurences(s,part);
}