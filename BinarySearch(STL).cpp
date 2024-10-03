#include <iostream>
#include <vector>
#include <algorithm>  // For binary_search
using namespace std;

int main() {
    vector<int> v = {11, 1, 9, 3, 7, 5};  
     
    sort(v.begin(),v.end());
    int key;
    cout << "Enter the element to search for: ";
    cin >> key;

    
    if (binary_search(v.begin(), v.end(), key)) {
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
