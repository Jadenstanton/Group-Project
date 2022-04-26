#include <iostream>
#include "Category.h"
#include "linkedList.h"
#include "Queue.h"
#include <fstream>
//#include <vector>
#include <sstream>

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
};

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
                                std::cout << "\nThese are the entries:\n";
                                Race.viewAll();
                                std::cout << "\n";
                                break;
                            }
                            case 2:
                                //for sort H to L
                                break;
                            case 3:
                                //for sort L to H
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
                                std::cout << "\nThese are the entries:\n";
                                Religion.viewAll();
                                std::cout << "\n";
                                break;
                            }
                            case 2:
                                //for sort H to L
                                break;
                            case 3:
                                //for sort L to H
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
                                std::cout << "\nThese are the entries:\n";
                                Gender.viewAll();
                                std::cout << "\n";
                                break;
                            }
                            case 2:
                                //for sort high to low
                                break;
                            case 3:
                                //for sort low to high
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

