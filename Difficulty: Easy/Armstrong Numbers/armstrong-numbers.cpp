// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int rem,sum=0;
        int num;
        num=n;
    
        while(num>0){
            rem=num%10;
            sum=sum+(rem*rem*rem);
            num=num/10;
        }
        if(n==sum)
            return 1;
        else
            return 0;
    }
};