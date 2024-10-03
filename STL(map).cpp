#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>m;
    m[1]="Jyotsna";
    m[13]="Jaya";
    m[2]="Mahajan";
    m.insert({5,"Jyotika"});
    cout<<"before erase: "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    m.erase(13);
    cout<<"After erase: "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}