#include<iostream>
using namespace std;
bool test(string str)
{
    int count=0;
    for(int i=1; i<str.length(); i++)
    {
        if(str[i]=='a')
        {
           count++; 
        }
        if(count<2 && str.substr(i,2)=="aa")
        {
        return true;
        }
    }
    
    
}
int main()
{
    cout << test("caabb") << endl;
    cout << test("babaaba") << endl;
    cout << test("aaaaa") << endl;
}