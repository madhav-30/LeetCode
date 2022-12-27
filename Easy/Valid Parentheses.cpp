class Solution {
public:
    bool isValid(string s) {
        stack<char> S;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('  || s[i]=='{' || s[i]=='['){
                S.push(s[i]);
            }
            else{
                if(S.empty()){
                    return false;
            
            }
                if((s[i]=='}' && S.top()=='{')||
                   (s[i]==')'&& S.top()=='(')||
                   (s[i]==']'&& S.top()=='[')){
                    S.pop();
                }
                else{
                    return false;
                }
               
                }
            }
        if(S.empty()){
            return true;
        }
        else{
            return false;
        }
        
        
        }
        
    };
