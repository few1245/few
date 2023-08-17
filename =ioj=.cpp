#include <iostream>
using namespace std;
int main()
{
	int space, rows, i, j, k;
	char s;
	cout << "Select Menu               " << endl;
	cout << "**************************" << endl;
	cout << "1.Aligh Left              " << endl;
	cout << "2.Aligh Right             " << endl;
	cout << "3.Center                  " << endl;
	cout << "4.Exit                    " << endl;
	cout << "**************************" << endl;

	cout << "Select Menu No. : ";
	cin >> s;

	if (s == '1')
	{
		cout << "Input number of line : ";
		cin >> rows;


		for (i = 1; i <= rows; i++) {
			for (j = 1; j <= i; j++) {
				cout << "*";
			}
			cout << "\n";
		}
	}
	else if (s == '2')
	{
		cout << "Input number of line : ";
		cin >> rows;
		for (i = 1; i <= rows; i++) {
			for (k = 1; k <= (rows - i); k++) {
				cout << " ";
			}
			for (j = 1; j <= i; j++) {
				cout << "*";
			}
			cout << endl;



		}
	}
	else if (s == '3')
	{
		cout << "Input number of line : ";
		cin >> rows;

		for (int i = 1, k = 0; i <= rows; ++i, k = 0) {
			for (space = 1; space <= rows - i; ++space) {
				cout << "  ";
			}

			while (k != 2 * i - 1) {
				cout << "* ";
				++k;
			}
			cout << "\n";
		}
	}
	else if (s == '4')
	{
		cout << "**********Exit**********" << endl;

	}
	system("pause");
	return 0;
}