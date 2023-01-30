class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        else if(n<3) return 1;
        else return sum(n,0,1,1);
    }

    int sum(int n,int first,int second,int third){
        if(n==3) return first+second+third;
        else return sum(n-1,second,third,first+second+third);
        return 0;
    }
};
