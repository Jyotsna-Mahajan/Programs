#include<iostream>
using namespace std;
int main()
{
    int n=5, OddSum=0, i=1;
    while(i<=n)
    {
        if(i%2!=0)
        {
            OddSum=OddSum+i;
        }
        i++;
    }
    cout<<"OddSum = "<<OddSum<<endl;
}