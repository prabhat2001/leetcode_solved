class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int s =0;
        int n = nums.size();
        int e =n-1;
        int cnt =0;
        if(n==1 && nums[0] == val){return 0;}
        if(n==1 && nums[0] != val){return 1;}    
      while(s<=e)
      {
          if(nums[s] == val && nums[e] != val){
              swap(nums[s], nums[e]);
              s++; 
              e--;
              cnt++;
          }
          
          else if(nums[s] != val && nums[e] == val){
              e--;
              s++;
              cnt++;
          }
          else if(nums[s] == val && nums[e] == val){
              e--;
              cnt++;
          }
          else if(nums[s] != val && nums[e] != val){
            s++;
          }
          else{
            s++;
            e--;
          }       
      }
      return n-cnt;

    }
};