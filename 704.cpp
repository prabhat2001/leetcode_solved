class Solution {
public:
    int search(vector<int>& nums, int target) {
        int res=-1;
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
           int m=l+(h-l)/2;
            if(nums[m]==target){
                res= m;
            }
            if(nums[m]>target){
                h=m-1;
            }
            else
                l=m+1;
        }
        return res;
        
    }
};