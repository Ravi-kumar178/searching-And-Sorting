#include<iostream>
using namespace std;

int firstOccurrence(int arr[],int n, int target){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start + (end-start)/2;
    
    while(start <= end){
        if(target == arr[mid]){
            //store 
            ans = mid;
            //left shift
            end = mid-1;
        }
        else if(target > arr[mid]){
            start = mid+1;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOccurrence(int arr[],int n, int target){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start + (end-start)/2;
    
    while(start <= end){
        if(target == arr[mid]){
            //store 
            ans = mid;
            //right shift
            start = mid+1;
        }
        else if(target > arr[mid]){
            start = mid+1;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int totalOccurrence(int arr[],int n, int target){
    int firstOcc = firstOccurrence(arr,n,target);
    int lastOcc = lastOccurrence(arr,n,target);
    
    int ans = lastOcc - firstOcc + 1;
    return ans;
}

int main(){
    int arr[] = {10,20,30,30,30,30,40,50};
    int n = 8;
    int target = 30;
    
    int ans = totalOccurrence(arr,n,target);
    
    if(ans == -1){
        cout<<"Target not present"<<endl;
    }
    else{
        cout<<"Total Number of Occurrence is: "<<ans<<endl;
    }
    return 0;
}