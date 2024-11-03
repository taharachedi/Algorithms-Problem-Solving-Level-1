#include <iostream>
using namespace std;


string Read_PIN()
{
	string PIN;

	cout << "Please Enter Ur PIN : " << endl;
	cin >> PIN;

	return PIN;
}

bool Login()
{
	string PIN;

	do
	{
		PIN = Read_PIN();

		if (PIN == "1234") {

			system("color 2F");   // turn screen to Green
			return 1;
		}

		else {

			system("color 4F");   // turn screen to Red
			cout << "Wrong PIN ! " << endl;

		}

	} while (PIN != "1234");

	return 0;   //return False
}





int main()
{

	if (Login()) {
		cout << "Ur Balance is : " << 7500 << endl;
	}

	return 0;
}
