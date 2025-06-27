class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int rev=0,rem;
        while(n>0)
        {
            rem=n%10;
            rev=(rev*10)+rem;
            n=n/10;
        }
    return rev;
    }
};