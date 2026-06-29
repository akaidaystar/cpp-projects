#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    string location[5];
    string lastSpawn;
    string player;
    string choice;
    int a = 0, i = 0, x = 1;

    cout << "Enter Player name: ";
    getline(cin, player);

    while (i <= 4)
    {
        cout << "Site: ";
        getline(cin, location[a]);
        a++;
        i++;
    }

    srand(time(0));
    int randomIndex = rand() % 5;
    cout << "Player " << player << " spawned at site " << location[randomIndex] << endl;
    lastSpawn = location[randomIndex];

    while (true)
    {
        do
        {
            cout << "\n" << "Player Died? [yes/no]" << endl;
            cin >> choice;
        } while (choice !="yes" &&
             choice !="no");
        
        if (choice == "yes")
        {
            int randomIndex;
            do
            {
                randomIndex = rand() % 5;
            }
            while(lastSpawn == location[randomIndex]);
            lastSpawn = location[randomIndex];
            cout << "\n" << "Player " << player << " spawned at site " << location[randomIndex] << endl;
        }
        else
        {
            cout << "\n" << "Please continue to play..!" << endl;
        }
    }

    return 0;
}