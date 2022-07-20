class Solution {
public:
    bool isSubSeq(vector<vector<int>> &smap, string word, int ssize) {
        int curIdx = 0;
        for(int i = 0; i < word.size(); ++i) {
            int nextpos = smap[curIdx][word[i]];
            if(nextpos == -1 || (i != word.size()-1 && nextpos == ssize-1))
                return false;
            curIdx = nextpos+1;
        }
        return true;
    }
    
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<vector<int>> smap(s.size(), vector<int>(256, -1));
        for(int i = (int)s.size()-1; i >= 0; --i) {
            if(i+1 < s.size()) smap[i] = smap[i+1];
            smap[i][s[i]] = i;
        }
        
        int ans = 0;
        for(auto &word: words)
            if(isSubSeq(smap, word, s.size())) ans++;
        
        return ans;
    }
};