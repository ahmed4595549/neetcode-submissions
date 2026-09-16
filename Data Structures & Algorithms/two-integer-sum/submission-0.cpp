class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    vector<int>ans;
    pair<int, int>p;
    for (int i = 0; i < nums.size(); i++) {
        if (m.count(nums[i])) {
            p.first = m[nums[i]];
            ans.push_back(p.first);
            p.second = i;
            ans.push_back(p.second);
            return ans;
        }
        m[target-nums[i]]=i;
    }
    return ans;
    }
};