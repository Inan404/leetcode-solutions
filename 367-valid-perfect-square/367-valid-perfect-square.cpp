class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 0, r = num ;
        long long int m  =0 ; 
        while(l <= r ){
            m = l + (r-l)/2;
            if(m*m > num) r = m-1 ; 
            else l = m+1; 
        }
        
        l--;
        if(l*l == num) return true ; 
        return false ; 
    }
};