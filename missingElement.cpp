
#include<iostream>
using namespace std;

int missingElement(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    
    while(start <= end){
        int diff = arr[mid] - mid;
        if(diff == 1){
            //store 
            ans = arr[mid];
            //right shift
            start = mid+1;
        }
        else{
            //left shift
            end = mid-1 ;
        }
        mid = start + (end-start)/2;
    }
    if(ans == -1){
        return 1;
    }
    else{
        return ans+1;
    }
}

int main(){
    int arr[] = {1,2,3,4,6,7,8,9};
    int n = 8;
    
    int ans = missingElement(arr,n);
    cout<<"Missing Element is: "<<ans<<endl;
    return 0;
}