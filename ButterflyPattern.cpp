#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout << "Enter the number: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        // First part: Print increasing stars
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        
        // Second part: Print decreasing spaces (6, 4, 2, ...)
        for(int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        
        // Third part: Print the second set of stars
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<"*";
        }
        for(int j = 1; j <= 2*i; j++)
        {
            cout << " ";
        }
        for(int j = 1; j <=n-i; j++)
        {
            cout << "*";
        }

        
        
        cout<<endl;
    }

    return 0;
}
