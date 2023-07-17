#include <iostream>
#include <string>
using namespace std;
int main()
{ 
	string name;
	int birth;
	cout <<"enter name : ";
	cin  >> name;
	cout <<"enter year of birth : ";
	cin  >> birth;
	cout <<"name"<< name <<"."<<endl;
	cout <<"your age=" <<(2566-birth)<<"year old"<<endl;

    system("pause");
    return(0);
}