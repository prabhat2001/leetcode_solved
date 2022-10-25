class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        ios::sync_with_stdio(false); cin.tie(nullptr);
        string pref = "";
        int n = strs.size(), m = strs[0].size();
        sort(strs.begin(), strs.end());
        for(int i = 0; strs[0][i] == strs[n-1][i] && i < m; i++){
            pref += strs[0][i];
        }
        
        return pref;
    }
};
