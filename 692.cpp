class Solution {
public:
    static bool cmp(pair<string, int>& a, pair<string, int>& b) {
        if(a.second == b.second) return a.first < b.first;
        return a.second > b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> m;
        for(string s: words) {
            m[s]++;
        }
        vector<pair<string, int>> p;
        for(auto x: m) {
            p.push_back(x);
        }
        sort(p.begin(), p.end(), cmp);
        vector<string> a;
        for(auto x: p) {
            if(k) a.push_back(x.first);
            k--;
            if(!k) break;
        }
        return a;
    }
};