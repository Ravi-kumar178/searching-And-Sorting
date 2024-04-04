class Solution {
public:

    int binarySearch(vector<int>& nums, int start, int target){
        int end = nums.size()-1;
        int mid = start + (end-start)/2;

        while(start <= end){
            if(target == nums[mid]){
                return mid;
            }
            else if(target > nums[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start + (end-start)/2;
        }
        return -1;
    }

    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>>ans;
        int n = nums.size();

        for(int i= 0; (i < n-1)&&(i+1<n) ; i++){
            if((binarySearch(nums, i+1, nums[i]+k)) != -1){
                cout<<nums[i]<<" "<<nums[i]+k<<endl;
                ans.insert({nums[i],nums[i]+k});
            }
        }
        return ans.size();
    }
};