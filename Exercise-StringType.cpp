#include <iostream>
#include <string>

using namespace std;

int main()
{
	//write your name there.
	//make a while loop until user input 'quit' to exit/end the program
	string userName;
	string myName="HAFIZ AFIQ";
	while(true)
	{
		
		cout<<"Enter your name(or 'quit to exit): "<<endl;
		getline(cin,userName);
		
		//get the user input for string.
		if(userName==myName)
	    {
			cout<<"Hey, "<<userName<<"!"<<endl;
		}
		else if(userName=="quit")
		{
			cout<<endl;
			break;
		}
		else
		{
			cout<<"Aha! its "<<myName<<endl;
		}
	}
	return 0;
}


