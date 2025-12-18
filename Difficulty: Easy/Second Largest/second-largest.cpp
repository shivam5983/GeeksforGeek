class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        
        int n= arr.size();
        int maxi= INT_MIN;
        int second_max= INT_MIN;
       
       
        
        for(int i=0;i<n;i++){
            if(arr[i]>maxi) {
                maxi= arr[i];
            }
            
        }
        
        
        for(int i=0;i<n;i++){
            if(arr[i]> second_max && arr[i]!= maxi ){
                second_max = arr[i];
            }
            
        }
        return second_max;
        
    }
};