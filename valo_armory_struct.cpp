#include <iostream>
using namespace std;

int main()
{
    int i;
    struct Gun
    {
        string name, category;
        int price;
    };
    
    // Gun Odin;
    // Odin.name = "Odin";
    // Odin.price = 3200;
    // Odin.category = "Primary";
    
    // cout << "Name: " << Odin.name << endl;
    // cout << "Price: " << Odin.price << endl;
    // cout << "Category: " << Odin.category << endl;

    Gun weapons[20];

    weapons[0] = {"Odin", "Primary", 3200};  //Odinwa
    weapons[1] = {"Vandal", "Primary", 2900};   //Vandalwa
    weapons[2] = {"Phantom", "Primary", 2900};   //Phantomwa
    weapons[3] = {"Ares", "Primary", 1700};   //Areswa

    for (i = 0; i < 4; i++)
    {
        cout << weapons[i].name << "\t" << weapons[i].price << "\t" << weapons[i].category << endl;
    }
    
}