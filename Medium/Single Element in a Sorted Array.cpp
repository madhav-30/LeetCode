class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      int l = 0;
      int r = size(nums)-1;
      while(l<r){
          int mid = (l+r)/2;
          if((mid%2==0 and nums[mid]==nums[mid+1])
           || (mid%2 == 1 and nums[mid]==nums[mid-1])) l = mid+1;
          else
          r = mid;
      }  
      return nums[l];
    }
};
