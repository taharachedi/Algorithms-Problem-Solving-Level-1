#include <iostream>
using namespace std;

int ReadGradeInRange(int From, int To) {

	int Grade;

	do
	{
		cout << "Please Enter A Grade Between " << From << " and " << To << " !" << endl;
		cin >> Grade;

	} while (Grade < From || Grade > To);

	return Grade;
}


char GetGrade(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';

}



int main()
{
	cout << "\nThe Grade is : " << GetGrade(ReadGradeInRange(0, 100)) << endl;

	return 0;
}
