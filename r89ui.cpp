#include <iostream>
using namespace std;
int main()
{  
	float age,height,weight;
	char gender;

	cout<<"enter age : ";
	cin >>age;
	cout<<"enter gender : ";
	cin >>gender;
	cout<<"enter height : ";
	cin >>height;
	cout<<"enter weight : ";
	cin >>weight;
	
	float bmi= weight/(height/100*height/100);
	
	cout<<"bmi = "<<bmi<<endl;


	if(bmi<18.5){ 
		cout<<"low";
	}else if(bmi>18.5 & bmi< 24.9){
		cout<<"normal"<<endl;
    }else if(bmi>23 & bmi< 29.9){
		cout<<"fat1"<<endl;
    }else if(bmi>30){
		cout<<"fat2"<<endl;
	}



	
	system("pause");
	return (0);
}