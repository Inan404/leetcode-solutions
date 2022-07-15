class Solution {

private:
int binarySearch(vector<int> &nums, int target)
{
  sort(nums.begin(), nums.end());

  int l = 0, r = nums.size() - 1, m = 0;

  while (l <= r)
  {
    m = l + (r - l) / 2;

    if (nums[m] == target)
      return m;
    if (nums[m] < target)
      l = m + 1;
    else
      r = m - 1;
  }
  return -1;
}
    
public:
bool checkIfExist(vector<int> &arr)
{
  sort(arr.begin(), arr.end());
  for (int i = 0; i < arr.size(); i++)
  {
    int index = binarySearch(arr, (arr[i] * 2));
    if (index != -1 && index != i)
      return true;
  }
  return false;
}
};