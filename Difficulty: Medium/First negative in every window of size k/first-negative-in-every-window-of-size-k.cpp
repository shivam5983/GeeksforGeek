//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int n = arr.size();
        int i = 0, j = 0;
        vector<int> result;
        deque<int> deq;

        while (j < n) {
            // If current element is negative, add it to the deque
            if (arr[j] < 0) {
                deq.push_back(arr[j]);
            }

            // Check if the window size is less than k
            if (j - i + 1 < k) {
                j++;
            }
            // When window size equals k
            else if (j - i + 1 == k) {
                // Add the first negative number or 0 if none
                if (!deq.empty()) {
                    result.push_back(deq.front());
                } else {
                    result.push_back(0);
                }

                // Before sliding the window, remove the outgoing element if it's negative and matches deque front
                if (!deq.empty() && arr[i] == deq.front()) {
                    deq.pop_front();
                }

                // Slide the window
                i++;
                j++;
            }
        }

        return result;
    }
};



//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.firstNegInt(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends