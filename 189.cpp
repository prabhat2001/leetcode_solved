class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(),i;
        k = n - (k%n);
        vector<int> b(n,0);
        for(i=0;i<n;++i)
        {
            b[i] = nums[i]; 
        }
        for(i=0;i<n;++i)
        {   
            int index = (i+k) % n; 
            nums[i] = b[index];
        }
       
    }
};