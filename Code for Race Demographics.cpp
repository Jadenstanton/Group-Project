#include <iostream>
using namespace std;

//source:https://www.census.gov/quickfacts/fact/table/US/RHI225220#RHI225220
//research shows that initaillay if else statements and switch statements run with the same time efficiency
//however, the greater the pool of data, the faster switch statements will run faster than if else statements
// for the RACE 
//statistics
int main()
{

int race;

//organize the race by majority
//viewing data and relationship between race and religion

//Gives background to defining the race categories

cout <<"White. A person having origins in any of the original peoples of Europe, the Middle East, or North Africa. It includes people who indicate their race as 'White'or report entries such as Irish, German, Italian, Lebanese, Arab, Moroccan, or Caucasian.\nBlack or African American. A person having origins in any of the Black racial groups of Africa. It includes people who indicate their race as 'Black or African American,'or report entries such as African American, Kenyan, Nigerian, or Haitian.\nAmerican Indian and Alaska Native. A person having origins in any of the original peoples of North and South America (including Central America) and who maintains tribal affiliation or community attachment. This category includes people who indicate their race as 'American Indian or Alaska Native'' or report entries such as Navajo, Blackfeet, Inupiat, Yup'ik, or Central American Indian groups or South American Indian groups.\nAsian: A person having origins in any of the original peoples of the Far East, Southeast Asia, or the Indian subcontinent including, for example, Cambodia, China, India, Japan, Korea, Malaysia, Pakistan, the Philippine Islands, Thailand, and Vietnam. This includes people who reported detailed Asian responses such as: Asian Indian, Chinese, Filipino, Korean,Japanese,Vietnamese,and Other Asian or provide other detailed Asian responses.\nNative Hawaiian and Other Pacific Islander. A person having origins in any of the original peoples of Hawaii, Guam, Samoa, or other Pacific Islands. It includes people who reported their race as Fijian, Guamanian or Chamorro, Marshallese, Native Hawaiian, Samoan, Tongan, and Other Pacific Islander or provide other detailed Pacific Islander responses.\nTwo or more races. People may choose to provide two or more races either by checking two or more race response check boxes, by providing multiple responses, or by some combination of check boxes and other responses. For data product purposes, Two or More Races refers to combinations of two or more of the following race categories: White,Black or African American, American Indian or Alaska Native, Asian, Native Hawaiian or Other Pacific Islander, or Some Other Race"<<endl;
cout<< "You have entered race. Please enter the race that you would like to view with numerical correspondance to the following:"<< endl;


cout<< "1-White"<<endl;
cout<< "2-Black or African-American "<<endl;
cout<< "3-American Indian and Alaska Native"<<endl;
cout<< "4-Asian"<<endl;
cout<< "5-Native Hawaiian and Other Pacific Islander "<<endl;
cout<< "6-Two or More Races"<<endl;
cout<< "7-Hispanic or Latino"<<endl;
cout<< "8-White alone, not Hispanic or Latino"<<endl;
cin>>race;
switch(race){
	
	
	case 1:
		cout <<"For White alone: 76.3%"<< endl;
		break;
		
	case 2:
		cout <<"For Black or African American, alone: 13.4%"<< endl;
		break;
		
	case 3:
		cout <<"For American Indian and Alaska Native: 1.3%"<< endl;
		break;
		
	case 4:
		cout <<"For Native Hawaiian and Other Pacific Islander alone: 0.2%"<< endl;
		break;	
		
	case 5:
		cout <<"For Two or More Races: 2.8%"<< endl;
		break;	
		
	case 6:
		cout <<"For Hispanic or Latino: 18.5%"<< endl;
		break;	
		
	case 7:
		cout <<"For White alone, not Hispanic or Latino: 60.1%"<< endl;
		break;
		
	case 8:
		cout <<"For White alone: 76.3%"<< endl;
		break;
		
}

}//end of int main

