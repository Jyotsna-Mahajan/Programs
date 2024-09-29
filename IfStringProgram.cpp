#include<iostream>
using namespace std;
string test(string s)
{
    if(s.length()>2 && s.substr(0,2)=="if")
    {
        return s;
    }
    else
    {
        return "if "+ s;//prepend "if" to the string if it doesn't start with "if" or has a length less than 2.
    }
}
int main()
{
    cout<<test("if else")<<endl;
    cout<<test("else")<<endl;
    return 0; 
}