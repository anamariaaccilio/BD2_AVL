#ifndef RECORD_H
#define RECORD_H

#include <iostream>

using namespace std;

struct Record
{
    int id;
    char district[15];
    int year;
    int month;
    int day;
    int vol;
    char street[30];


    long left=-1, right=-1;
    int height=0;
    pair<long, char> next = {-1, 'd'};

    int getKey() const {
        return id;
    }

    string get_street() const {
        return street;
    }

    void setData(){
        cout << "ID: ";
        cin >> id;
        cout << "District: ";
        cin >> district;
        cout << "Year: ";
        cin >> year;
        cout << "Month: ";
        cin >> month;
        cout << "Day: ";
        cin >> day;
        cout << "Volume: ";
        cin >> vol;
        cout << "Street: ";
        cin >> street;
    }
    void showData(){
        cout << "ID: " << id << endl;
        cout << "District: " << district << endl;
        cout << "Year: " << year << endl;
        cout << "Month: " << month << endl;
        cout << "Day: " << day << endl;
        cout << "Volume: " << vol << endl;
        cout << "Street: " << street << endl;
    }

};



#endif // RECORD_H