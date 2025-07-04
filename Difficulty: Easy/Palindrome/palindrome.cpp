// User function Template for C++

class Solution {
  public:
    bool isPalindrome(int n) {
        // Code here.
        int num=n;
        int rem,rev=0;
        while(num>0){
            rem=num%10;
            rev=(rev*10)+rem;
            num=num/10;
        }
        
        if(rev==n)
            return 1;
        else
            return 0;
    }
};