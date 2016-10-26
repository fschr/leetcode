/*
https://leetcode.com/problems/two-sum/

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
UPDATE (2016/2/13):
The return format had been changed to zero-based indices. Please read the above updated description carefully.
 */

// O(n) space
// O(n) amortized time

#include <map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> result;
        std::map<int,int> m; // maps value -> index
        for (auto i = 0; i < nums.size(); i++) {
	  m[nums[i]] = i;
        }
	for (auto i = 0; i < nums.size(); i++) {
	  if (m.count(target - nums[i]) > 0 && m[target - nums[i]] != i) {
	    result.push_back(i);
	    result.push_back(m[target - nums[i]]);
	    return result;
	  }
	}
        return result;
    }
};
