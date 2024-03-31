class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int mid = start + (end-start)/2;
        int ans = -1;

        while(start <= end){
            if(start == end){
                return nums[start];
            }
            else if(mid & 1){
                if((mid-1 >= 0)&&(nums[mid] == nums[mid-1])){
                    //left part
                    start = mid+1;
                }
                else{
                    //right part
                    end = mid-1;
                }
            }
            else{
                if((mid+1 < n)&&(nums[mid] == nums[mid+1])){
                    //left part
                    start = mid+2;
                }
                else{
                    //right part or target
                    ans = mid;
                    end = mid;
                }
            }
            mid = start + (end-start)/2;
        }
        return nums[ans];
    }
};