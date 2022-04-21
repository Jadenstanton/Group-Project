#include <iostream>
#include "Category.h"
#include "linkedList.h"
#include "Queue.h"

int main() {

    Queue raceQueue;
    Queue religionQueue;
    Queue genderQueue;
    int choice = 0;

    while(choice != -1) {
        std::cout << "\nWhich category would you like presented? ";
        std::cout << "\nEnter 1 for Race";
        std::cout << "\nEnter 2 for Religion";
        std::cout << "\nEnter 3 for Gender";
        std::cout << "\nEnter -1 to quit";
        std::cout << "\nChoice: ";
        std::cin >> choice;

        int choice2=0;//decclare variable inside to reset it each loop

        if (choice == 1) {
            while (choice2 != -1) {
                std::cout << "\nEnter 1 to add an entry\n";
                std::cout << "Enter 2 to view all entries\n";
                std::cout << "Enter 3 to check if forum is empty\n";
                std::cout << "Enter -1 to exit to main menu\n";
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
                std::cout << "Enter -1 to exit to main menu\n";
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
                std::cout << "Enter -1 to exit to main menu\n";
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
    return 0;
};
