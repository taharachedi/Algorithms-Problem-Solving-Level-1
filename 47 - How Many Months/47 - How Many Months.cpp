#include <iostream>
using namespace std;

float Read_Num(string Msg) {
	float Num;

	do
	{
		cout << Msg << endl;
		cin >> Num;

	} while (Num <= 0);

	return Num;
}



float Total_Month(float Loan_Amount, float Monthly_Payment)
{
	return (float)Loan_Amount / Monthly_Payment;
}





int main()
{

	float Loan_Amount = Read_Num("Please Enter Ur Loan Amount : ");
	float Monthly_Payment = Read_Num("Please Enter Ur Monthly Payment : ");

	cout << "\nTotal Months To Pay = " << Total_Month(Loan_Amount, Monthly_Payment);


	return 0;
}
