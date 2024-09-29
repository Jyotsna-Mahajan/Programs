#include<iostream>
using namespace std;
string test(string str)
{
    //extract last character of the string
    string s= str.substr(str.length()-1);
    
    return  s + str + s;
}
int main()
{
    cout<<test("Red")<<endl;
    cout<<test("Green")<<endl;
    cout<<test("1")<<endl;
}