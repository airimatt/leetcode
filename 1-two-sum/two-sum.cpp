class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> res;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (nums[i] + nums[j] == target) {
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        }
        return res;
    }
};