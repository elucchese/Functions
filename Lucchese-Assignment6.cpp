#include <iostream>
using namespace std;

//function prototype
void findLowest(int, int, int , int, int);
int receiveNumTickets(string);

int main() {
    int barcelona, real, bayern, juventus, milan;

// call function receiveNumTickets
    barcelona = receiveNumTickets("Barcelona: ");
    real = receiveNumTickets ("Real: ");
    bayern = receiveNumTickets ("Bayern: ");
    juventus = receiveNumTickets( "Juventus: ");
    milan = receiveNumTickets( "Milan: ");

// call function findLowest
    findLowest(barcelona, real, bayern, juventus, milan);

    return 0;
}

int receiveNumTickets(string team) {
    int ticketsSold;
    cout << "Enter the amount of VIP tickets sold for each team " << team ;
    cin >> ticketsSold;
    if (ticketsSold < 0) {
        cout << "Invalid input" << endl;
    } while (ticketsSold <= 0);
    return ticketsSold;
}

void findLowest(int barcelona, int real, int bayern, int juventus, int milan)
{
    int lowest;

    cout << "The team with the lowest amount of VIP tickets sold \n";
    if (barcelona <= real && barcelona <= bayern && barcelona <= juventus && barcelona <= milan) {
        lowest = barcelona;
        cout << "Barcelona: " ;
    }
    else if (real <= barcelona && real <= bayern && real <= juventus && real <= milan)
    {
        lowest = real;
        cout << "Real: ";
    }
    else if(bayern <= barcelona && bayern <= real && bayern <= juventus && bayern <= milan)
    {
        lowest = bayern;
        cout << "Bayern: ";
    }
    else if (juventus <= barcelona && juventus <= real && juventus <= bayern && juventus <= milan)
    {
        lowest = juventus;
        cout << "Juventus: ";
    }
    else
    {
        lowest = milan;
        cout << "Milan: " ;
    }

    cout << lowest << "\n";

}






