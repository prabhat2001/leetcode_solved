class Solution {
public:
    
    unordered_map <string, bool> m; 
    
    bool wordBreak(string s, vector <string> &d) 
    {
        if(find(d.begin(), d.end(), s) != d.end())
            return true;
        
        if(m.find(s) != m.end()) 
            return m[s];
        
        for(int i=1; i<s.length(); i++)
        {
            string left = s.substr(0, i); 
            if(find(d.begin(), d.end(), left) != d.end() && wordBreak(s.substr(i), d))
            { 
                return m[s] = true; 
            }
        }
        return m[s] = false; 
    }
};