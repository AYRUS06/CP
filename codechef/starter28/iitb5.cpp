#include <iostream>
using namespace std;
int main()
{
    const int N = 5;
    int matrix[N][N] = {
        {1, 2, 3, 4, 5},
        {16, 17, 18, 19, 6},
        {15, 24, 25, 20, 7},
        {14, 23, 22, 21, 8},
        {13, 12, 11, 10, 9}};
    int Unrolled[N * N];
    int idx = 0;
    for (int s = 0; s < 2 * N - 1; s++)
    {
        for (int i = min(s, N - 1); i >= 0 && s - i < N; i--)
        {
            Unrolled[idx] = matrix[i][s - i];
            idx++;
        }
    }
    cout << Unrolled[15] << endl;
    for (int i = 0; i < idx; i++)
        cout << " " << Unrolled[i] << " ";
}