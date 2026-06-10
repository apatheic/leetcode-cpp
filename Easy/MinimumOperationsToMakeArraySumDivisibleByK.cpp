class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int total = 0;
        int n = nums.size();
        for(int i=0; i < n; ++i){
            total += nums[i];
        }
            int rem = (total % k);
        if (rem == 0){
                return 0;
        }
        else{
            return rem;
        }
    }
};
