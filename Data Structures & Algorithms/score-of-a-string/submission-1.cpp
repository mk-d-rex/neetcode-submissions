class Solution {
public:
    int scoreOfString(string s) {
        int n = s.length();
        int total = 0;
        int i = 0;
        for(i = 0;i < n - 1; i++){
            total += (s[i] > s[i + 1])? (s[i] - s[i + 1]) : (s[i + 1] - s[i]);
        }
        return total;
    }
};