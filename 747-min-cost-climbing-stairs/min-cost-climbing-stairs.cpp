class Solution {
public:
    int solve(int n, vector<int>& cost, vector<int>& dp) {
        if (n >= cost.size()) {
            return 0;
        }

        if (dp[n] != -1) {
            return dp[n];
        }

        return dp[n] = cost[n] +
                       min(solve(n + 1, cost, dp), solve(n + 2, cost, dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        vector<int> dp(n, -1);

        return min(solve(0, cost, dp), solve(1, cost, dp));
    }
};
