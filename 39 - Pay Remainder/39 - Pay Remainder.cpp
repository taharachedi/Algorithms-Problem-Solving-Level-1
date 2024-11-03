#include <iostream>
using namespace std;

float Read_Num(string Msg)
{
    int Num;

    do
    {
        cout << Msg << endl;
        cin >> Num;

    } while (Num <= 0);

    return Num;
}


float Print_Remainder(float Total_Bill, float Cash_Paid)
{
    return Cash_Paid - Total_Bill;
}



int main()
{
    float Total_Bill = Read_Num("Please Enter Ur Total Bill ");
    float Cash_Paid = Read_Num("Please Enter Ur Cash Paid ");

    cout << "Total Bill = " << Total_Bill << endl;
    cout << "Cash Paid = " << Cash_Paid << endl;

    cout << "*********************************\n";

    cout << "Remainder =  " << Print_Remainder(Total_Bill, Cash_Paid) << endl;


    return 0;
}
