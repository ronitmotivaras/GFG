class Solution {
  public:
    bool isPrime(int n) {
        // code here
        
        if(n<=1) return 0;
        
        for(int i=2;i<n/2;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
            
    }
};
