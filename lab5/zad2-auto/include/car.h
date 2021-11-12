#ifndef REPOZYTORIUM_CAR_H
#define REPOZYTORIUM_CAR_H
#include <iostream>
#include <string>

using namespace std;

class Car{
private:
    string license_plate, name;
    int number_of_seats;
    string *list_of_passengers;
    string brand, type;
    static string latest_version;
    string installed_version;
public:
    Car(string license_plate, string name, int number_of_seats, string brand, string type, string installed_version);
    void print_class();
    void change_list(int seat_number, string info);
    Car(Car &car);
    string get_name();
    string get_license_plate();
    string get_brand();
    string get_type();
    void set_name(string name);
    void set_license_plate(string license_plate);
    void print_version();
    void update_version();
    void update_lastest_version(string new_latest_version);
    ~Car();
};

#endif //REPOZYTORIUM_CAR_H
