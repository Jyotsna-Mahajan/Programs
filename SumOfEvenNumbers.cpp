#include<iostream>
using namespace std;
int main()
{
    int n= 10, EvenSum=0, i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            EvenSum=EvenSum+i;
        }
        i++;
    }
    cout<<"EvenSum = "<<EvenSum<<endl;
}