class Solution {
public:
    string longestPalindrome(string s) {

        int n = s.size(), longest = 0;

        string ans;

        //pego todos os possíveis centros, pares e ímpares
        for(int cent = 0; cent <= 2 * n - 1; cent++) {
            int l = cent/2;
            int r = l + cent%2;

            //enquanto os char da direita e esquerda forem iguais expando para os lados
            while(l >= 0 && r < n && s[l] == s[r]) {
                
                //caso seja a maior string até o momento, guardo o tamanho e salvo na string ans
                if(r - l + 1 > longest) {
                    longest = r - l + 1;
                    ans = s.substr(l, r - l + 1);
                }

                //expandindo
                l--;
                r++;
            }
        }

        return ans;
    }
};