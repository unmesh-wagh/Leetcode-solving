class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1,cnt=0,n=nums.size();

        for(auto x:nums){
            if(x!=0){
                product*=x;
                cnt++;
            }
        }
        if(cnt==n){ 
            for(int i=0;i<n;i++){
                nums[i]=product/nums[i];
            }
            
        }
        else if (cnt==n-1){
            for(int i=0;i<n;i++){
            
                if(nums[i]==0){
                    nums[i]=product;
                }
                else{
                    nums[i]=0;                }
            }
            
        }
        else {
             for(int i=0;i<n;i++){
            
              
                    nums[i]=0;                
            }
        }
        
        return nums;
        
    }
};