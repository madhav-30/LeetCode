class Solution {
public:
    int jump(vector<int>& nums) {
        int c=0,i=0;
        
        for(int j=1; j<nums.size(); j++){
            nums[j]=max(nums[j]+j,nums[j-1]);
        }
        
        while(i<nums.size()-1){
            i=nums[i];
            c++;
        }
        return c;
    }
};
