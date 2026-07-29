class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int minm=INT_MAX;
        int lo=1,hi=*max_element(nums.begin(),nums.end());
        int sum=0;

        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            sum=0;
            for(int num:nums){
                
                if(num%mid!=0){
                    sum+=(num/mid)+1;
                }
                else sum+=num/mid;
            }

            if(sum<=threshold){
                hi=mid-1;
                
            }
            else lo=mid+1;
            minm=min(minm,sum);
        } return lo;
    }
};