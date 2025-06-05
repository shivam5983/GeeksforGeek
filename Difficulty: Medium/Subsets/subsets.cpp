// User function Template for C++

class Solution {
  public:
  
  void subsequences(vector<int> &arr, int index, int n, vector<int>&temp, vector<vector<int>>&ans){
      if(index==n){
          ans.push_back(temp);
          
          return;
      }
      
      
      subsequences(arr,index+1,n , temp, ans);
      
      
      
      temp.push_back(arr[index]);
      subsequences(arr,index+1,n,temp,ans);
      
      temp.pop_back();
      
      
      
      
      
     
      
  }
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        vector<int>temp;
        vector<vector<int>> ans;
        subsequences(arr,0,arr.size(),temp,ans);
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};