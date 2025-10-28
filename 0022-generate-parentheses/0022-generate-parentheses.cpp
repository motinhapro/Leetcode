class Solution {
public:

    void parentheses(string str,int closed, int open, vector<string>& ans, int& n) {
        
        if(open == n && closed == n) {
            ans.push_back(str);
            return;
        }

        if(open < n) parentheses(str + '(', closed, open + 1, ans, n);

        if(open > closed) parentheses(str + ')', closed + 1, open, ans, n);
    }


    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;

        parentheses("", 0, 0, ans, n);

        return ans;
    }
};