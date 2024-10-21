#include <iostream>
#include <string>
using namespace std;

// this function asks the user a series of questions,
// like street, city, state and zip code, 
// and then prints the user's address using this format.
int main() {

    string streetName;
    string cityName;
    string stateName;
    int zipCode;

    cout << "What street is your house on? --> ";
    getline(cin, streetName);
    
    cout << "What city do you live in? --> ";
    getline(cin, cityName);

    cout << "What state do you live in? --> ";
    getline(cin, stateName);

    cout << "What is your zip code? --> ";
    cin >> zipCode;

    cout << "\nYour address is: " << streetName << endl;
    cout << cityName << ", " << stateName << ", " << zipCode << endl;

    return 0;

}
