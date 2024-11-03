#include <iostream>
using namespace std;


int Read_TotalSales()
{
	int Total_Sales;

	cout << "Please Enter The Total Sales !" << endl;
	cin >> Total_Sales;

	return Total_Sales;
}


float GetPercentage(int Total_Sales)
{
	if (Total_Sales >= 1000000)
		return 0.01;
	else if (Total_Sales >= 500000)
		return 0.02;
	else if (Total_Sales >= 100000)
		return 0.03;
	else if (Total_Sales >= 50000)
		return 0.05;
	else
		return 0;
}

float Calcul_TotalComission(int Total_Sales)
{
	return GetPercentage(Total_Sales) * Total_Sales;
}


int main()
{

	float Total_Sales = Read_TotalSales();

	cout << " Commision Percentage = " << GetPercentage(Total_Sales) << endl;
	cout << " Total Comission is = " << Calcul_TotalComission(Total_Sales) << endl;

	return 0;
}
