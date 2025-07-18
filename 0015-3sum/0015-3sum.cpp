class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();

        sort(nums.begin(), nums.end());

        vector<vector<int>>ans;

        for(int i = 0; i < n; i++) {
            
            //evitar duplicatas
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int l = i + 1, r = n - 1;

            //two pointers para achar os outros dois elementos que somados vão dar 0
            while(l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                
                if(sum == 0) {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;

                    while(nums[l] == nums[l-1] && l < r) l++;
                    while(nums[r] == nums[r+1] && l < r) r--;
                    
                } else {

                    if(sum > 0) {
                        r--;
                    } else {
                        l++;
                    }
                }
            }
        }
        return ans;
    }
};