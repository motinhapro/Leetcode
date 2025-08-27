class Solution {
public:
    bool isValid(string s) {
        
        stack<char> pilha;

        for(int i = 0; i < s.size(); i++) {

            if(pilha.empty() && (s[i] == ']' || s[i] == ')' || s[i] == '}')) {
                
                return false;

            } else {

                if(!pilha.empty() && pilha.top() == '(' && s[i] == ')') {

                    pilha.pop();

                } else {

                    if(!pilha.empty() && pilha.top() == '{' && s[i] == '}') {
                        
                        pilha.pop();

                    } else {

                        if(!pilha.empty() && pilha.top() == '[' && s[i] == ']') {
                        
                            pilha.pop();

                        } else {

                            pilha.push(s[i]);
                        }
                    } 
                }
            }
        }

        return pilha.empty();
    }
};