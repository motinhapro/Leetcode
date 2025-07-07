class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        //Set para armazenar os caracteres
        set<char> chars;

        //l armazena o índice do primeiro caractere da substring
        int l = 0, ans = 0;

        for(int i = 0; i < s.size(); i++) {
            
            //Enquanto o meu caractere estiver contido no meu set
            //eu retiro ele do meu set, usando o l
            while(chars.count(s[i])) {
                chars.erase(s[l]);
                l++;
            }

            //caso ele não esteja presente no set, adiciono
            chars.insert(s[i]);

            //como o set armazena apenas caracteres diferentes, logo o max dele é a resposta
            ans = max(ans, i - l + 1);
        }

        return ans;
    }
};