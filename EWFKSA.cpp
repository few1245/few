#include <iostream>
using namespace std;
int main()
{
	int q1, q2, q3, mt, fl;
	float qmax;
	cout << "Enter final quizz(10) : ";
	cin >> q1;
	cout << "Enter second  quizz(10) : ";
	cin >> q2;
	cout << "Enter second  quizz(10) : ";
	cin >> q3;
	cout >> "Enter mid-term(40) : ";
	cin >> mt;
	cout >> "Enter final(50) : ";
	cin >> fl;
	qmax = ((q1 + q2 + q3) / 3);

	cout << "Quizz Total :  " << qmax;
	cout << "mid term : " << mt;
	cout << "Final : " << fl;
	cout << "total : " << qmax + mt + fl;
	cout << ""

		system("pause");
	return (0);
}


