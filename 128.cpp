class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)   return 0;
        if(n == 1)   return 1;
        unordered_set<int> s;
        int maximum = 0;
        for(auto &item : nums)
            s.insert(item);
        for(int i = 0; i < n; i++){
            int length = 1;
            if(s.find(nums[i]-1) == s.end()){
                int curr = nums[i];
                while(s.find(curr+1) != s.end()){
                    length++;
                    curr = curr + 1;
                }
            }
            maximum = max(length, maximum);
        }
        return maximum;
    }   
};