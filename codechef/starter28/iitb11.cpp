#include <iostream>
#include <vector>
using namespace std;

bool isSubsetSum(vector<int> &set, int n, int sum)
{
    // Base Cases
    if (sum == 0)
        return true;
    if (n == 0)
        return false;

    // If last element is greater than sum, then ignore it
    if (set[n - 1] > sum)
        return isSubsetSum(set, n - 1, sum);

    // Check if sum can be obtained by including the last element or excluding it
    return isSubsetSum(set, n - 1, sum) || isSubsetSum(set, n - 1, sum - set[n - 1]);
}

int main()
{
    int num_sets;
    cin >> num_sets;

    vector<int> results;

    for (int i = 0; i < num_sets; ++i)
    {
        int target_sum;
        cin >> target_sum;

        vector<int> set;
        int num;
        while (true)
        {
            cin >> num;
            if (num == -1)
                break;
            set.push_back(num);
        }

        // Check if there exists a subset whose sum is equal to target_sum
        if (isSubsetSum(set, set.size(), target_sum))
            results.push_back(1);
        else
            results.push_back(0);
    }

    // Print the results
    for (int i = 0; i < results.size(); ++i)
    {
        cout << results[i] << endl;
    }

    return 0;
}
