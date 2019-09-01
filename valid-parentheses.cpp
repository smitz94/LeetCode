class Solution {
public:
    bool isValid(string s) {
        
        stack <char> p;
        char c;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                p.push(s[i]);
            
            else if(p.empty()!=true)
            {
                c=p.top();
                p.pop();
                
                if(c=='(' && s[i]!=')')
                    return false;
                
                else if(c=='[' && s[i]!=']')
                    return false;
                
                else if(c=='{' && s[i]!='}')
                    return false;
            }
            else
                return false;
                
        }
        
        if(p.empty()==false)
            return false;
        
        return true;
        
    }
};
