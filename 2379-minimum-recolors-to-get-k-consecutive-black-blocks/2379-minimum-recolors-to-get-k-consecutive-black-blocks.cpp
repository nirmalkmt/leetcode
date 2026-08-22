class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int cnt = 0 ; 
        int j = 0 ;
        for(int i = 0 ; i < k ; i++){
            if(blocks[i]=='W') 
            {
                cnt++;
            }
    }  
    cout<<cnt<<endl;
     
    int ans = cnt;
    for(int i = k ;i < n ; i++)
    {
        if(blocks[i]=='W')cnt++;
        if(blocks[j]=='W') cnt--;
        j++;
        cout<<cnt<<endl;
        ans = min(ans,cnt);

    }
    return ans;
    }
};