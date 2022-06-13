def max_dot_product(prices, clicks, n):
    prices.sort()
    clicks.sort()
    ans = sum([prices[i] * clicks[i] for i in range(n)])
    return ans


if __name__ == "__main__":
    nums = int(input())

    prices = [int(i) for i in input().split()]
    clicks = [int(i) for i in input().split()]

    print(max_dot_product(prices, clicks, nums))
