class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, j = 0;
        int tl = t.length();
        int sl = s.length();
        for(i = 0;i < sl; i++){
            if(s[i] == t[j]){
                j++;
            }
        }
        int n = tl - j;
        while(j < tl){
            s += t[j];
            j++;
        }
        return n;
    }
};