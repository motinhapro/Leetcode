class Solution {
public:
    int findLucky(vector<int>& arr) {
        //Uso unordered map que é mais rápido e eu não necessariamente preciso que esteja ordenado
        unordered_map<int,int> freq;

        for(int i = 0; i < arr.size(); i++) {
            
            //Contando quantas vezes cada número do array aparece
            freq[arr[i]]++;
        }

        int ans = -1;

        for(auto x : freq) {

            //Verifico se o número é igual a frequência dele
            if(x.first == x.second && x.first > ans) 
                ans = max(ans, x.first);
        }

        return ans;
    }
};