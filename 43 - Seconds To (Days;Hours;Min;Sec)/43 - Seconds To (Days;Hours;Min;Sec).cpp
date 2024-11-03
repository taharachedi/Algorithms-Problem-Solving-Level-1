#include <iostream>
#include <cmath>
using namespace std;

struct stDuration {
	int Num_Of_Days, Num_Of_Hours, Num_Of_Minutes, Num_Of_Seconds;
};



int Read_Seconds(string Msg)
{
	int Num;

	do
	{
		cout << Msg << endl;
		cin >> Num;

	} while (Num <= 0);

	return Num;
}


stDuration Calcul(int Seconds)
{
	stDuration Duration;

	const int Days = 24 * pow(60, 2);
	const int Hours = pow(60, 2);
	const int Minutes = 60;

	int Remainder = 0;

	Duration.Num_Of_Days = Seconds / Days;
	Remainder = Seconds % Days;
	Duration.Num_Of_Hours = Remainder / Hours;
	Remainder = Remainder % Hours;
	Duration.Num_Of_Minutes = Remainder / Minutes;
	Remainder = Remainder % Minutes;
	Duration.Num_Of_Seconds = Remainder;

	return Duration;
}

void Print(stDuration Duration)
{
	cout << Duration.Num_Of_Days << " : "
		<< Duration.Num_Of_Hours << " : "
		<< Duration.Num_Of_Minutes << " : "
		<< Duration.Num_Of_Seconds << endl;
}



int main()
{
	int Total_Seconds = Read_Seconds("Please Enter The Total Seconds : ");

	Print(Calcul(Total_Seconds));


	return 0;
}
