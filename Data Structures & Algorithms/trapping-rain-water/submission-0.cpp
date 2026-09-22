class Solution {
public:
    int trap(vector<int>& height) {
        int leftMax = 0, rightMax = 0;
        int n = height.size(); 
        int ans = 0, l = 0, r = n-1;

        while(l < r){
            if(height[l] <= height[r]){
                if(height[l] >= leftMax){     // to find leftMax to calc trap height
                    leftMax = height[l]; 
                }else{
                    ans += leftMax - height[l];  // to store actual trap height using leftMax
                }
                l++;

            }else{ // height[l] >= height[r]
                if(height[r] >= rightMax){
                    rightMax = height[r];
                }else{
                    ans += rightMax - height[r];
                }

                r--;
            }
        }
        return ans;
    }
};
 