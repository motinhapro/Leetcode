class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> mp;

        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            
            if(mp.count(nums[i])) {
                ans+=mp[nums[i]];
                mp[nums[i]]++;
            } else {
                mp[nums[i]]++;
            }
        }

        return ans;
    }
};