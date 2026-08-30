class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int maxx = INT_MIN , minn = INT_MAX , l = 0 , h = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
          if(nums[i]>maxx)  
          {
            maxx = nums[i];
            h = i;
          }
          if(nums[i]<minn)
          {
            minn = nums[i];
            l = i ;
          }
        }
        int ans1 = max(l+1,h+1);
        int ans2 = max(n-l,n-h);
        int ans6 =  min(ans1,ans2);

        int ans3 = min(l+1,n-l);
        int ans4  = min(h+1,n-h);
        int ans5 = ans3+ans4;
         return min(ans6,ans5);
    }
};