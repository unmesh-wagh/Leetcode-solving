class Solution {
public:
    bool canmake(vector<int>& weights, int tempw,int days){
        int sum=0,cnt=1;
    for(int weight:weights){
        
        if(sum+weight<=tempw){
            sum+=weight;

        
        }
        else {cnt++;
        sum=weight;
        }
    } return cnt<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int lo=*max_element(weights.begin(),weights.end()),hi=accumulate(weights.begin(),weights.end(),0);
        int ans;

        while(lo<=hi){
            int mid=lo+(hi-lo)/2;

            if(canmake(weights,mid,days)){
                ans=mid;
                hi=mid-1;
                
            }
            else lo=mid+1;
        }
        return ans;
    }
};