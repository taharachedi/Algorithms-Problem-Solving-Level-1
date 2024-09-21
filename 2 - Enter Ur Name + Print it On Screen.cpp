#include <iostream>
#include <string>

using namespace std;

string Read_Name()
{
	string Name;

	cout << "Please Enter Ur Name : \n";
	getline(cin, Name);

	return Name;
}

void Print_Name(string Name)
{
	cout << "\nUr Name is : " << Name << endl;
}

int main()
{
	Print_Name(Read_Name());


	system("color f3");
	system("pause>0");
	return 0;
}