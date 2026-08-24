class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n = s.size();
        int i = 0 ; 
        int z=0,o=0;
        int count = 0 ;
        for(int j = 0 ; j < n ; j++)
        {
            if(s[j]=='0') z++;
            if(s[j]=='1') o++;
            while(z>k && o>k)
            {
                if(s[i]=='0') z--;
                else o--;
                i++;
            }
            count += (j-i+1);
        }
        return count;
        
    }
};