class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int num=0,rem;
        while(n>0)
        {
            rem =n%10;
            num *=10;
            num +=rem;
            n /=10;
        }
        return num;
    }
};