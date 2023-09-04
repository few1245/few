#include <iostream>
using namespace std;
void calcircle();
void rectahle();
int main()
{			char ch;
		do{
			cout<<"program Calculate of Area."<<endl;
			cout<<"**************************"<<endl;
			cout<<"1.Circle"<<endl;
			cout<<"2.Rectangle"<<endl;
			cout<<"3.Exit"<<endl;
			cout<<"Cooose Menu : ";
			cin>>ch;
		if(ch == '1')calcircle();

			else if(ch == '2')rectahle();
				else if(ch == '3')cout<<"Exit"<<endl;
		

			}while(ch != '3');
	   system("pause");
	   return(0);

}

 void calcircle()
{
	float radius,area,circumference;
	cout<<"Input radius : ";
	cin>>radius;
	area=3.14*radius*radius;

	cout<<" "<<area<<endl;
	cout<<" "<<circumference<<endl;
	cout<<" "<<2*radius<<endl;
 }

void rectahle()
{
	float wide,hight;

cout<<"Enter wide : ";
cin >>wide;
cout<<"Enter hight : ";
cin >>hight;

cout<<"Rectange = "<<wide*hight<<endl;
}


