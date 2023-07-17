#include <iostream>
#include <string>
using namespace std;
int main()
{
  string name;
  int salary;
  int sale;
  float commission;

  cout<<"enter name: ";
  cin >> name;
  cout<<"enter salary: ";
  cin >> salary;
  cout<<"enter sale : ";
  cin >> sale;
  cout<< "enter commission : ";
  cin >> commission;
  cout<<"your name = "<<name<<"."<<endl;
  cout<<"total revenue "<<salary+(sale*(commission/100))<< endl;


    system("pause");
    return(0);
}
  
