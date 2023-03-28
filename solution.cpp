class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            int n = nums[i];
            int complement = target - n;
            if(map.count(complement)){
                res.push_back(map[complement]);
                res.push_back(i);
                return res;
            }
            map[n] = i;
        }
        return res;
    }
};
