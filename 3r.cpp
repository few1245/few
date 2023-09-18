#include<iostream>
#include<string>
using namespace std;
int main()
{
    int score[4],total=0,max=0,min=0;
	float ave;
	string name[4];
    for(int i=0;i<=3;i++)
	{   cout<<"Enter name ["<<i<<"]:";
		cin>>name[i];
		cout<<"Enter score ["<<i<<"]:";
        cin>>score[i];
		total =total+score[i];
		if(score[i]>max)
			max=score[i];
		if(score[i]<=min)
			min=score[i];
		
		
	}

	cout<<"------------------"<<endl;
	ave=total/4;
	
	
	for(int s=0;s<=3;s++)
	{	
		cout<<name[s]<<"  =  "<<score[s]<<endl;
		
		
    }
	cout<<"------------------"<<endl;
	cout<<"Max Score = "<<max<<endl;
	cout<<"Min Score = "<<min<<endl;
	cout<<"total = "<<total<<endl;
	cout<<"Averange = "<<ave<<endl;

	
    system("pause");
    return (0);
}