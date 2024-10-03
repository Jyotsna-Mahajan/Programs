#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Element at 2nd Index: "<<v.at(2)<<endl;
    cout<<"Front: "<< v.front()<<endl;
    cout<<"Back: "<<v.back()<<endl;
    cout<<"Before Pop: "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"After pop: "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Before Clear size: "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size: "<<v.size()<<endl;
    
    vector<int> a(5,1);
    cout<<"Print a: "<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int>last(a);
    cout<<"Print Last: "<<endl;
    for(int i:last)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    
    
}