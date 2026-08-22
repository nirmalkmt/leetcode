class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0 ;
        int product = 1 ;
        int m = n ;
        int rem;
        while(m!=0)
        {
            rem = m%10 ;
            m = m/10;
            sum += rem;
            product *= rem;
        }
          sum = sum + product;
          if(n%sum==0) return true;
          else return false;
          return {};
    }

};