def spiderman_web_fluid(N, x, y, z):
    costs = [x, y, z]  # Costs for doubling, increasing by 1 ml, and decreasing by 1 ml
    dp = [float('inf')] * (N + 1)
    dp[1] = 0
    for i in range(2, N + 1):
        if i % 2 == 0:
            dp[i] = min(dp[i], dp[i // 2] + costs[0])
        dp[i] = min(dp[i], dp[i - 1] + costs[1])
        if i > 1:
            dp[i] = min(dp[i], dp[i - 2] + costs[2])
    return dp[N]

# Example usage:
N = 5  # Desired amount of web fluid (ml)
x = 1  # Cost of doubling
y = 2  # Cost of increasing by 1 ml
z = 3  # Cost of decreasing by 1 ml (ignored)

minimum_cost = spiderman_web_fluid(N, x, y, z)
print(f"Minimum cost to generate {N} ml of web fluid: {minimum_cost}")
