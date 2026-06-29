#include <iostream>
using namespace std;

class Gun
{
    public:
    // declare datatypes and variables
    string name, category;
    int price;

    
};

int main()
{
    int i;
    Gun weapon[5];

    weapon[0] = {"Odin", "Primary", 3200};  //Odinwa
    weapon[1] = {"Vandal", "Primary", 2900};   //Vandalwa
    weapon[2] = {"Phantom", "Primary", 2900};   //Phantomwa
    weapon[3] = {"Ares", "Primary", 1700};   //Areswa

    // Gun Odin;
    // Odin.name = "Odin";
    // Odin.category = "Primary";
    // Odin.price = 3200;
    
    // cout << Odin.name << endl;
    // cout << Odin.price << endl;
    // cout << Odin.category << endl;

    for (i = 0; i < 4; i++)
    {
        cout << weapon[i].name << "\t" << weapon[i].price << "\t" << weapon[i].category << endl;
    }
    
}