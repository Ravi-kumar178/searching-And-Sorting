#include<iostream>
using namespace std;

int search(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;
    
    while(start <= end){
        if(target == arr[mid]){
            return mid;
        }
        else if((mid-1 >= 0)&&(target == arr[mid-1])){
            return mid-1;
        }
        else if((mid+1 < n)&&(target == arr[mid+1])){
            return mid+1;
        }
        
        else if((mid+2 < n)&&(target > arr[mid])){
            start = mid+2;
        }
        else if((mid-2 >= 0)&&(target < arr[mid])){
            end = mid-2;
        }
        mid = start + (end-start)/2;
    }
    return 0;
}

int main(){
    int arr[] = {20,10,30,50,40,70,60};
    int n = 7;
    int target = 70;
    int ans = search(arr,n,target);
    if(ans){
        cout<<"The target is present at index: "<<ans<<endl;
    }
    else{
        cout<<"Target is not present"<<endl;
    }
    return 0;
}
