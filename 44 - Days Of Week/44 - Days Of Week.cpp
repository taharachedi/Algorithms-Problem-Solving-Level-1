#include <iostream>
using namespace std;

enum enDays { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7 };

int Read_Num(string Msg, int From, int To)
{
	int Num = 0;

	do
	{
		cout << Msg << endl;
		cin >> Num;

	} while (Num < From || Num > To);

	return Num;
}

enDays Read_Days()
{
	return (enDays)Read_Num("Please Enter A Day Number : ", 1, 7);
}


string Get_Days(enDays Day)
{
	switch (Day)
	{
	case enDays::Sunday:
		return "Sunday. ";

	case enDays::Monday:
		return "Monday.";

	case enDays::Tuesday:
		return "Tuesday.";

	case enDays::Wednesday:
		return "Wednesday.";

	case enDays::Thursday:
		return "Thursday.";

	case enDays::Friday:
		return "Friday.";

	case enDays::Saturday:
		return "Saturday.";

	default:
		return "Wrong Day!";

	}
}


int main()
{

	cout << "Day = " << Get_Days(Read_Days()) << endl;


	return 0;
}
