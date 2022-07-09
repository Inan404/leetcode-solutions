class Solution {
public:
    int mySqrt(int n) {
  int r = n, l = 0,  ans = 0;
   long long int mid = 0;
   while (l <= r)
   {
      mid = l + (r - l) / 2;
      if ((mid * mid) == n)
      {
         ans = mid;
         break;
      }

      if ((mid * mid) < n)
      {
         ans = mid;
         l = mid + 1;
      }

      else
      {
         r = mid - 1;
      }
   }
   return ans;
    }
};