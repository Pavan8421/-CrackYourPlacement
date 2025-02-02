#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
      int res = target - nums[i];
      if (mp.find(res) != mp.end())
      {
        return {i, mp[res]};
      }
      else
      {
        mp[nums[i]] = i;
      }
    }
    return {-1, -1};
  }
};