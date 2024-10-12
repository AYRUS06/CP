#include <iostream>
using namespace std;
int displayStr(char *printStr, int i)
{
    if (i == 1)

        return 0;
    else
    {
        i--;
        if (i == 4)
        {
            for (int j = 0; j < i; j++)
                cout << printStr[j];
            cout << endl;
        }
        displayStr(printStr, i);
        return 1;
    }
}
int main()
{
    int i = 11;
    char printStr[] = {'P', 'G', 'E', 'n', 't', 'r', 'a', 'n', 'c',
                       'e'};
    displayStr(printStr, i);
    return 0;
}