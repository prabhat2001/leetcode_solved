class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int sptr=0,fptr=0;fptr<nums.size();fptr++)
            if(nums[fptr]!=0)
                swap(nums[sptr++],nums[fptr]);   
         
    }
};