//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        int n= arr.size();
        if(n<k){
            return -1;
            
        }
        
        int maxSum=0;
        int windowSum=0;
        
        for(int i=0;i<k;i++){
            windowSum+=arr[i];
        
        maxSum=windowSum;
        
        }
        for(int i=k;i<n;i++){
            windowSum +=arr[i] - arr[i-k];
            maxSum= max(maxSum,windowSum);
            
            
        
        }
        
        return maxSum;
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
        int ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends