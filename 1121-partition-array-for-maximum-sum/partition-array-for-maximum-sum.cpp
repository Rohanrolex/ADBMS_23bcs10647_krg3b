class Solution {
public:
  int ans(int ind ,vector<int>& arr, int k, int n,vector<int>& dp){
       if(ind == n) return 0;
      if(dp[ind] != -1) return dp[ind];
       int len =0;
       int sum=0;
       int maxi =  INT_MIN;
       int maxans = INT_MIN;

       for(int j =ind ; j<min(ind+k , n);j++){
            len++;
            maxi = max(maxi , arr[j]);
            sum = len*maxi + ans(j+1 ,arr, k,n ,dp);
           maxans = max(maxans , sum);

       }
       return dp[ind] = maxans;
  }

    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>dp(n ,-1);

        return ans(0, arr ,k ,n, dp);
    
    }
};
