class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        else{
            unordered_multiset<char> temp;
            for(char i: s) temp.insert(i);
            for(char i: t){
                if(temp.count(i) != 0){
                    temp.erase(temp.find(i));
                }
                else{
                    return false;
                }
            }
            return true;
        }
    }
};
