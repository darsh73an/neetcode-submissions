class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        vector<int> ans;
        vector<vector<int>>bucket(n+1);

        for(int i : nums){
            mp[i]++;
        }

        for(auto& [num,count] : mp){
            bucket[count].push_back(num);
        }

        for(int i=n; i>=1 && ans.size() < k; i--){
            for(int i : bucket[i]){
                ans.push_back(i);

                if(ans.size() == k){
                    break;
                }
            }
        }
        return ans;
    }
};
