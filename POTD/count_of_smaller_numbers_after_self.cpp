//315. Count of Smaller Numbers After Self
//Count of Smaller Numbers After Self 
//You are given an integer array nums and you have to return a new counts array. The counts array has the property where counts[i] is the number of smaller elements to the right of nums[i].
//Exapmplw 1:
//Input: [5, 2, 6, 1]
//Output: [2, 1, 1, 0]
//Explanation:
//To the right of 5 there are 2 smaller elements (2 and 1).
// To the right of 2 there is only 1 smaller element (1).
// To the right of 6 there is 1 smaller element (1).
// To the right of 1 there is 0 smaller element.

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        if(nums.size() == 0 || nums.size() == 1){
            return ans;
        }
        vector<int> temp;
        temp.push_back(nums[nums.size()-1]);
        for(int i=nums.size()-2;i>=0;i--){
            int ind = lower_bound(temp.begin(),temp.end(),nums[i])-temp.begin();
            ans[i]=ind;
            temp.insert(temp.begin()+ind,nums[i]);
        }
        return ans;
    }
};