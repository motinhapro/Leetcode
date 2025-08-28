class Solution {
public:
    bool isPalindrome(string s) {

        string aux;
        
        for(int i = 0; i < s.size(); i++) {

            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i]-'A'+'a';
            }
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                aux+=s[i];
            }
        }

        for(int l = 0, r = aux.size() - 1; l <= r; l++, r--) {

            if(aux[l] != aux[r]) return false;
        }

        return true;
    }   
};