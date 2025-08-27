class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()) return 0;
        
        sort(nums.begin(), nums.end());

        int ans = 1, sum = 1;

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i-1] + 1 == nums[i]) {
                sum++;
                ans = max(ans, sum);
            } else {
                
                if(nums[i-1] != nums[i]) {
                    sum = 1;
                }
            }
        }

        return ans;
    }
};