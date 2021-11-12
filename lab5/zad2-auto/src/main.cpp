#include "car.h"

int main(){
    Car auto1("KRA123456", "i8", 6, "BMW", "osobowy", "v1.4");
    auto1.print_class();
    Car auto2=auto1;
    auto2.print_class();

    return 0;
}

