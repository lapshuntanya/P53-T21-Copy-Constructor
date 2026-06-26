#include "Medicine.h"
#include "Pharmacy.h"

int main() {


    // Medicine a("Aspiryn", "Pills", 150.5);
    //
    // //b-this, a = obj
    // Medicine b = a; //"Aspiryn", "Pills", 150.5
    // b.setType("Capsules");
    //
    //
    // a.showInfo();//"Aspiryn", "Pills", 150.5
    // b.showInfo();//"Aspiryn", "Capsules", 150.5
    //
    // cout << "---------------------\n\n";
    //
    // Medicine d; //"Undefined", "Undefined", 0
    //
    // d = a; //Assignment operator (=)
    // d.setTitle("Dr. Mom");
    // d.setType("Syrop");
    //
    // d.showInfo();
    // a.showInfo();
    Medicine a("Aspiryn", "Pills", 150.5);

    Pharmacy pharm911;
    pharm911.addMedicine(a);
    pharm911.addMedicine(Medicine("Dr. Mom", "Syrop", 500));
    pharm911.addMedicine(Medicine("Analgin", "Pills", 150));

    pharm911.sortMedByPrice();
    pharm911.showInfo();

    return 0;
}