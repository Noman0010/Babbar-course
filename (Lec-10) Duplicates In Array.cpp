#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    
    //XOR ing all array elements
    for(int i = 0; i<arr.size(); i++ ) {
        ans = ans^arr[i];
    }
    
    //XOR [1, n-1]
    for(int i = 1; i<arr.size();i++ ) {
        ans = ans^i;
    }
    return ans;
}

int main()
{
    // Creating a sample vector
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 3};
    
    // Finding the duplicate number
    int duplicate = findDuplicate(arr);
    
    // Printing the duplicate number
    cout << "The duplicate number is: " << duplicate << endl;
    
    return 0;
}
