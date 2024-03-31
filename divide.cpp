class Solution {
public:
    int divide(int dividend, int divisor) {
      long long  int divid = abs(dividend);
      long long  int divis = abs(divisor);
       long long int s = 0;
       long long int e = divid;
       long long int mid = s + (e-s)/2;
        int ans = -1;

       
    
    

    if(((dividend >=0  && divisor >0)) || ((dividend <= 0 && divisor < 0))){
        while(s <= e){
            if(mid*divis == divid){
                if(mid > INT_MAX){
                    return INT_MAX;
                }
                else{
                    return mid;
                }
            }
            else if(mid*divis > divid){
                e = mid-1;
            }
            else if(mid*divis < divid){
                ans = mid;
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
    }  
     else if(((dividend < 0 && divisor >0) )||(dividend > 0 && divisor < 0)){
         while(s <= e){
            if(mid*divis == divid){
                if( mid < INT_MIN){
                    return INT_MIN-1;
                }
                else{
                    return -mid;
                }
            }
            else if(mid*divis > divid){
                e = mid-1;
            }
            else if(mid*divis < divid){
                ans = mid;
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
     } 


        if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)){
            ans = 0 - ans;
        }
        return ans;
    }
};