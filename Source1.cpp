#include<iostream>
using namespace std;

int main() {
	int money;
	int Bank_1000;
	int temp;
	int Bank_500;
	int Bank_100;
	int Bank_50;
	int Bank_20;



	cout << "Amount to be withdraw :";
	cin >> money;

	if (money > 1000) {
		Bank_1000 = money / 1000;
		temp = money % 1000;
		if (temp >= 500) {
			Bank_500 = temp / 500;
			Bank_100 = temp / 100 - 5;
		}
		else {
			Bank_500 = 0;
			Bank_100 = temp / 100;
		}
		if (temp < 500)
			Bank_50 = (temp / 100);

		temp = temp % 100;
		Bank_50 = temp / 50;
		temp = temp % 50;
		Bank_20 = temp / 20;
		temp = temp % 20;





	}
	cout << "1000 = " << Bank_1000 << endl;
	cout << "500 = " << Bank_500 << endl;
	cout << "100 = " << Bank_100 << endl;
	cout << "50 = " << Bank_50 << endl;
	cout << "20 = " << Bank_20 << endl;

	system("Pause");
	return (0);
}