class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n = height.size(), ans = 0;

        int l = 0, r = n - 1;
        
        while(l < r) {
            
            //pego o máximo de água que pode ter
            //que é a distância dos cointainers * o menor dos containers
            ans = max(ans, (r - l) * min(height[l], height[r]));

            //Fixo o maior elemento
            height[l] > height[r] ? r-- : l++;
        }

        return ans;
    }
};