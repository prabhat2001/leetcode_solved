class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n=arr.size(), ans=0;
        int cnt=(arr[0]==1)?1:0;
        for(int i=1;i<n;i++){
            if(arr[i]==1){
                cnt++;
            }else{
                ans=max(ans, cnt);
                cnt=0;
            }
        }
        ans=max(ans, cnt);
        return ans;
    }
};