// Stephanie St. Louis
// Rhonda's Strikeforce Gym Project
// Calculates the membership fees over the next 10 years based on the membership

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	//A) Declare necessary variables for user input and calculations
	const double GOLD = 1.01,
		SILVER = 1.02,
		BRONZE = 1.04,
		BASE_COST = 1200.00;

	double cost,
		rate;

	int year;
	char member = '0'; // Used to store user input of membership level

	do
	{

	//B) Display menu
		cout << "\t Welcome to Rhonda's Strikeforce Gym!! " << endl;
		cout << "--------------------------------------------" << endl;
		cout << "\t Membership Fee Calculator\n" << endl;
		cout << " 1.  Gold\n";
		cout << " 2.  Silver\n";
		cout << " 3.  Bronze\n";
		cout << " 4.  Quit\n" << endl;

	//C) Read in the input from the user

		cout << "Please Enter your Membership Level ( 1-3 , Enter 4 to Quit) \n";
		cin >> member;
		cout << endl;
		cout << fixed << showpoint << setprecision(2) << left;


	//D) Validate user input(must input 1 through 4), loop if value is invalid
		while (member < '1' || member > '4')
		{
			cout << "Invalid Selection, please select Option 1-4\n";
			cin >> member;
		}

		// User Input of Option 1-3 branches program into Switch 1-3 Cases
		switch (member)
		{

			// Gold Interest Rate Fees Over 10 Years
			// rate = Gold
		case '1': rate = GOLD;
			break;

			// Silver Interest Rate Fees Over 10 Years
			// rate = Silver 
		case '2': rate = SILVER;
			break;

			// Bronze Interest Rate Fees Over 10 Years
			// rate = Bronze  
		case '3': rate = BRONZE;
			break;
		}

	//E) If values1 - 3 were entered perform calculations else if 4 was entered exit program with thank you message.
	// E.1) Perform calculation for specified membership for 10 years and output
		// (this will require a loop)
		if (member == '1' || member == '2' || member == '3')
		{
			for (year = 1, cost = rate*BASE_COST; year <= 10; year++)
			{
				//Display Yearly Cost
				cout << "Year " << setw(5) << year << " $" << cost << endl;
				cost *= rate;
			}
			cout << endl;
		}


	} while (member != '4');

	// If User Selects 4, Exits program. Menu loops 1-3, Invalid otherwise, and Exit on 4.
	if (member == '4')
		cout << "\n Thank you for using Rhonda's Fee Calculator!\n" << endl;

	return 0;
}
