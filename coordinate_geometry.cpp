//
// Created by ML201 on 2/27/2026.
//
#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1,x2,y1,y2;
    cout<<"Enter the coordinate of first x!"<<endl;
    cin>>x1;
    cout<<"Enter the coordinate of first y!"<<endl;
    cin>>y1;
    cout<<"Enter the coordinate of second x!"<<endl;
    cin>>x2;
    cout<<"Enter the coordinate of second y!"<<endl;
    cin>>y2;
    double distance = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    cout<<distance<<endl;

    cout<<"*******"<< endl
    <<" *****"<<endl
    <<"  ***"<< endl
    <<"   *"<< endl;

}