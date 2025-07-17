class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";

        int n = strs.size();

        sort(strs.begin(), strs.end());

        //A última e a primeira string são as que mais importam
        //ordenadas em ordem lexográfica, elas são as mais diferentes
        string first = strs[0], last = strs[n-1];

        for(int i = 0; i < min(first.size(), last.size()); i++) {

            //Achou qualquer letra diferente entre as duas
            if(first[i] != last[i]) return ans;
            
            //Se não é diferente, os prefixos são iguais, logo entra na minha resposta
            ans+=first[i];
        }

        return ans;
    }
};