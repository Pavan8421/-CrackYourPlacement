#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    vector<int> res;
    int n = nums.size();
    if (n == 1)
      return n;
    for (int i = 0; i < n - 1; i++)
    {
      if (nums[i] != nums[i + 1])
        res.push_back(nums[i]);
    }
    res.push_back(nums[n - 1]);
    int k = res.size();
    for (int i = 0; i < k; i++)
      nums[i] = res[i];
    return k;
  }
};