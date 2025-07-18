class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size(), mindiff = 1e9, ans;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n - 2; i++) {

            int l = i + 1, r = n - 1;

            while(l < r) {
                
                int sum = nums[i] + nums[l] + nums[r];
                //A menor diferença será a diferença absoluta entre o target e a soma dos 3 nums
                int diff = abs(sum - target);

                if(diff < mindiff) {
                    ans = sum;
                    mindiff = diff;
                }

                sum < target ? l++ : r--;
            }
        }

        return ans;
    }
};