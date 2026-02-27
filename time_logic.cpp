//
// Created by ML201 on 2/27/2026.
//
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter a number: "<< endl;
    cin >> x;
    int hours = x / 3600;
    int minutes = (x - hours * 3600) / 60;
    int seconds = (x - hours * 3600) - (minutes * 60);
    cout << x << " seconds is "<<hours<< " hours,"<<minutes<<" minutes and "<<seconds<<" seconds!" << endl;
}