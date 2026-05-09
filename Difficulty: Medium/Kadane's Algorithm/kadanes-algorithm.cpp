class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int ans = arr[0];
        int maxi = arr[0];
        for(int i = 1; i < arr.size(); i++){
            maxi = max( arr[i], maxi + arr[i]);
            ans = max(ans, maxi);
        }
        return ans;
    }
};