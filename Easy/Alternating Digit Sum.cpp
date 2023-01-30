class Solution {
public:
    int alternateDigitSum(int n) {
        int size = floor(log10(n) + 1);
        int sum=0;
        int i=1;
        while(n){
            if(i%2!=0)
                sum+=int((n/(pow(10,size-i))));
                
            else
                sum-=int((n/(pow(10,size-i))));
            int a= pow(10,size-i);            
            n=n%a;
            i++;
        }
        return sum;
    }
};
