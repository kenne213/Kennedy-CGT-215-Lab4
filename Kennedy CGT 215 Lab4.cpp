// Kennedy CGT 215 Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	// I recommend writing your factorial code here
	int factorial = 1;
	int nfactorial;

	cout << "Factorial: " << endl;
	cout << "Enter a number: ";
	cin >> nfactorial;

	while (nfactorial < 0) {
		cout << "Nice try, please enter a POSITIVE number: ";
		cin >> nfactorial;
	}
	cout << nfactorial << "! = ";

	int x = 1;
	while (x <= nfactorial) {
		factorial *= x;
		if (x < nfactorial) {
			cout << x << " * ";
		}
		else if (x == nfactorial) {
			cout << x << " = ";
		}
		x++;
	}
	cout << factorial << endl;
}
void arithmetic() {
	// I recommend writing your arithmetic series code here
	int startval;
	int changeval;
	int numelement;
	int finalval = 0;

	cout << "Arithmetic Series: " << endl;
	cout << "Enter a number to start at: ";
	cin >> startval;
	cout << "Enter a number to add each time: ";
	cin >> changeval;
	cout << "Enter the number of elements in the series: ";
	cin >> numelement;

	while (numelement < 0) {
		cout << "Nice try, please enter a POSITIVE number: ";
		cin >> numelement;
	}

	int y = 1;
	while (y <= numelement) {
		if (y < numelement) {
			cout << startval << " + ";
		}
		else if (y == numelement) {
			cout << startval << " = ";
		}
		finalval += startval;
		startval += changeval;
		y++;
	}
	cout << finalval << endl;
}
void geometric() {
	// I recommend writing your geometric series code here
	int startnum;
	int multiple;
	int elementnum;
	int totalval = 0;

	cout << "Geometric Series: " << endl;
	cout << "Enter a number to start at: ";
	cin >> startnum;
	cout << "Enter a number to multiply by each time: ";
	cin >> multiple;
	cout << "Enter the number of elements in the series: ";
	cin >> elementnum;

	while (elementnum < 0) {
		cout << "Nice try, please enter a POSITIVE number: ";
		cin >> elementnum;
	}

	int z = 1;
	while (z <= elementnum) {
		if (z < elementnum) {
			cout << startnum << " + ";
		}
		else if (z == elementnum) {
			cout << startnum << " = ";
		}
		totalval = totalval + startnum;
		startnum = startnum * multiple;
		z++;
	}
	cout << totalval << endl;
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
