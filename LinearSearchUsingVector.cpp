#include<iostream>
#include<vector>
using namespace std;
int LinearSearch(const vector<int>&vec, int key)
{
    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i]==key)
        {
            return i;
        }
        
        
    }
    return -1;
}
int main()
{
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(5);
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    cout<<LinearSearch(vec,key);
    return 0; 
}
