                // Leetcode problem 01(Two sum) solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          unordered_map<int, int> mp; // here first int is number and second int is their frequency

        for(int i = 0; i < nums.size(); i++) {

            int need = target - nums[i];

            // check if needed value already exists
            if(mp.count(need)) {
                return {mp[need], i};
            }

            // store current value with index
            mp[nums[i]] = i;
        }

        return {};
    }
       

};