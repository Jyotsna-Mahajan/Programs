#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("Jyotsna");
    s.push("Jyotika");
    s.push("Jaya");
    s.push("Jasmine");
    cout<<"Top Element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element: "<<s.top()<<endl;
    cout<<"Size of the stack: "<<s.size()<<endl;
    cout<<"Empty or not: "<<s.empty()<<endl;
    
    
}