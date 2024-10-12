def min_vehicles(weights, vehicle_limit):
    weights.sort(reverse=True)
    vehicles_needed = 0

    i = 0
    j = len(weights) - 1

    while i <= j:
        if weights[i] + weights[j] <= vehicle_limit:
            i += 1
            j -= 1
        else:
            i += 1

        vehicles_needed += 1

    return vehicles_needed


weights_input = input()
weights = list(map(int, weights_input.split()))

limit = int(input())


result = min_vehicles(weights, limit)
print(result)
