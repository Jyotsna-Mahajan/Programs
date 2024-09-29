#include<iostream>
using namespace std;
int test(int x, int y)
{
    if(x==y)
    {
        return (x+y)*3;
    }
    else
    {
        return (x+y);
    }
}
int main()
{
    cout<<test(1,2)<<endl;
    cout<<test(3,2)<<endl;
    cout<<test(2,2)<<endl;
    
}