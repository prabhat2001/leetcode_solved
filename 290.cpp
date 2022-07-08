class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,vector<int>> m1;
        unordered_map<string,vector<int>> m2;
        
        for(int i=0;i<pattern.size();i++){
            m1[pattern[i]].push_back(i);
        }

        vector<string> check;
        int index=0;
        for(int i=0;i<s.size();i++){
             
             string temp="";
            while(s[i]!=' ' && i<s.size()){
               
                temp+=s[i];
                i++;
            }
            check.push_back(temp);
            m2[temp].push_back(index);
            index++;
                
        }
        
        if(m1.size()!=m2.size())
         return false;
        
       
       for(int i=0;i<m1.size();i++){
            if(m1[pattern[i]]!=m2[check[i]])
                return false;
        }
        return true;
    }
};