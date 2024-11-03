#include <iostream>
#include <cmath>

using namespace std;

struct strTaskDuration {
	int Num_Of_Days, Num_Of_Hours, Num_Of_Minutes, Num_Of_Seconds;
};

int Read_Num(string Msg)
{
	int Num;

	do
	{
		cout << Msg << endl;
		cin >> Num;

	} while (Num <= 0);

	return Num;
}



strTaskDuration ReadTask()
{
	strTaskDuration Duration;

	Duration.Num_Of_Days = Read_Num("Please Enter The Number Of Day : ");
	Duration.Num_Of_Hours = Read_Num("Please Enter The Number Of Hours : ");
	Duration.Num_Of_Minutes = Read_Num("Please Enter The Number Of Minutes : ");
	Duration.Num_Of_Seconds = Read_Num("Please Enter The Number Of seconds : ");

	return Duration;
}


int Total_Seconds(strTaskDuration Duration) {

	return (Duration.Num_Of_Days * 24 * pow(60, 2)) + (Duration.Num_Of_Hours * pow(60, 2)) + (Duration.Num_Of_Minutes * 60) + Duration.Num_Of_Seconds;
}


int main()
{
	cout << "Total Seconds = " << Total_Seconds(ReadTask()) << "  Seconds " << endl;

	return 0;
}
