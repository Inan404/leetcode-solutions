class Solution {
private:
    int binarySearch(vector<int> &nums, int target)
    {
      int L = 0, R = nums.size() - 1;

      while (L <= R)
      {
        int M = L + (R - L) / 2;

        if (nums[M] == target)
          return M;
        else if (nums[M] < target)
          L = M + 1;
        else
          R = M - 1;
      }

      return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        return binarySearch(nums, target);
    }
};