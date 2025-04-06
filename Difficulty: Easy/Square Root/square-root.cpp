//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// Function to find square root
// x: element to find square root
class Solution {
public:
    int floorSqrt(int x) {
        if (x == 0 || x == 1) return x; // Base cases
        
        int s = 1, e = x, ans = 0;
        
        while (s <= e) {
            long long mid = s + (e - s) / 2;
            long long square = mid * mid;
            
            if (square == x)
                return mid; // Found perfect square
            else if (square < x) {
                ans = mid;  // Store last valid mid
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans; // Floor value of sqrt(x)
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends