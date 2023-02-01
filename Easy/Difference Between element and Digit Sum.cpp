class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 =0 ,sum2 =0;
        for(int i=0; i<nums.size(); i++){
            sum1+=nums[i];
            if(nums[i]>=10){
                int n=nums[i];
                while(n){
                    sum2+=n%10;
                    n/=10;
                }
            }
            else
                sum2+=nums[i];
        }
        return abs(sum1-sum2);
    }
};
