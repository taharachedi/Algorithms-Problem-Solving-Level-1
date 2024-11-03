#include <iostream>
using namespace std;

string Read_Pin()
{
    string PIN;

    cout << "Please Enter Ur PIN :" << endl;
    cin >> PIN;

    return PIN;
}



bool Login()
{
    string PIN;
    int i = 3;

    do
    {
        i--;

        PIN = Read_Pin(); 

        if (PIN == "1234") {
            system("color 2F");
            return 1;   // Login true
        }

        else {
            system("color 4F");
            cout << "Wrong PIN!, U have  " << i << " more try : " << endl;

        }

    } while (i >= 1 && PIN != "1234");

    return 0; // Login False
}

int main()
{

    if (Login())
    {
        cout << "Ur Balance is : " << 7500 << endl;
    }


    else
    {
        cout << "Ur Card Blocked call the bank for help ! " << endl;
    }



    return 0;
}
