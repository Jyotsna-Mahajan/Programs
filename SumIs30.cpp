#include<iostream>
using namespace std;
int test(int x, int y)
{
    if(x==30||y==30||x+y==30)
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
    cout<<test(30,0)<<endl;
    cout<<test(25,5)<<endl;
    cout<<test(20,30)<<endl;
    cout<<test(20,25)<<endl;
    return 0; //It indicates successful execution of the program.
}