class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
       int n = mat.size();
       int top = 0;
       int down = n-1;
       
       while(top < down){
           if(mat[top][down] == 1) top++;
           else down--;
       }
       
       int ans = top;
        
        for (int i = 0; i < n; i++) {
            if (i != ans) {
               if (mat[ans][i] == 1 || mat[i][ans] == 0) {
                    return -1;
                }
            }
        }
        return ans;
    }
};