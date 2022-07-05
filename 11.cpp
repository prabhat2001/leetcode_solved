class Solution {
public:
    int maxArea(vector<int>& height) {
        int vol = 0;
        int left = 0, right = height.size() - 1;
        while(left < right){
            if(height[left] < height[right]){
                vol = max(vol, height[left] * (right - left));
                left++;
            }
            else{
                vol = max(vol, height[right] * (right - left));
                right--;
            }
        }
        return vol;
    }
};