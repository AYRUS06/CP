#include <iostream>
#include <string>
using namespace std;
struct footballer
{
    string name;
};
struct footballer player;
struct footballer copy_struct()
{
    player.name = "Mbappe";
    return player;
}
int main()
{
    struct footballer sportsman = copy_struct();

    sportsman.name = "Ronaldo";
    cout << sportsman.name << endl; // Output 1
    cout << player.name << endl;    // Output 2
    return 0;
}