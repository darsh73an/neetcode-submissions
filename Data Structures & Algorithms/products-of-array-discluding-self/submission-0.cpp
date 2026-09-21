class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);

        int prefix = 1;
        for(int i=0; i<n; i++){
            ans[i] = prefix;    // store prefix in vector of ans from left
            prefix *= nums[i];  // this is used to store product from left side
        }

        int suffix = 1;
        for(int i=n-1; i>=0; i--){
            ans[i] *= suffix;    // multiply left product(already in ans[i]) and right product 
            suffix *= nums[i];   // this is used to store product from right side
        }
        return ans;
    }
};
