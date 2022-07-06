class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        	int pre=1; vector <int> v;
            for(int i=0;i<nums.size();i++){
                if(i==0){v.push_back(pre);}
                else{
                pre=pre*nums[i-1];
                v.push_back(pre);
                }
            }
            int pos=1;
            for(int j=nums.size()-2;j>=0;j--){
                pos=pos*nums[j+1];
                v[j]=v[j]*pos;
            }
            return v;
    }
};