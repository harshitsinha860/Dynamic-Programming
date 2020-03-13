//Longest Common Subsequence using dynamic programming.
//Question - https://leetcode.com/problems/longest-common-subsequence

 int longestCommonSubsequence(string text1, string text2) 
    {
        int n1 = text1.length(),n2=text2.length();
        if(n1 == 0 || n2 == 0) return 0;
        
        int dp[n1+1][n2+1];
        
        for(int i = 0; i <= n1; i++)
        {
            for(int j = 0; j <= n2; j++)
            {
                if(i == 0 || j == 0) dp[i][j] = 0;
                
                else if(text1[i-1] == text2[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                
                else
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[n1][n2];
    }
