class Solution {
public:
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
  sort(nums1.begin(), nums1.end());
  sort(nums2.begin(), nums2.end());
  
  vector<int> intersectionArr; 
  vector<int> ans;
  for (int i = 0; i < nums1.size(); i++)
  {
    if (binary_search(nums2.begin(), nums2.end(), nums1[i]))
    {
      if(!binary_search(intersectionArr.begin(),intersectionArr.end(), nums1[i]))
          intersectionArr.push_back(nums1[i]);
    }
  }
  
 
  return intersectionArr;
}
};