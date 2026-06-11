class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);
        vector<int> temp = nums;
        reverse(temp.begin(), temp.end());    
        for(int i = 0; i < n; ++i){
            ans[i] = nums[i];
            ans[i + n] = temp[i];
        } 
        return ans; 
    }
};
