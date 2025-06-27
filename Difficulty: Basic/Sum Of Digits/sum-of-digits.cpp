class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        int num,sum=0;
        while(n>0){
            num = n% 10;
            sum+=num;
            n=n/10;
        }
    return sum;
    }
};