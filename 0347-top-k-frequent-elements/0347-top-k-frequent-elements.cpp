class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;

        for(int& i : nums) {
            mp[i]++;
        }

        int n = nums.size();

        vector<vector<int>> buckets(n + 1);

        for(auto& freq : mp) {
            buckets[freq.second].push_back(freq.first);
        }

        vector<int> ans;

        for(int i = n; i >= 0 && k; i--) {
            
            for(int j = 0; j < buckets[i].size() && k; j++) {
                ans.push_back(buckets[i][j]);
                k--;
            }
        }

        return ans;
    }
};