/* This is different from classical Knapsack problem, here we are allowed to use unlimited number of instances of an item. */
//Function which takes wt array, value array, the size(n) and the max. size of knapsack/bag - W..

int knapsack(int W, int wt[], int val[], int n) 
{ 
    int dp[n+1][W+1];
    
    for(int i = 0 ; i <= n; i++)
    {
      for(int j = 0; j <= W; j++)
      {
	    	if(i == 0 || j == 0)
	    	{
	      		dp[i][j] = 0;
			}
			else if(wt[i-1] <= j)
			{
				dp[i][j] = max(val[i-1] + dp[i][j-wt[i-1]], dp[i-1][j])
			}
			else
			{
				dp[i][j] = dp[i-1][j];
			} 
		}
	}
	return dp[n][W];	     
} 