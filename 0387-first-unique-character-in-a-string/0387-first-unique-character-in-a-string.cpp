class Solution {
public:
    int firstUniqChar(string s) {
     unordered_map<char,int> ans;
     int n = s.size();
     int an = -1;
     for(int i = 0 ; i< n ; i++)
     {
        ans[s[i]]++;
     }
      for(int i = 0 ; i < n  ; i++)
      {
        if(ans[s[i]] == 1) 
        {
            an = i ;
            break;
        }
      }
      return an;

    }
};