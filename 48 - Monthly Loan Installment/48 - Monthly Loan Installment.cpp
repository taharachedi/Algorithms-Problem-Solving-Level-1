#include <iostream>
using namespace std;


float Read_Number(string Msg)
{
	float Num;

	do
	{
		cout << Msg << endl;
		cin >> Num;

	} while (Num <= 0);

	return Num;
}



float Monthly_Installment(float Loan_Amount, float Month)
{
	return (float)Loan_Amount / Month;
}




int main()
{


	float Loan_Amount = Read_Number("Please Enter Ur Loan Amount : ");
	float Month = Read_Number("How Many Month ?");

	cout << "\nMonthly Istallment = " << Monthly_Installment(Loan_Amount, Month) << endl;


	return 0;
}
