class Solution {
public:
    int countCommas(int n) {
        if(n>=1000)
        {
            return n+1-1000;
        }
       else return 0;
    }
};