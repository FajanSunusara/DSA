class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        for(int i=0;i<n;i++){
            if(x>0){ 
            ans=ans*x;
            }else if(x<0){
                 ans=ans/x;
            }else{
                ans=1.0;
            }

            }
            return ans;
       
        
    }
};
