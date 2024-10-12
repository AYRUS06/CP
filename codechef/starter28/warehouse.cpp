#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minVehicles(vector<int> &weights, int vehicleLimit)
{
    sort(weights.rbegin(), weights.rend()); // Sort the weights in descending order
    int vehiclesNeeded = 0;

    int i = 0;
    int j = weights.size() - 1;

    while (i <= j)
    {
        if (weights[i] + weights[j] <= vehicleLimit)
        {
            // Pair up the heaviest and lightest bananas within the limit
            i++;
            j--;
        }
        else
        {
            // The heaviest banana cannot be paired, transport it alone
            i++;
        }

        vehiclesNeeded++;
    }

    return vehiclesNeeded;
}

int main()
{
    // User input
    cout << "Enter the weights of bananas separated by spaces: ";
    vector<int> weights;
    int weight;
    while (cin >> weight)
    {
        weights.push_back(weight);
    }

    cout << "Enter the maximum weight limit of the vehicle: ";
    int limit;
    cin >> limit;

    // Calculate and print the result
    int result = minVehicles(weights, limit);
    cout << "Minimum number of vehicles needed: " << result << endl;

    return 0;
}
