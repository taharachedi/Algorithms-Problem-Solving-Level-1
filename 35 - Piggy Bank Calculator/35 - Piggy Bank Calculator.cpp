#include <iostream>
using namespace std;

struct stMoney {
    int Pennies;
    int Nickels;
    int Dimes;
    int Quarters;
    int Dollars;
};



stMoney Read()
{
    stMoney Lflisat;

    cout << "Please Enter The Pennies : \n";
    cin >> Lflisat.Pennies;
    cout << "Please Enter The Nickels : \n";
    cin >> Lflisat.Nickels;
    cout << "Please Enter The Dimes : \n";
    cin >> Lflisat.Dimes;
    cout << "Please Enter The Quarters : \n";
    cin >> Lflisat.Quarters;
    cout << "Please Enter The Dollars : \n";
    cin >> Lflisat.Dollars;

    return Lflisat;
}

float GetPennies(stMoney Lflisat)
{
    return (Lflisat.Pennies * 1) + (Lflisat.Nickels * 5) + (Lflisat.Dimes * 10) + (Lflisat.Quarters * 25) + (Lflisat.Dollars * 100);
}


int main()
{
    float Total_Pennies = GetPennies(Read());

    cout << "Total Pennies = " << Total_Pennies << " Pennies ." << endl;
    cout << "Total Dollars = " << (float)Total_Pennies / 100 << " Dollars . " << endl;


    return 0;
}
