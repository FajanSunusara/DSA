class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n =nums1.size();
       int  m =nums2.size();
       int z= n+m;
       vector<int> ans(z);
       int i=0,j=0,k=0;
      
       while(i<n && j<m){
           if(nums1[i] < nums2[j]){
               ans[k]=nums1[i];
               k++;
               i++;
           }else{
               ans[k]=nums2[j];
               k++;
               j++;
           }
       }
       while(i<n ){
               ans[k]=nums1[i];
               k++;
               i++;
       }
       while(j<m ){
               ans[k]=nums2[j];
               k++;
               j++;
       }
       double midean =0.0;
       int tid= (ans.size())/2;

       if((ans.size())%2==1){
           midean=ans[tid]; 

       }else{
             midean=(ans[tid]+ans[tid-1])/2.0; 

       }

      return  midean;

    }
};
