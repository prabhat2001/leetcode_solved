class Solution {
public:
    int numDecodings(string s) {
        if(!s.size())return 1;
        
        int n = s.size();
        vector<int>dp(n+1, 1);
        vector<int>nums(n+1);
        for(int i = 1 ; i <= s.size() ; i++)
        {
            nums[i] = s[i-1] - '0';
        }
        if(nums[1] == 0)
            return 0; 
        
        for(int i = 2; i <= n; ++i)
        {
            dp[i] = 0;
            if(nums[i] != 0) 
                dp[i] = dp[i-1];
            
            if(nums[i-1] == 1 or (nums[i-1] == 2 and nums[i] <= 6)) 
                dp[i] += dp[i-2];
            
            if(dp[i] == 0) 
                return 0;
        }
        return dp[n];
    }
};