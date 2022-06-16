class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start=0,end=0,flag=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[end]==nums[start])
            {
                end++;
            }
            else
            {
                flag=1;
                ++start;
                nums[start]=nums[end];
                end++;
                
            }
        }
        if(flag==1)
            return start+1;
        else
        {
            return 1;
        }
    }
};