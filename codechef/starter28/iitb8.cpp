#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

#include <iostream>
using namespace std;
int price(int years, int current_price)
{
    if (years == 0)
        return current_price;

    current_price = current_price - ((current_price - 12000) * (current_price - 12000)) / 20000;
    years--;
    return price(years, current_price);
}
int main()
{
    int years, current_price;
    cin >> years >> current_price;
    cout << price(years, current_price) << endl;
    return 0;
}