class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        //Set para armazenar os caracteres
        set<char> chars;

        //l armazena o índice do primeiro caractere da substring
        int l = 0, ans = 0;

        for(auto x : s) {
            
            //Enquanto o meu caractere estiver contido no meu set
            //eu retiro ele do meu set, usando o l
            while(chars.count(x)) {
                chars.erase(s[l]);
                l++;
            }

            //caso ele não esteja presente no set, adiciono
            chars.insert(x);

            //como o set armazena apenas caracteres diferentes, logo o max dele é a resposta
            ans = max(ans, (int)chars.size());
        }

        return ans;
    }
};