#include <iostream>
using namespace std;
int i = 0;
void hanoi(int diskSize, char source, char dest, char spare)
{
    if (diskSize == 0)
    {
        i++;
        if (i == 6)
            cout << source;
    }
    else
    {
        hanoi(diskSize - 1, source, spare, dest);
        i++;
        if (i == 6)
            cout << source;
        hanoi(diskSize - 1, spare, dest, source);
    }
}
int main()
{
    hanoi(2, 'A', 'B', 'C');
    return 0;
}