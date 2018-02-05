

//if the day is sunday, what day is it?
//write your code using enum and Sunday is your default 'day'

#include<iostream>

using namespace std;

enum today{Sun,Mon,Tue,Wed,Thu,Fri,Sat};

int main()
{
	int today;
	string day;
	cout<<"Today day: ";
	cin>>day;
	
	cout<<" "<<day<<endl;
	
	std::cout<<"Day "<<today+1;
}
