#include<iostream>
using namespace std;

int main()
{
    for(int num = 1; num <= 500; num++)  // Loop through numbers from 1 to 500
    {
        int sum = 0;  // Reset sum for each number
        
        for(int i = 1; i <= num / 2; i++)  // Find divisors of num
        {
            if(num % i == 0)
            {
                sum += i;  // Add divisors
            }
        }
        
        if(sum == num)  // Check if sum of divisors is equal to num
        {
            cout << num << endl;  // Print the perfect number
        }
    }

    return 0;
}
