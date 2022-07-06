class Solution {
public:
   
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        mp[0] = 1;                         
        int ans = 0,sum = 0;
        
        for(auto num: nums){
            sum += num;
            
            if(mp.find(sum-k)!=mp.end()){  
                ans += mp[sum-k];
            }
            mp[sum]++;                    
        }
        return ans;
    }
    
};