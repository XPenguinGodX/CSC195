
#include <iostream>

using namespace std;

int main()
{
	string name;

	char initialOfLastName;

	short age;

	bool isAdult;

	unsigned int zipCode;

	float wage;

	short daysWorked;

	float hoursWorkedPerDay[7];

	const float TAX = 0.1f; //10% tax

	cout << "Enter your First Name: ";
	cin >> name;

	cout << "Enter the initial of your Last Name: ";
	cin >> initialOfLastName;

	cout << "Enter your age: ";
	cin >> age;
	if (age >= 18)
	{
		isAdult = true;
	}
	else
	{
		isAdult = false;
	}

	cout << "Enter your zip code: ";
	cin >> zipCode;

	cout << "Enter your hourly wage: ";
	cin >> wage;

	cout << "Enter the number of days worked(7 max) : ";
	cin >> daysWorked;

	float totalHours = 0; // Initialize total hours to 0

	for (int i = 0; i < daysWorked; i++) {
		cout << "Enter hours worked for day " << (i + 1) << ": ";
		cin >> hoursWorkedPerDay[i];

		totalHours += hoursWorkedPerDay[i];  // Accumulate total hours
	}

	float grossIncome = totalHours * wage;
	float taxAmount = grossIncome * TAX;
	float netIncome = grossIncome - taxAmount;

	cout << "\nEmployee Payroll Summary\n";
	cout << "-------------------------\n";
	cout << "Name: " << name << " " << initialOfLastName << ".\n";
	cout << "Age: " << age << " (Adult: " << (isAdult ? "Yes" : "No") << ")\n";
	cout << "Zipcode: " << zipCode << "\n";
	cout << "Hourly Wage: $" << wage << " per hour\n";
	cout << "Total Hours Worked: " << totalHours << " hours\n";
	cout << "Gross Income: $" << grossIncome << "\n";
	cout << "Tax Amount: $" << taxAmount << "\n";
	cout << "Net Income: $" << netIncome << "\n";
}

