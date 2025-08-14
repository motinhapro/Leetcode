class Solution {
public:
    string largestGoodInteger(string num) {

        char c = ' ';

        for(int i = 0; i < num.size() - 2; i++) {

            if(num[i] == num[i+1] && num[i+1] == num[i+2]) {
                
                if(num[i] - '0' > c - '0') c = num[i];
                i+=2;
            }
        }

        string ans;

        c == ' ' ? ans = "" : ans.append(3, c);

        return ans;
    }
};