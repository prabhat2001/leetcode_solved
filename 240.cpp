class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i = 0;
        int j = n - 1;
        for(; i < m && j >= 0;){
            if(target < matrix[i][j])   j--;
            else if(target > matrix[i][j])  i++;
            else return true;
        }
        return false;
    }
};