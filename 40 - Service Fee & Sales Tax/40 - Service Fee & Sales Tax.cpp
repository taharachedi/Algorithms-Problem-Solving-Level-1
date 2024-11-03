#include <iostream>
using namespace std;

float Read_BillValue(string Msg)
{
    float BillValue;

    do
    {
        cout << Msg << endl;
        cin >> BillValue;

    } while (BillValue <= 0);

    return BillValue;
}


float Calcul_TotalBill(float Total_BillValue)
{
    Total_BillValue = Total_BillValue * 1.1;
    Total_BillValue = Total_BillValue * 1.16;

    return Total_BillValue;
}


int main()
{
    float Bill_Value = Read_BillValue("Please Enter Ur Bill Value : ");
    cout << endl;

    cout << "Bill Value = " << Bill_Value << endl;
    cout << "Total Bill After Service Fee and Sales Tax = " << Calcul_TotalBill(Bill_Value) << endl;


    return 0;
}
