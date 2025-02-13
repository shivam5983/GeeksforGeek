//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int findFloor(vector<int>& arr, int k) {

        int n=arr.size();
        int start=0;
        int end=n-1;
        int res=-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid]>k){
                
                end=mid-1;
                
            }
            else{
                res=mid;
                start=mid+1;
                
            }
        }
        return res;
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
        int ans = ob.findFloor(arr, k);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends