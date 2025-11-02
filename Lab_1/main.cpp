 #include <iostream>
using namespace std;

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();

int main() {
    int choice;

    do {
        cout << "\nSelect which task to run:\n";
        cout << "1. Task 1 (Check if input is numeric)\n";
        cout << "2. Task 2 (Find operators in expression)\n";
        cout << "3. Task 3 (Determine whether the input is a comment line(s) or not)\n";
        cout << "4. Task 4 (Determine whether the input is an identifier or not)\n";
        cout << "5. Task 5 (Average of array elements)\n";
        cout << "6. Task 6 (Minimum and Maximum of array elements)\n";
        cout << "7. Task 7 (Full Name Concatenation)\n";
        cout << "0. Exit\n";
        cout << "Enter your choice (0-7): ";
        cin >> choice;

        switch(choice) {
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            case 3:
                task3();
                break;
            case 4:
                task4();
                break;
            case 5:
                task5();
                break;
            case 6:
                task6();
                break;
            case 7:
                task7();
                break;
            case 0:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Please enter a number from 0 to 7.\n";
        }

    } while(choice != 0);

    return 0;
}


