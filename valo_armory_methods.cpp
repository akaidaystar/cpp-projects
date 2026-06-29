#include <iostream>
using namespace std;

class Gun
{
    public:
    // declare datatypes and variables
    string name, category;
    int price;

    void display();
    
};

void Gun ::display()
{
    cout << name << "\t" << category << "\t" << price << endl;
}

int main()
{
    int i;
    Gun weapon[5];

    weapon[0] = {"Odin", "Primary", 3200};  //Odinwa
    weapon[1] = {"Vandal", "Primary", 2900};   //Vandalwa
    weapon[2] = {"Phantom", "Primary", 2900};   //Phantomwa
    weapon[3] = {"Ares", "Primary", 1700};   //Areswa

    for (i = 0; i < 4; i++)
    {
        weapon[i].display();
    }
    
}