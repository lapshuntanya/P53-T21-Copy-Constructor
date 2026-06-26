#include "Medicine.h"

int main() {

    Medicine a("Aspiryn", "Pills", 150.5);

    //b-this, a = obj
    Medicine b = a; //"Aspiryn", "Pills", 150.5
    b.setType("Capsules");


    a.showInfo();//"Aspiryn", "Pills", 150.5
    b.showInfo();//"Aspiryn", "Capsules", 150.5

    cout << "---------------------\n\n";

    Medicine d; //"Undefined", "Undefined", 0

    d = a; //Assignment operator (=)
    d.setTitle("Dr. Mom");
    d.setType("Syrop");

    d.showInfo();
    a.showInfo();

    return 0;
}