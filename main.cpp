#include <iostream>
#include "Category.h"
#include "Queue.h"
//#include "linkedList.h"
//#include <fstream>
//#include <sstream>

void percentCalc(){ /* By Cameron Weems*/
    float num;
    float total;
    float result;

    std::string nationality;
    std::cout << "Enter your nationality:";
    std::cin >> nationality;
    std::cout << "Enter the number of the nationality around your area:";
    std::cin >> num;
    std::cout << "Enter the total marks:";
    std::cin >> total;
    result = (num / total) * 100;
    std::cout << "Your are one in a percentage of :%" << result <<" "<<std::endl;

    std::cout << "Enter your age:";
    std::string age;
    std::cin >> age;
    std::cout << "Enter the number of your age that surrounding your area:";
    std::cin >> num;
    std::cout << "Enter the total marks:";
    std::cin >> total;
    result = (num / total) * 100;
    std::cout << "Your result is : %" << result << std::endl;

    std::cout << "Enter your gender:";
    std::string gender;
    std::cin >> gender;
    std::cout << "Enter the number of your gender around your area:";
    std::cin >> num;
    std::cout << "Enter the total marks:";
    std::cin >> total;
    result = (num / total) * 100;
    std::cout << "Your result is: % " << result << std::endl;
}
void religionStats() {/*Ka'Pri Burden*/
    int religion;

    //organize the race by majority
    //viewing data and relationship between race and religion
    std::cout << "You have entered search by race for religion. Please enter the race that "
            "you would like to view with numerical correspondance to the following:"<< std::endl;


    std::cout << "1-White(Non-Hispanic)" << std::endl;
    std::cout << "2-Black (Non-Hispanic) " << std::endl;
    std::cout << "3-Hispanic" << std::endl;
    std::cout << "4-Asian or Pacific Islander" << std::endl;

    std::cin >> religion;
    switch (religion) {


        case 1:
            std::cout<< "47% Protestant\n18% Catholic\n4% Other Christian\n2% Jewish\n0% Muslim\n"
                        "1% Buddhist\n0% Hindu\n25% Unaffiliated\n1% Other Religion"<< std::endl;
            break;

        case 2:
            std::cout << "67% Protestant\n6% Catholic\n2% Other Christian\n0% Jewish\n2% Muslim\n"
                       "0% Buddhist\n0% Hindu\n19% Unaffiliated\n1% Other Religion"<< std::endl;
            break;

        case 3:
            std::cout << "25% Protestant\n48% Catholic\n3%Other Christian\n0% Jewish\n0% Muslim\n"
                       "0% Buddhist\n0% Hindu\n20% Unaffiliated\n1% Other Religion"<< std::endl;
            break;
            //could note that a lot of their culture is based in Catholic beliefs and it runs strongt hrough Hispanic communities
        case 4:
            std::cout << "16% Protestant\n13% Catholic\n1% Other Christian\n0% Jewish\n7% Muslim\n"
                       "7% Buddhist\n15% Hindu\n34% Unaffiliated\n2% Other Religion"<< std::endl;
            break;
    }
}
void genderStats() { /*Ka'Pri Burden*/



    int year;

    //organize the race by majority
    //viewing data and relationship between race and religion
    std::cout<< "You have entered the gender statistics.Please enter the year that you would like to view with numerical correspondance to the following:"<< std::endl;
    std::cout<< "This is all under data for gender employment disparities: 'Female share of seats on boards of the largest publicly listed companies'"<<std::endl;
    std::cout<< "Something noted from the original data set is that data across the board for all countries listed did not commence until 2016" << std::endl;
    std::cout<< "Choose between the years 2016-2021:"<<std::endl;


    std::cout << "1-2016 " <<std::endl;
    std::cout << "2-2017 " << std::endl;
    std::cout << "3-2018 " << std::endl;
    std::cout << "4-2019 " << std::endl;
    std::cout << "5-2020 " << std::endl;
    std::cout << "6-2021 " << std::endl;

    std::cin >> year;
    switch (year) {

        case 1:
            std::cout << "United States:20.3%\n United Kingdom: 27.0%\n  Canada: 22.8%\n Germany: 29.5%\n Mexico:7.2%\n ";
            break;


        case 2:
            std::cout << "United States:21.7%\n United Kingdom: 27.2%\n  Canada: 25.8%\n Germany: 31.9%\n Mexico:7.5%\n ";
            break;

            //do  case 3

        case 3:
            std::cout << "United States: 23.4%\n United Kingdom:29.9%\n Canada: 27.0%\n Germany: 33.8%\n Mexico:7.3%\n ";
        case 4:
            std::cout << "United States:26.1%\n United Kingdom: 32.6%\n  Canada: 29.1%\n Germany:35.6%\n Mexico:8.1%\n ";
            break;

        case 5:
            std::cout << "United States:28.2%\n United Kingdom: 34.7%\n  Canada: 31.3%\n Germany:36.3%\n Mexico:9.0%\n ";
            break;

        case 6:
            std::cout << "United States:29.7%\n United Kingdom: 37.8%\n  Canada: 32.9%\n Germany:36.0%\n Mexico:10.6%\n ";
            break;
    }
}
void raceStats(){/*Ka'Pri Burden*/

    int race;

    //organize the race by majority
    //viewing data and relationship between race and religion

    //Gives background to defining the race categories

    std::cout <<"White. A person having origins in any of the original peoples of Europe, the Middle East, or North Africa."
           " It includes people who indicate their race as 'White'or report entries such as Irish, German, Italian, Lebanese,"
           " Arab, Moroccan, or Caucasian.\nBlack or African American. A person having origins in any of the Black racial groups of Africa."
           " It includes people who indicate their race as 'Black or African American,'or report entries such as African American, Kenyan, Nigerian, "
           "or Haitian.\nAmerican Indian and Alaska Native. A person having origins in any of the original peoples of North and South America (including Central America) "
           "and who maintains tribal affiliation or community attachment. This category includes people who indicate their race as 'American Indian or Alaska Native'' "
           "or report entries such as Navajo, Blackfeet, Inupiat, Yup'ik, or Central American Indian groups or South American Indian groups.\nAsian: A person having "
           "origins in any of the original peoples of the Far East, Southeast Asia, or the Indian subcontinent including, for example, Cambodia, China, India, "
           "Japan, Korea, Malaysia, Pakistan, the Philippine Islands, Thailand, and Vietnam. This includes people who reported detailed Asian responses such as: "
           "Asian Indian, Chinese, Filipino, Korean,Japanese,Vietnamese,and Other Asian or provide other detailed Asian responses.\nNative Hawaiian and Other "
           "Pacific Islander. A person having origins in any of the original peoples of Hawaii, Guam, Samoa, or other Pacific Islands. It includes people who"
           " reported their race as Fijian, Guamanian or Chamorro, Marshallese, Native Hawaiian, Samoan, Tongan, and Other Pacific Islander or provide other"
           " detailed Pacific Islander responses.\nTwo or more races. People may choose to provide two or more races either by checking two or more race "
           "response check boxes, by providing multiple responses, or by some combination of check boxes and other responses. For data product purposes,"
           " Two or More Races refers to combinations of two or more of the following race categories: White,Black or African American, American Indian or"
           " Alaska Native, Asian, Native Hawaiian or Other Pacific Islander, or Some Other Race"<<std::endl;
    std::cout<< "You have entered race. Please enter the race that you would like to view with numerical correspondance to the following:"<< std::endl;


    std::cout<< "1-White"<<std::endl;
    std::cout<< "2-Black or African-American "<<std::endl;
    std::cout<< "3-American Indian and Alaska Native"<<std::endl;
    std::cout<< "4-Asian"<<std::endl;
    std::cout<< "5-Native Hawaiian and Other Pacific Islander "<<std::endl;
    std::cout<< "6-Two or More Races"<<std::endl;
    std::cout<< "7-Hispanic or Latino"<<std::endl;
    std::cout<< "8-White alone, not Hispanic or Latino"<<std::endl;
    std::cin>>race;

    switch(race){


        case 1:
            std::cout <<"For White alone: 76.3%"<< std::endl;
            break;

        case 2:
            std::cout <<"For Black or African American, alone: 13.4%"<< std::endl;
            break;

        case 3:
            std::cout <<"For American Indian and Alaska Native: 1.3%"<< std::endl;
            break;

        case 4:
            std::cout <<"For Native Hawaiian and Other Pacific Islander alone: 0.2%"<< std::endl;
            break;

        case 5:
            std::cout <<"For Two or More Races: 2.8%"<< std::endl;
            break;

        case 6:
            std::cout <<"For Hispanic or Latino: 18.5%"<< std::endl;
            break;

        case 7:
            std::cout <<"For White alone, not Hispanic or Latino: 60.1%"<< std::endl;
            break;

        case 8:
            std::cout <<"For White alone: 76.3%"<<  std::endl;
            break;

    }
}

int main() { /* By Jaden Stanton*/
    Category Race;
    Category Religion;
    Category Gender;
    Queue raceQueue;
    Queue religionQueue;
    Queue genderQueue;
    int choice = 0;
    int choice2 = 0;
    int mainChoice = 0;//variable for main loop

    //List init
    Race.addItem(Race.accessHead(), 60.1);
    Race.append(Race, 18.5);
    Race.append(Race, 2.8);
    Race.append(Race, 0.2);
    Race.append(Race, 1.3);
    Race.append(Race, 13.4);
    Race.append(Race, 76.3);



    while (mainChoice != -1) {
        mainChoice = 0;//reinit
        std::cout << "\nEnter 1 for forum";
        std::cout << "\nEnter 2 for statistics";
        std::cout << "\nEnter -1 to quit";
        std::cout << "\nChoice:";
        std::cin >> mainChoice;

        if (mainChoice == 1) {//main program loop
            choice = 0;//reinit

            while (choice != -1) {//loop for forum
                std::cout << "\nWhich category would you like presented? ";
                std::cout << "\nEnter 1 for Race";
                std::cout << "\nEnter 2 for Religion";
                std::cout << "\nEnter 3 for Gender";
                std::cout << "\nEnter -1 to exit to main menu";
                std::cout << "\nChoice: ";
                std::cin >> choice;

                choice2 = 0;//decclare variable inside to reset it each loop

                if (choice == 1) {
                    while (choice2 != -1) {
                        std::cout << "\nEnter 1 to add an entry\n";
                        std::cout << "Enter 2 to view all entries\n";
                        std::cout << "Enter 3 to check if forum is empty\n";
                        std::cout << "Enter -1 to exit to menu\n";
                        std::cout << "Choice: ";
                        std::cin >> choice2;

                        switch (choice2) {
                            case 1: {
                                std::string str;//user input
                                int num = 0; //flag for while loop

                                while (num != -1) {
                                    raceQueue.queuePush();

                                    std::cout << "Enter -1 to stop: ";
                                    std::cin >> num;
                                }
                                break;
                            }
                            case 2:
                                std::cout << "\nThese are the entries:\n";
                                raceQueue.queuePrint();
                                std::cout << "\n";
                                break;
                            case 3: {
                                raceQueue.isEmpty();
                                break;
                            }
                            default:;
                        }
                    }

                } else if (choice == 2) {
                    while (choice2 != -1) {
                        std::cout << "\nEnter 1 to add an entry\n";
                        std::cout << "Enter 2 to view all entries\n";
                        std::cout << "Enter 3 to check if forum is empty\n";
                        std::cout << "Enter -1 to exit to menu\n";
                        std::cout << "Choice: ";
                        std::cin >> choice2;

                        switch (choice2) {
                            case 1: {
                                std::string str;//user input
                                int num = 0; //flag for while loop

                                while (num != -1) {
                                    religionQueue.queuePush();

                                    std::cout << "Enter -1 to stop: ";
                                    std::cin >> num;
                                }
                                break;
                            }
                            case 2:
                                std::cout << "\nThese are the entries:\n";
                                religionQueue.queuePrint();
                                std::cout << "\n";
                                break;
                            case 3: {
                                religionQueue.isEmpty();
                                break;
                            }
                            default:;
                        }
                    }
                } else if (choice == 2) {
                    while (choice2 != -1) {
                        std::cout << "\nEnter 1 to add an entry\n";
                        std::cout << "Enter 2 to view all entries\n";
                        std::cout << "Enter 3 to check if forum is empty\n";
                        std::cout << "Enter -1 to exit to menu\n";
                        std::cout << "Choice: ";
                        std::cin >> choice2;

                        switch (choice2) {
                            case 1: {
                                std::string str;//user input
                                int num = 0; //flag for while loop

                                while (num != -1) {
                                    genderQueue.queuePush();

                                    std::cout << "Enter -1 to stop: ";
                                    std::cin >> num;
                                }
                                break;
                            }
                            case 2:
                                std::cout << "\nThese are the entries:\n";
                                genderQueue.queuePrint();
                                std::cout << "\n";
                                break;
                            case 3: {
                                genderQueue.isEmpty();
                                break;
                            }
                            default:;
                        }
                    }
                }
            }
        } else if (mainChoice == 2) {
            choice = 0;
            while (choice != -1) {//loop for forum
                std::cout << "\nWhich category would you like presented? ";
                std::cout << "\nEnter 1 for Race stats";
                std::cout << "\nEnter 2 for Religion stats";
                std::cout << "\nEnter 3 for Gender stats";
                std::cout << "\nEnter -1 to exit to main menu";
                std::cout << "\nChoice: ";
                std::cin >> choice;

                choice2 = 0;//decclare variable inside to reset it each loop

                if (choice == 1) {
                    while (choice2 != -1) {
                        std::cout << "\nEnter 1 display all stats\n";
                        std::cout << "Enter 2 to sort entries from H to L\n";
                        std::cout << "Enter 3 to sort entries from L to H\n";
                        std::cout << "Enter 4 to sort entries alphabetically\n";
                        std::cout << "Enter 5 to check if stats are empty\n";
                        std::cout << "Enter 6 to calculate your local statistics\n";
                        std::cout << "Enter -1 to exit to menu\n";
                        std::cout << "Choice: ";
                        std::cin >> choice2;

                        switch (choice2) {
                            case 1: {

                                raceStats();
                                break;
                            }
                            case 2:
                                //for sort H to L


                                break;
                            case 3:
                                //will sort data from high to low
                                Race.mergeSort(Race.accessHead());
                                std::cout << "Entries low to high: \n";
                                Race.printAll(Race.accessHead());
                                break;
                            case 4:
                                //for sorting location alphabetically
                                break;
                            case 5: {
                                Race.isEmpty();
                                break;
                            }
                            case 6:{
                                percentCalc();
                            }
                            default:;
                        }
                    }

                } else if (choice == 2) {
                    while (choice2 != -1) {
                        std::cout << "\nEnter 1 display all stats\n";
                        std::cout << "Enter 2 to sort entries from H to L\n";
                        std::cout << "Enter 3 to sort entries from L to H\n";
                        std::cout << "Enter 4 to sort entries alphabetically\n";
                        std::cout << "Enter 5 to check if stats are empty\n";
                        std::cout << "Enter 6 to calculate your local statistics\n";
                        std::cout << "Enter -1 to exit to menu\n";
                        std::cout << "Choice: ";
                        std::cin >> choice2;

                        switch (choice2) {
                            case 1: {

                                religionStats();
                                break;
                            }
                            case 2:
                                //for sort H to L
                                break;
                            case 3:
                                //will sort data from high to low
//                                Religion.mergeSort(Religion.accessHead());
                                std::cout << "Entries low to high: \n";
                                Religion.viewAll();
                                break;
                            case 4:
                                //for sort location alphabetically
                                break;
                            case 5: {
                                Religion.isEmpty();
                                break;
                            }
                            case 6:
                                percentCalc();
                                break;
                            default:;
                        }
                    }
                } else if (choice == 3) {
                    while (choice2 != -1) {
                        std::cout << "\nEnter 1 display all stats\n";
                        std::cout << "Enter 2 to sort entries from H to L\n";
                        std::cout << "Enter 3 to sort entries from L to H\n";
                        std::cout << "Enter 4 to sort entries alphabetically\n";
                        std::cout << "Enter 5 to check if stats are empty\n";
                        std::cout << "Enter 6 to calculate your local statistics\n";
                        std::cout << "Enter -1 to exit to menu\n";
                        std::cout << "Choice: ";
                        std::cin >> choice2;

                        switch (choice2) {
                            case 1: {

                                genderStats();
                                break;
                            }
                            case 2:
                                //for sort high to low
                                break;
                            case 3:
                                //will sort data from high to low
//                                Gender.mergeSort(Gender.accessHead());
                                std::cout << "Entries low to high: \n";
                                Gender.viewAll();
                                break;
                            case 4:
                                //for sort location alphabetically
                            case 5: {
                                Gender.isEmpty();
                                break;
                            }
                            case 6:
                                percentCalc();
                                break;
                            default:;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
