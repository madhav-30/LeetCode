class Solution {
public:
    int mySqrt(int n) {
        long low=1,high;
        long mid;
        high=n;
       
        while(low<=high){
            mid=low+(high-low)/2;
            if((mid*mid)>n){
               
                high=(mid-1);
                                }
            else if((mid*mid)<n){
                if((mid+1)*(mid+1)>n){
                    return mid;
                }
                low=mid+1;
            }
            else{
                return mid;
            }
        }
        return 0;
        
    }
};
