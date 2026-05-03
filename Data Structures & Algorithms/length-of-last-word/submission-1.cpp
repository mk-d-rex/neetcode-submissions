class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = s.length();
        int i;
        do{
            j--;
        }while(s[j] == ' ');
        i = j;
        do{
            i--;
        }while(s[i] != ' ' && i >= 0);
        return j - i;
    }
};