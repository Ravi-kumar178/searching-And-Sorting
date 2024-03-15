class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int n = arr.size();
        int start = 0;
        int end = n-1;
         int mid = start + (end-start)/2;

        while(start < end){
           
            if(arr[mid + 1] > arr[mid]){
                start = mid+1; //right shift , A line
            }
            else if(arr[mid+1] < arr[mid]){
                end = mid; //B line and peak
            }
           mid = start + (end-start)/2;
        }
      return end;   
    }
};