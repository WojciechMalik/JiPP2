#include "car.h"

//declaring latest version
string Car::latest_version="v2.0";
//constructor
Car::Car(string license_plate, string name, int number_of_seats, string brand, string type, string installed_version)
    : license_plate(license_plate), name(name), number_of_seats(number_of_seats), brand(brand), type(type), installed_version(installed_version){

    list_of_passengers=new string[number_of_seats];
    for(int i=0; i<number_of_seats; i++)
        list_of_passengers[i]= "Puste";
}
//method to print car class
void Car::print_class(){
    cout<<"Numer rejestracyjny: "<<this->license_plate<<endl;
    cout<<"Nazwa: "<<this->name<<endl;
    cout<<"Ilosc miejsc: "<<this->number_of_seats<<endl;
    cout<<"Pasazerowie: "<<endl;
    for(int i=0; i<number_of_seats;i++)
        cout<<this->list_of_passengers[i]<<endl;
    cout<<"Marka: "<<this->brand<<endl;
    cout<<"Typ: "<<this->type<<endl;
}
//method to change info of chosen passenger
void Car::change_list(int seat_number, string info){
    this->list_of_passengers[seat_number-1]=info;
}
//copy constructor
Car::Car(Car &car){
    license_plate=car.license_plate;
    name=car.name;
    number_of_seats=car.number_of_seats;
    for(int i=0; i<number_of_seats; i++)
        list_of_passengers[i]=car.list_of_passengers[i];
    brand=car.brand;
    type=car.type;
    installed_version=car.installed_version;
}
//getters
string Car::get_name(){
    return name;
}
string Car::get_license_plate(){
    return license_plate;
}
string Car::get_brand(){
    return brand;
}
string Car::get_type(){
    return type;
}
//setters
void Car::set_name(const string name){
    this->name=name;
}
void Car::set_license_plate(const string license_plate){
    this->license_plate=license_plate;
}
//method to print info about versions
void Car::print_version(){
    cout<<"Zainstalowana wersja: "<<installed_version<<"\nNajnowsza wersja: "<<latest_version<<endl;
}
//method to update current version
void Car::update_version(){
    this->installed_version=latest_version;
}
//method to update latest version
void Car::update_lastest_version(string new_latest_version){
    latest_version=new_latest_version;
}
//destructor
Car::~Car(){
    delete[] list_of_passengers;
    list_of_passengers=NULL;
}