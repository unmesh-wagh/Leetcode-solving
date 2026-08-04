class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int a=0;

        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                a=nums[i];
                break;
            }
        }
        return a;
    }
};