#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    const float regularCoffee = 0.99;
    const float largeCoffee = 1.50;
    const float jumboCoffee = 2.25;
    const float salesTax = 0.06;
    int numregularCoffee = 0;
    int numlargeCoffee = 0;
    int numjumboCoffee = 0;
    int isRunning = 1;
    int choice = 0;
    int userQuantity = 0;

    while (isRunning == 1)
   
    {
       
        cout  << "1. Regular Coffee" << endl << "2. Large Coffee" <<endl <<"3. Jumbo Cofee" <<endl <<"4. Quit" <<endl;
        
        cout  << "Pick an option. " <<endl;
        cin >> choice;

        if (choice == 1)
        {
            cout<< "How manny cups do you want? ";
            cin >> userQuantity;
            numregularCoffee += userQuantity;
        }

        else if (choice == 2){

            cout<< "How manny cups do you want? ";
            cin >> userQuantity;
            numlargeCoffee += userQuantity;
        }

        else if (choice == 3){

            cout<< "How manny cups do you want? ";
            cin >> userQuantity;
            numjumboCoffee += userQuantity;
        }

        else
        {
            isRunning++;
        }

        
    }
    
    float totalregcoffee = regularCoffee * numregularCoffee;
    float totallarecoffee = largeCoffee * numlargeCoffee;
    float totaljumbocoffee = jumboCoffee * numjumboCoffee;
    float salestaxdeduction = (totalregcoffee + totallarecoffee + totaljumbocoffee) * salesTax;
    float totalbill = (totalregcoffee + totallarecoffee + totaljumbocoffee) + salestaxdeduction;

    cout <<"Regular Coffee $"<< totalregcoffee <<endl
         <<"Large Coffee $" << totallarecoffee <<endl
         <<"Jumbo Coffee $"<< totaljumbocoffee <<endl;

    cout << setprecision(3);
    cout <<"Sales tax $" << salestaxdeduction <<endl;
    cout << setprecision(4);
    cout << "Total Bill $" <<totalbill <<endl;


    return 0;
}

