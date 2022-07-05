class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& f, vector<vector<int>>& s) 
{        
    vector<vector<int>> ans;
    if( f.size()==0 || s.size()==0)  return {};
     int i=0,j=0;   
     while(i<f.size() && j<s.size())
       {
              if(f[i][1] >= s[j][0] && f[i][0] <= s[j][1])       
              {
                  int a=max(f[i][0],s[j][0]);
                  int b=min(f[i][1],s[j][1]);
                  ans.push_back({a,b});
                }
             f[i][1]<s[j][1] ? i++ :j++;
       }
 return ans;
    }
};