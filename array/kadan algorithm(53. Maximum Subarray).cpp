//53. Maximum Subarray

//https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int temp =nums[0];
        int ans =nums[0];
        for(int i =1; i< n;i++){
            temp = max(temp+nums[i],nums[i]);
            ans = max(temp,ans);
        }
        return ans;
    }
};
