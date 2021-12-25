/* Given an integer n, return true if it is a power of two. Otherwise, return false. */

class Solution {
    public boolean isPowerOfTwo(int n) {
        if(n<=0)
         return false;
        if(n%2!=0 && n!=1)
         return false;
        if(n==1)
         return true;
        return (isPowerOfTwo(n/2));
    }
}
