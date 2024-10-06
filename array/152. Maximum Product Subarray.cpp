https://leetcode.com/problems/maximum-product-subarray/description/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int n = nums.size();
        int minProduct = 1;
        int maxProduct = 1;
        int ans = INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i] < 0){
                swap(maxProduct, minProduct);  // if there is even number of -ve values we need to have product of all num present in nums if there is no zero.
            }
            maxProduct = max(maxProduct*nums[i], nums[i]);
            minProduct = min(minProduct*nums[i], nums[i]);
            ans = max(ans, maxProduct);
        }
        return ans;
    }
};
