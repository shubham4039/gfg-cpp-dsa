class Solution {
public:
    int longestUniqueSubstring(string &s) {
        int n = s.length();
        int maxLength = 0;
        vector<int> lastPos(256, -1);
        int l = 0;
        
        for (int r = 0; r < n; r++) {
            if (lastPos[s[r]] >= l) {
                l = lastPos[s[r]] + 1;
            }
            lastPos[s[r]] = r;
            maxLength = max(maxLength, r - l + 1);
        }
        
        return maxLength;
    }
};