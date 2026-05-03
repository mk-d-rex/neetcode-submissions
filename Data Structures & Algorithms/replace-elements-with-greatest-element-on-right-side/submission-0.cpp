class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i;
        for(i = 0;i < arr.size() - 1; i++){
            vector<int> temp(arr.begin() + i + 1, arr.end());
            sort(temp.begin(), temp.end());
            int n = temp.size();
            arr[i] = temp[n - 1];
        }
        arr[i] = -1;
        return arr;
    }
};