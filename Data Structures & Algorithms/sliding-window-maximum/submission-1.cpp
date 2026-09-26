class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> dq;
        vector<int>ans;

        for(int i=0; i<n; i++){
            // remove non window elements
            if(!dq.empty() && dq.front() <= i-k){  // if bcoz only removing one non window ele
                                            // and cmp idx of last st of win with last idx of win
                dq.pop_front();
            }

            // remove smaller elements than 
            while(!dq.empty() && nums[dq.back()] <= nums[i]){
                dq.pop_back();
            }

            // add curr element
            dq.push_back(i);  // idx should be pushed

            // if full check done in win
            if(i >= k-1){
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
    }
};
