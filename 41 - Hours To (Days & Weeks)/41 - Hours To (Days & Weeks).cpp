#include <iostream>
using namespace std;


int Read_Hours(string Msg)
{
	int Number_Of_Hours;

	do
	{
		cout << Msg << endl;
		cin >> Number_Of_Hours;

	} while (Number_Of_Hours <= 0);

	return Number_Of_Hours;
}


float Hours_To_Days(float Number_Hours)
{
	return (float)Number_Hours / 24;
}


float Days_To_Weeks(float Number_Days)
{
	return (float)Number_Days / 7;
}


float Hours_To_Weeks(float Number_Hours)
{
	return (float)Number_Hours / 24 / 7;
}



int main()
{


	float Hours = Read_Hours("Please Enter The Number of Hours : ");
	float Days = Hours_To_Days(Hours);
	float Weeks = Days_To_Weeks(Days);

	float Diff_Weeks = Hours_To_Weeks(Hours);

	cout << endl;

	cout << "The Number Of Hours = " << Hours << endl;
	cout << "---------------------------------------\n\n";

	cout << "The Number Of Days  = " << Days << endl;
	cout << "The Number Of Weeks = " << Weeks << endl;
	cout << "Weeks In diff Way   = " << Diff_Weeks << endl;


	return 0;
}
