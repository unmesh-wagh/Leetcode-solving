class Solution {
public:
    bool canmake(vector<int>& arr, int day, int m, int k){
        int flo=0;
        int bouq=0;

        for(int bloom:arr){
            if(bloom<=day){
                flo++;

        if(flo==k){
            bouq++;
            flo=0;
        }
            } else {flo=0;}
        }
        return bouq>=m;
    }
    int minDays(vector<int>& arr, int m, int k) {
        if((long long)m*k>arr.size())    return -1;
        int lo=*min_element(arr.begin(),arr.end()),hi=*max_element(arr.begin(),arr.end());
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(canmake(arr,mid,m,k)){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;

            
        }

        return ans;
    }
};