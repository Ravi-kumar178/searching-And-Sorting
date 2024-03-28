class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int total = m*n;
        int start = 0;
        int end = total-1;
        int mid = start + (end-start)/2;

        while(start <= end){
            int rowIndex = mid/n;
            int colIndex = mid%n;
            int currentValue = matrix[rowIndex][colIndex];

            if(target == currentValue){
                return true;
            }
            else if(target > currentValue){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start + (end-start)/2;
        }
        return false;
    }
};