class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0, i = 0;
        int tlength = t.length();
        int slength = s.length();
        if(slength == 0) return true;
        for(i = 0; i < tlength; i++){
            if(t[i] == s[j]){
                j++;
            }
        }
        if(i == tlength && j == slength){
            return true;
        }
        else{
            return false;
        }
    }
};