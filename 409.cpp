class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for(auto &item: s){
            mp[item]++;
        }
        int count = 0, countodd = 0;
        for(auto &item: mp){
            if(item.second & 1){
                countodd++;
            }  
            count+=item.second;
        }
        if(countodd)    return count - countodd + 1;
        return count;
    }
};