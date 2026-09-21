class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        // this already stores unique numbers in sorted order

        int longest = 0;

        for(int i : st){
            if(!st.count(i-1)){ // is prev number is not present eg -> 2,3 1 is not present
                int start = i;
                int currLength = 1;

                while(st.count(start+1)){ //  if next is present eg -> 2->3
                    start++;
                    currLength++;
                }

                longest = max(longest,currLength);
            }
        }
    return longest;
    }
};
