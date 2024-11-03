#include <iostream>
#include <string>
using namespace std;

float Read_Num(string Msg)
{
	float Num;

	cout << Msg << endl;
	cin >> Num;

	return Num;
}

float Sum_Until()
{
	int Sum = 0;
	int Num;

	int i = 1;

	do
	{
		Num = Read_Num("Please Enter The Number " + to_string(i));

		if (Num == -99) {
			break;
		}

		Sum += Num;
		i++;

	} while (Num != -99);

	return Sum;
}


int main()
{
	cout << "The Sum = " << Sum_Until() << endl;


	return 0;
}
