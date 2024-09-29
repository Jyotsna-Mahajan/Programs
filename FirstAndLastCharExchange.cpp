#include<iostream>
using namespace std;
string test(string str)
{
    if(str.length()>1)
    {
        swap(str[0],str[str.length()-1]);
    }
    return str;
}
int main()
{
    cout<<test("abcd")<<endl;
    cout<<test("Jyotsna")<<endl;
    return 0; 
}