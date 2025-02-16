#include<iostream>
#include<algorithm>

using namespace std;

bool isAlphaNum(char ch)
{
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')) 
    {
        return true;
    }
    return false;
}

bool isPalindrome(string s)
{
    int st = 0, end = s.length() - 1;
    while (st < end)
    {
        if (!isAlphaNum(s[st])) // Skip non-alphanumeric characters
        {
            st++;
            continue;
        }
        if (!isAlphaNum(s[end])) // Skip non-alphanumeric characters
        {
            end--;
            continue;
        }
        if (tolower(s[st]) != tolower(s[end])) // Compare case-insensitive
        {
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    if (isPalindrome(s)) 
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;

    return 0;
}
