/*
https://leetcode.com/problems/longest-substring-without-repeating-characters/

Given a string, find the length of the longest substring without repeating characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.

Given "bbbbb", the answer is "b", with the length of 1.

Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring,
"pwke" is a subsequence and not a substring.
 */

// O(1) space
// O(n) time

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int seen[256];
      memset(seen, 0, sizeof(seen));
      int best_max = 0, cur_max = 0;
      for (auto i = 0; i < s.length(); i++) {
	if (seen[s[i]] && (i - seen[s[i]] + 1 <= cur_max)) {
	  cur_max = i - seen[s[i]] + 1;
	} else {
	  cur_max++;
	}
	printf("%d %d\n",cur_max,best_max);
	best_max = (cur_max > best_max) ? cur_max : best_max;
	seen[s[i]] = i+1;
      }
      return best_max;
    }
};
