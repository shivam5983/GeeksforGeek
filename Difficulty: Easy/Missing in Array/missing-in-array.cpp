//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size() + 1; // n should be arr.size() + 1
        
        // Sum of elements in the array
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }
        
        // Sum of numbers from 1 to n
        int sum2 = n * (n + 1) / 2;
        
        // Missing number
        return sum2 - sum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.missingNumber(a) << endl;
    }

    return 0;
}

// } Driver Code Ends