#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
   int mid = start + (end-start)/2;

    int ans = -1;

    while(start <= end){
      
        if( target == arr[mid]){
            ans = mid;
          break;
        }

        else if(target > arr[mid]){
            //shift right
            start = mid + 1;
        }
        else if(target < arr[mid]){
            //left shift
            end = mid -1;
        }
      mid = start + (end-start)/2;
    }
  
    return ans;
}


int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int n = 9;
    int target = 70;

    int ans = binarySearch(arr,n,target);

    if(ans == -1){
        cout<<"Target is not present"<<endl;
    }
    else{
        cout<<"Target is present at index: "<<ans<<endl;
    }

    return 0;
}