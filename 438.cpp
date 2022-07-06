class Solution {
public:
    vector<int> findAnagrams(string S, string P) {
        int n = S.size();   
        int k = P.size();  
        vector<int> ans;
        vector<int> ss(26,0),pp(26,0);  
        for(auto p: P )
            pp[p-'a']++;
        
        
        for(int i = 0;i<n;i++){
            ss[S[i]-'a']++;                        
            
            if(i>=k){
                ss[S[i-k]-'a']--;                 
            }
			
            if(i>=k-1){                             
                if(ss==pp) ans.push_back(i-k+1);  
            }
        }
        return ans;
    }
};