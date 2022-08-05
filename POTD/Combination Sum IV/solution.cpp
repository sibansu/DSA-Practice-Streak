class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
       
        vector<unsigned int> dp(target+1,0);
        dp[0]=1;
        for(int i=1;i<=target;i++){
            for(int element: nums){
                if(element<= i){
                    dp[i] += dp[i-element];
                } 
            }
        }
        return dp[target];
    }
};