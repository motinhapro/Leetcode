class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        map<int,int>prefix_count;
        prefix_count[0] = 1;

        int ans = 0, currSum = 0, diff = 0;

        for(int num : nums) {
            currSum+=num;
            diff=currSum - k;

            if(prefix_count.count(diff)) 
                ans+=prefix_count[diff];

            prefix_count[currSum]++;
        }

        return ans;
    }
};