class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> s1;
        stack<int> s2;
        for(auto &item: s){
            if(item != '#')
                s1.push(item);
            if(item == '#' && !s1.empty())
                s1.pop();                
        }
        for(auto &item: t){
            if(item != '#')
                s2.push(item);
            if(item == '#' && !s2.empty())
                s2.pop();                
        }
        if(s1.size() != s2.size())  return false;
        while(!s1.empty()){
            cout << s1.top() << " " << s2.top();
            if(s1.top() != s2.top())    return false;
            s1.pop();
            s2.pop();
        }
        return true;
    }
};