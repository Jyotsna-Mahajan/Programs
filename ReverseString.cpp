#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string to be reversed: ";
    getline(cin,str);
    reverse(str.begin(), str.end());
    cout<<str<<endl;
    return 0;
}