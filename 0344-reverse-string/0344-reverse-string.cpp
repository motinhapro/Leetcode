class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int l = 0, r = s.size() - 1;
        char aux = ' ';

        while(l < r) {
            aux = s[l];
            s[l] = s[r];
            s[r] = aux;
            l++, r--;
        }
    }
};