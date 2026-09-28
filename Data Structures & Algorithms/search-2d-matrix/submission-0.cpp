class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();   // rows size
        int m = matrix[0].size(); // col size
        int l = 0, r = n*m - 1;

        while(l <= r){
            int mid = l + (r-l) / 2;

            int row = mid / m; // connverts to 1d matrix eg -> mid = 6, row = 6 / 1 m->column
            int col = mid % m;

            if(matrix[row][col] == target){
                return true;
            }else if(matrix[row][col] < target){
                l = mid+1;
            }else{
                r = mid-1;
            }
        }       
        return false;
    }
};
