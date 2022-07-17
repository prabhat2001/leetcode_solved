class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0, end = arr.size() - 1; 
        int mid;
        while (start <= end){
            mid=start+(end-start)/2;
            if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])  return mid;
            else if (arr[mid - 1] > arr[mid]) end = mid;
            else  start = mid + 1;
        }
        return 1;
    }
};