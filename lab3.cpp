#include <iostream>
#include <numbers>
using namespace std;

void swapValues(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int findMax(int* arr, int size) {
    int max =*arr;

    for (int i = 1; i < size; i++) {
        if (*(arr+i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;

    while (start < end) {
        swapValues(start, end);
        start++;
        end--;
    }
}
int* createArray(int size) {
    int* arr = new int[size];
    cout << "Enter values" << endl;
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }
    return arr;
}

void deleteArray(int* arr, int size) {
    delete[] arr;
}



int main() {
    int size;
    cout <<"\nEnter array size" << endl;
    cin>>size;
    int* arr = createArray(size);

    cout <<"\n Array Elements:" << endl;
    printArray(arr, size);

    cout <<"\n Maximum Element:"<< endl;
    cout <<findMax(arr, size) << endl;

    cout <<"\n ----------------"<< endl;

    int a = 5;
    int b = 8;

    cout << "Swapping two numbers " << endl;
    cout <<"\nBefore swap:"<< endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swapValues(&a, &b);
    cout << "\nAfter swap:"<< endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "\nReversing array..." << endl;
    reverseArray(arr, size);
    cout << "\nAfter reverse array:" << endl;
    printArray(arr, size);

    cout << "\n ---------------" << endl;
    cout <<"Deleting array..." << endl;
    deleteArray(arr, size);
    cout << "Memory released successfully." << endl;
    return 0;
}