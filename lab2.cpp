//task1
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number greater than 9: ";
    cin >> n;
    while (n <= 9) {
        cout << "Enter a number greater than 9: ";
        cin >> n;
    }

    int steps = 0;
    cout << n;

    while (n>=10) {
        int temp = n;
        int sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }
        n = sum;
        steps++;
        cout << "->" << n;
    }
    cout << endl;
    cout << "Final value: " << n << endl;
    cout << "Total steps: " << steps << endl;


//task2
    int x;

    cout << "Please enter a number between 10 and 100: ";
    cin >> x;

    while(x < 10 || x > 100){
        cout << "Invalid input. Please enter a number between 10 and 100: ";
        cin >> x;
    }

    int fizz = 0;
    int buzz = 0;
    int fizzbuzz = 0;

    for(int i=1;i<=x;i++){

        if(i % 7 == 0){
            cout << "(" << i << " is skipped)" << endl;
            continue;
        }

        if(i % 3 == 0 && i % 5 == 0){
            cout << "FizzBuzz" << endl;
            fizzbuzz++;
        }

        else if(i % 3 == 0){
            cout << "Fizz" << endl;
            fizz++;
        }

        else if(i % 5 == 0){
            cout << "Buzz" << endl;
            buzz++;
        }

        else{
            cout << i << endl;
        }
    }

    cout << "--- Summary ---" << endl;
    cout << "Fizz count: " << fizz << endl;
    cout << "Buzz count: " << buzz << endl;
    cout << "FizzBuzz count: " << fizzbuzz << endl;

//task3


    int z;

    cout << "Please enter a number between 3 and 9: ";
    cin >> z;

    while(z < 3 || z > 9){
        cout << "Please enter a number between 3 and 9: ";
        cin >> z;
    }

    for(int i=1;i<2*z;i++){

        int k = z - abs(z - i);

        for(int j=1;j<=k;j++){
            cout << j;
        }

        cout << endl;
    }

    return 0;

}