class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> n(nums.begin(), nums.end());
        for(int i = 0;i < nums.size(); i++){
            if(n.count(nums[i]) == 0){
                return true;
            }
            else{
                n.erase(n.find(nums[i]));
            }
        }
        return false;
    }
};