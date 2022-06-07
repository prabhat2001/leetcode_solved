class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i < n; ++i)
            nums1[m + i] = nums2[i];
        int gap = (m + n) / 2 + ((m + n)%2 != 0);
        while(gap > 1){
            for(int i = 0; (gap + i) < (m + n); i++){
                if(nums1[i] >= nums1[gap + i])
                    swap(nums1[i], nums1[gap + i]);
            }
            gap = gap/2 + (gap%2 != 0);
        }
        for(int i = 0; i < (m + n - 1); i++){
                if(nums1[i] >= nums1[1 + i])
                    swap(nums1[i], nums1[gap + i]);
            }
    }
};