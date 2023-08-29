class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int n =nums.size();
      int i=0;
      while(i<n){
          if(nums[i]==nums[i+1]){
              break;
          }else{
              i++;
          }
      }
      int ans= nums[i];
        return ans;
    }
};
