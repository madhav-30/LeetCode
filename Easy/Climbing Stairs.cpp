class Solution {
public:
    int climbStairs(int n) {
        if(n<=3){
            return n;
        }
            int f = 2;
            int s = 3;
            int total;
            for (int i=4; i<=n; i++){
                total=f+s;
                f=s;
                s=total;
                 }
        return total;
    }
};
