class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set<int> s;

        for(auto x : nums) {

            if(s.count(x)) return true;

            s.insert(x);
        }

        return false;
    }
};