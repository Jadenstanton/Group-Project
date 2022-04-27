#include <iostream>
using namespace std;
//source:https://www.statista.com/statistics/749128/religious-identity-of-adults-in-the-us-by-race-and-ethnicity/

//research shows that initaillay if else statements and switch statements run with the same time efficiency
//however, the greater the pool of data, the faster switch statements will run faster than if else statements
// for the race and religion
//statistics
int main()
{

int religion;

//organize the race by majority
//viewing data and relationship between race and religion
cout<< "You have entered search by race for religion. Please enter the race that you would like to view with numerical correspondance to the following:"<< endl;


cout<< "1-White(Non-Hispanic)"<<endl;
cout<< "2-Black (Non-Hispanic) "<<endl;
cout<< "3-Hispanic"<<endl;
cout<< "4-Asian or Pacific Islander"<<endl;

cin>>religion;
switch(religion){
	
	
	case 1:
		cout <<"47% Protestant\n18% Catholic\n4% Other Christian\n2% Jewish\n0% Muslim\n1% Buddhist\n0% Hindu\n25% Unaffiliated\n1% Other Religion"<< endl;
		break;
		
	case 2:
		cout <<"67% Protestant\n6% Catholic\n2% Other Christian\n0% Jewish\n2% Muslim\n0% Buddhist\n0% Hindu\n19% Unaffiliated\n1% Other Religion"<< endl;
		break;
		
	case 3:
		cout <<"25% Protestant\n48% Catholic\n3%Other Christian\n0% Jewish\n0% Muslim\n0% Buddhist\n0% Hindu\n20% Unaffiliated\n1% Other Religion"<< endl;
		break;
		//could note that a lot of their culture is based in Catholic beliefs and it runs strongt hrough Hispanic communities
	case 4:
		cout <<"16% Protestant\n13% Catholic\n1% Other Christian\n0% Jewish\n7% Muslim\n7% Buddhist\n15% Hindu\n34% Unaffiliated\n2% Other Religion"<< endl;
		break;	
		
		
		
		
}



}
