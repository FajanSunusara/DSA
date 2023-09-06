class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        int size =nums.size();
        int sum;
        vector<int> ret ;
        for(i=0;i<size;i++){
            for(j=i+1;j<size;j++){
                sum=nums[i]+nums[j];
                if(sum==target)
                {
                    ret.push_back(i);
                    ret.push_back(j);
                    return ret;
                }
                
                
                
                
            }
        }
        
        return ret ;
    }
};
