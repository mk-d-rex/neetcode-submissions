class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        vector<int> count(27,0);
        for(int i = 0;i < s.length(); i++){
            count[s[i] - 97 + 1]++;
            count[t[i] - 97 + 1]--;
        }
        for(int i: count){
            if(i != 0) return false;
        }
        return true;
    }
};
