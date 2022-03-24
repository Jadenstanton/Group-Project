#include <iostream>
#include "Category.h"
#include "linkedList.h"

int main() {
    int choice = 0;
    int choice2 = 0;
    int count = 0;
    //Categories
    Category Race;
    Category Religion;
    Category Gender;
    Category Sexuality;
    Category Culture;
    Category Disability;

    //initial display
    std::cout << "Which category would you like presented? ";
    std::cout << "\nEnter 1 for Race";
    std::cout << "\nEnter 2 for Religion";
    std::cout << "\nEnter 3 for Gender";
    std::cout << "\nEnter 4 for Sexuality";
    std::cout << "\nEnter 5 for Culture";
    std::cout << "\nEnter 6 for Disabilities";
    std::cout << "\nChoice: ";
    std::cin >> choice;

    if (choice == 1) {
        while(choice2 != -1) {
            std::cout << "\nEnter 1 to add an entry\n";
            std::cout << "Enter 2 to view all entries\n";
            std::cout << "Enter 3 to search for an entry\n";
            std::cout << "Enter 4 to delete an entry\n";
            std::cout << "Enter -1 to exit\n";
            std::cout << "Choice: ";
            std::cin >> choice2;

            switch (choice2) {
                case 1:
                    Race.addEntry();
                    break;
                case 2:
                    std::cout << "\nThese are the entries: ";
                    Race.viewAllEntries();
                    std::cout << "\n";
                    break;
                case 3: {
                    std::string index;
                    std::cout << "Which entry number are you searching for? ";
                    std::cin >> index;
                    Race.searchEntry(index);
                    break;
                }
                case 4: {
                    std::string loc;//entry place to be deleted
                    std::cout << "Which entry number are you deleting? ";
                    std::cin >> loc;
                    Race.deleteEntry(loc);
                    break;
                }
                case 5:
                    //case for editing entry
                    break;
                default:;
            }
        }
    } else if (choice == 2) {
        std::cout << "Enter 1 to add an entry";
        std::cout << "Enter 2 to view all entries";
        std::cout << "Enter 3 to search for an entry";
        std::cout << "Enter 4 to delete an entry";
        std::cin >> choice2;

        switch (choice2) {
            case 1:
                Religion.addEntry();
                break;
            case 2:
                std::cout << "\nThese are the entries: ";
                Religion.viewAllEntries();
                std::cout << "\n\n";
                break;
            case 3: {
                std::string index;
                std::cout << "Which entry number are you searching for? ";
                std::cin >> index;
                Religion.searchEntry(index);
                break;
            }
            case 4: {
            std::string loc;//entry place to be deleted
            std::cout << "Which entry number are you deleting? ";
            std::cin >> loc;
            Religion.deleteEntry(loc);
            break;
            }
            case 5:
                //case for editing entry
                break;
            default:;
        }
    } else if (choice == 3) {
        std::cout << "Enter 1 to add an entry";
        std::cout << "Enter 2 to view all entries";
        std::cout << "Enter 3 to search for an entry";
        std::cout << "Enter 4 to delete an entry";
        std::cin >> choice2;

        switch (choice2) {
            case 1:
                Gender.addEntry();
                break;
            case 2:
                std::cout << "\nThese are the entries: ";
                Gender.viewAllEntries();
                std::cout << "\n\n";
                break;
            case 3: {
                std::string index;
                std::cout << "Which entry number are you searching for? ";
                std::cin >> index;
                Gender.searchEntry(index);
                break;
            }
            case 4: {
            std::string loc;//entry place to be deleted
            std::cout << "Which entry number are you deleting? ";
            std::cin >> loc;
            Gender.deleteEntry(loc);
            break;
            }
            case 5:
                //case for editing entry
                break;
            default:;
        }
    } else if (choice == 4) {
        std::cout << "Enter 1 to add an entry";
        std::cout << "Enter 2 to view all entries";
        std::cout << "Enter 3 to search for an entry";
        std::cout << "Enter 4 to delete an entry";
        std::cin >> choice2;

        switch (choice2) {
            case 1:
                Sexuality.addEntry();
                break;
            case 2:
                std::cout << "\nThese are the entries: ";
                Sexuality.viewAllEntries();
                std::cout << "\n\n";
                break;
            case 3: {
                std::string index;
                std::cout << "Which entry number are you searching for? ";
                std::cin >> index;
                Sexuality.searchEntry(index);
                break;
            }
            case 4: {
            std::string loc;//entry place to be deleted
            std::cout << "Which entry number are you deleting? ";
            std::cin >> loc;
            Sexuality.deleteEntry(loc);
            break;
            }
            case 5:
                //case for editing entry
                break;
            default:;
        }
    } else if (choice == 5) {
        std::cout << "Enter 1 to add an entry";
        std::cout << "Enter 2 to view all entries";
        std::cout << "Enter 3 to search for an entry";
        std::cout << "Enter 4 to delete an entry";
        std::cin >> choice2;

        switch (choice2) {
            case 1:
                Culture.addEntry();
                break;
            case 2:
                std::cout << "\nThese are the entries: ";
                Culture.viewAllEntries();
                std::cout << "\n\n";
                break;
            case 3: {
                std::string index;
                std::cout << "Which entry number are you searching for? ";
                std::cin >> index;
                Culture.searchEntry(index);
                break;
            }
            case 4: {
            std::string loc;//entry place to be deleted
            std::cout << "Which entry number are you deleting? ";
            std::cin >> loc;
            Culture.deleteEntry(loc);
            break;
            }
            case 5:
                //case for editing entry
                break;
            default:;
        }
    } else if (choice == 6) {
        std::cout << "Enter 1 to add an entry";
        std::cout << "Enter 2 to view all entries";
        std::cout << "Enter 3 to search for an entry";
        std::cout << "Enter 4 to delete an entry";
        std::cin >> choice2;

        switch (choice2) {
            case 1:
                Disability.addEntry();
                break;
            case 2:
                std::cout << "\nThese are the entries: ";
                Disability.viewAllEntries();
                std::cout << "\n\n";
                break;
            case 3: {
                std::string index;
                std::cout << "Which entry number are you searching for? ";
                std::cin >> index;
                Disability.searchEntry(index);
                break;
            }
            case 4: {
            std::string loc;//entry place to be deleted
            std::cout << "Which entry number are you deleting? ";
            std::cin >> loc;
            Disability.deleteEntry(loc);
            break;
            }
            case 5:
                //case for editing entry
                break;
            default:;
        }
    } else {
        std::cout << "Enter an appropriate number: ";
    }

    return 0;
}
