#include <iostream>
using namespace std;


enum enMonth {
	January = 1, February = 2, March = 3, April = 4, May = 5, June = 6,
	July = 7, August = 8, September = 9, October = 10, November = 11, December = 12
};


int Read_Num(string Msg, int From, int To)
{
	int Num;

	do
	{
		cout << Msg << endl;
		cin >> Num;

	} while (Num < From || Num > To);

	return Num;
}


enMonth Read_Month()
{
	return (enMonth)Read_Num("Please Enter A Month Number : ", 1, 12);
}


string Get_Month(enMonth Month)
{
	switch (Month)
	{
	case enMonth::January:
		return "January.";

	case enMonth::February:
		return "February.";

	case enMonth::March:
		return "March.";

	case enMonth::April:
		return "April.";

	case enMonth::May:
		return "May.";

	case enMonth::June:
		return "June.";

	case enMonth::July:
		return "July.";

	case enMonth::August:
		return "August.";

	case enMonth::September:
		return "September.";

	case enMonth::October:
		return "October.";

	case enMonth::November:
		return "November.";

	case enMonth::December:
		return "December.";

	default:
		return "Not A Valid Month !";
	}
}




int main()
{

	cout << "Month = " << Get_Month(Read_Month()) << endl;


	return 0;
}
