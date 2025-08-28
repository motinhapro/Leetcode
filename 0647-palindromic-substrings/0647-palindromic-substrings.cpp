class Solution {
public:
    int countSubstrings(string s) {

        int size = s.size(), ans = 0;
        
        for(int i = 0; i < size; i++) {

            int l = i, r = i;

            while(l >= 0 && r < size && s[l] == s[r]) {
                ans+=1;
                l--, r++;
            }

            l = i, r = i + 1;

            while(l >= 0 && r < size && s[l] == s[r]) {
                ans+=1;
                l--, r++;
            }
        }

        return ans;
    }
};