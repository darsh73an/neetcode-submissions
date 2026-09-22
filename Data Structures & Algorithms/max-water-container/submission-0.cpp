class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int ans = 0, l = 0, r = n-1;

        while(l < r){
            int width = r-l;

            int height = min(heights[l],heights[r]);
            
            ans = max(ans,height*width);

            if(heights[l] < heights[r]){
                l++;
            }else{
                r--;
            }
        }
        return ans;
    }
};
