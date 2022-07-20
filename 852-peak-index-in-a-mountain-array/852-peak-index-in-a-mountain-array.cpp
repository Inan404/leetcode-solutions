class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int l = 0 , r = nums.size()-1,m ; 
        while(l<=r){
            m = l + (r-l)/2;
            if(nums[m] > nums[m+1] && nums[m] > nums[m-1] ) return m; 
            else if(nums[m] < nums[m+1]) l = m+1;
            else if(nums[m] > nums[m+1]) r = m-1 ;
        }
        
    return -1 ; 
    }
};