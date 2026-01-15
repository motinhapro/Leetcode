class Solution {
public:
    int longestConsecutive(vector<int>& nums) { 

        if(nums.empty()) return 0;

        unordered_set<int>numbers;

        for(int& num : nums)
            numbers.insert(num);

        int ans = 1;
        
        for(auto& num : numbers) {
            
            if(numbers.count(num-1))
                continue;

            int x = num;
            int c = 0;
            while(numbers.count(x)) {
                c++;
                x++;
            }

            ans = max(ans, c);
        }

        return ans;
    }
};