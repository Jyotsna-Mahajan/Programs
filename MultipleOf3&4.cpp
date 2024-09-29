#include<iostream>
using namespace std;
bool test(int num)
{
    if(num%3==0||num%7==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cout<<test(3)<<endl;
    cout<<test(14)<<endl;
    cout<<test(12)<<endl;
    cout<<test(37)<<endl;
    
}