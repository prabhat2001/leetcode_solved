class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count=0;
        int i=0,j=0;
        long long m=1;
        while(j<nums.size())
        {
            m=m*nums[j];
            while(m>=k && j>=i)
            {
                m=m/nums[i];
                i++;
            }
            if(m<k)
                count+=j-i+1;
            j++;
        }
        return count;
    }
};