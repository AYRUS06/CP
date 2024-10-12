#include <iostream>
using namespace std;
int main()
{
    unsigned int i = 1;
    unsigned int j;
    while (i > 0)
    {
        j = i;
        i++;
    }
    cout << j << endl;
    cout << i << endl;
}