class Solution {
public:
    int findLow(vector<int> &nums) {
        int lo = 0, hi = nums.size() - 1;
        while(lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if(nums[mid] > nums[hi])
                lo = mid + 1;
            else
                hi = mid;
        }
        return lo;
    }
    int bs(vector<int> &nums, int target, int lo, int hi) {
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) hi = mid-1;
            else lo = mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int idx = findLow(nums);
        if(nums.back() < target)
            return bs(nums, target, 0, idx-1);
        else
            return bs(nums, target, idx, nums.size()-1);
    }
};