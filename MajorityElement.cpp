class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size=nums.size();
        int cnt = 0;
        int elm=0;
        int i=0;
        while(i<size){
            if(cnt==0){
                elm=nums[i];
                cnt=1;
       
            }else if(elm==nums[i]){
                cnt++;
             
                
            }else if(elm!=nums[i]){
                cnt--;
               
            }
              i++;
        }
             int count = 0;
        for (int num : nums) {
            if (num == elm) {
                count++;
            }
        }

        if (count > size / 2) {
            return elm;
        }
        
        // Handle case where no majority element exists
        return -1;
        
    }
};
