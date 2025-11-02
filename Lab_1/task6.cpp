
#include <iostream>
using namespace std;

void task6() {
    int n;
    cout << "Task 6: Minimum and Maximum of array elements\n";
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl << endl;
}
