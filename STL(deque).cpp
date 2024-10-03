#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"After pop "<<endl;
    d.pop_back();
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Print First Index Element: "<<d.at(1)<<endl;
    cout<<"Front: "<<d.front()<<endl;
    cout<<"Back: "<<d.back()<<endl;
    cout<<"Empty or not: "<<d.empty()<<endl;
    cout<<"Before erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase: "<<d.size()<<endl;
    cout<<"Elements in deque are: ";
    for(int i:d)
    {
        cout<<i<<" ";
        
    }
    cout<<endl;
    
}