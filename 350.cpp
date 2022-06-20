class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        
        for(int i=0;i<nums1.size();i++)
        {
            if(mpp.find(nums1[i])!=mpp.end())
            {
                mpp[nums1[i]]++;
            }
            else
                mpp[nums1[i]]=1;
        }
        
        for(int i=0;i<nums2.size();i++)
        {
            if(mpp.find(nums2[i]) != mpp.end())
            {
                if(mpp[nums2[i]]!=0)
                {
                    ans.push_back(nums2[i]);
                    mpp[nums2[i]]--;
                }
            }
        }
        return ans;
    }
};