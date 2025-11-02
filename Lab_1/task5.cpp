 #include <iostream>
using namespace std;

void task5() {
    int n;
    cout << "Task 5: Average of array elements\n";
    cout << "Enter the number of elements: ";
    cin >> n;

    double arr[n];
    double sum = 0;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = sum / n;
    cout << "The average value is: " << average << endl << endl;
}
