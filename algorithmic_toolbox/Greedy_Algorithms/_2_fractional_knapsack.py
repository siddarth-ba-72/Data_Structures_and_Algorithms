def fractional_knapsack(loot, capacity):
    loot.sort(key = lambda x: x[0]/x[1], reverse = True)
    max_loot = 0
    for val, wt in loot:
        if wt == 0:
            return max_loot
        amout = min(wt, capacity)
        max_loot += (amout * val) / wt
        capacity -= amout
    return max_loot


if __name__ == "__main__":
    nums_of_weights, capacity = [int(i) for i in input().split()]
    loot = []

    if capacity == 0:
        print(0)
        exit()

    for _ in range(nums_of_weights):
        val, wt = [int(i) for i in input().split()]
        if val == 0:
            continue
        loot.append((val, wt))

    print(fractional_knapsack(loot, capacity))
