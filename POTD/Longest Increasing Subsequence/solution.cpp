class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> v(nums.size(), INT_MAX);
        for(int i=0; i<nums.size(); i++){
            int ind = lower_bound(v.begin(), v.end(), nums[i]) - v.begin();
            v[ind] = nums[i];
        }
        return lower_bound(v.begin(), v.end(), INT_MAX) - v.begin();
    }
};