class Solution {
public:
    int fib(int n) {
        int dp[n+1];
        if(n<=1){
            dp[n]=n;
            return dp[n];
        }
        return dp[n]=fib(n-1)+fib(n-2);
        
    }
};