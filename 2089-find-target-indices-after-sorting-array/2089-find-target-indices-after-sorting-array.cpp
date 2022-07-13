// TC: O(NlogN)
// SC: O(N)
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> indices; 
        int l = 0 , r = nums.size()-1; 
        
        sort(nums.begin(), nums.end());
        
        int lb = (int)((lower_bound(nums.begin(),nums.end(),target)) - nums.begin());
        int ub = (int)((upper_bound(nums.begin(),nums.end(),target))- nums.begin());
        
        for(int i = lb; i < ub ; i++) indices.push_back(i);
        
        return indices;
    }
};