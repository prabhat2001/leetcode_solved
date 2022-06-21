class Solution {
public:
    void reverse(string &s,int i,int j)
    {
        while(i<j)
            swap(s[i++],s[j--]);
        
    }
    string reverseWords(string s) {
        
        s+=' ';
        int i=0;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]==' ')
            {
                reverse(s,i,j-1);
                i=j+1; 
            }
        }
        return s.substr(0,s.size()-1); 
    }
};