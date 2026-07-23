class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int x=0,y=1;
        vector<int> numsdupli(nums.size());


        for(int p:nums){
         if(p>0){
            numsdupli[x]=p;
            x+=2;
            
         }
         else if(p<0){
            numsdupli[y]=p;
            y+=2;
            
         }
        } return numsdupli;
        
    }
};