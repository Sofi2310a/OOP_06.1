#include "Date.h"

int main()
{

	Date date1(30, 10, 2024);
	Date date2(8, 9, 2023);
	date1.PrintInfo();
	date2.PrintInfo();
	long diff = date2 - date1;
	cout << "Difference: " << diff << endl;
	int days = 22;
	Date date3 = date1 + days;
	cout << days << endl;
	date3.PrintInfo();

}