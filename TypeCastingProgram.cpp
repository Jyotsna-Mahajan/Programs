#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<fixed<<setprecision(1);//setting the floating point number to display with 1 decimal place.
    int i1=4, i2=8;
    cout<<i1/i2<<endl;
    cout<<(double)i1/i2<<endl;
    cout<<i1/(double)i2<<endl;
    cout<<(double)(i1/i2)<<endl;
    
    double d1=5.5, d2=6.6;
    cout<<(int)d1/i2<<endl;
    cout<<(int)(d1/i2)<<endl;
    d1=i1;
    cout<<d1<<endl;
    i2=d2;
    cout<<i2<<endl;
    
}