class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0, i = 0;
        int tlength = t.length();
        int slength = s.length();
        if(slength == 0) return true;
        for(i = 0; i < tlength && j < slength; i++){
            if(t[i] == s[j]){
                j++;
            }
        }
        while(i < tlength){
            i++;
        }
        if(i == tlength && j == slength){
            return true;
        }
        else{
            return false;
        }
    }
};