 class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        // int n;
        // cin>>n;
        // vector<int> nums[n];
        // for (int k=0;k<n;k++)
        int size=nums.size();
        for(int i=0;i<size;i++){
            
                for(int j=i+1;j<size;j++){
                    if (nums[i]+nums[j]==target){
                        ret.push_back(i);
                         ret.push_back(j);
                        
                    }
                }
        
                
        }
        return ret;
    } 

    
};
