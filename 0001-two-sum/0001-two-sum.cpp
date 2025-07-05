class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> mp;

        for(int i = 0; i < nums.size(); i++) {

            //Verifico para cada número o complemento dele
            int complement = target - nums[i];

            //Caso o complemento esteja no map, achei os dois valores que somam o target
            if(mp.find(complement) != mp.end()) {
                
                return {mp[complement], i};
            }

            //Caso não ache o complemento, adiciono o número no meu map com sua posição
            mp[nums[i]] = i;
        }

        return {0, 0};
    }
};