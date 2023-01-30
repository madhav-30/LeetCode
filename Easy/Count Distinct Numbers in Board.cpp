class Solution {
public:
    int distinctIntegers(int n) {
        int x=n,ans;
        if(n>2){
            for(int i=1; i<=n; i++){
             if(x%i==1)
                 ans=i;
            }
        
        return ans;
        }
        
        else
            return 1;
    }
};
