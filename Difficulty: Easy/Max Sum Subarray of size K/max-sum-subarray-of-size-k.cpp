class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        
        //checking edge case
        if( n<k ) return -1;
        
        int  sumOfWindow = 0;
        
        for(int i = 0 ; i< k; i++){
            sumOfWindow = sumOfWindow + arr[i];
        }
        
        int maxi = sumOfWindow;
        for( int i = k; i<n; i++){
            sumOfWindow = sumOfWindow + arr[i] - arr[i-k];
            maxi = max(maxi, sumOfWindow);
        }
        return maxi;
    }
};