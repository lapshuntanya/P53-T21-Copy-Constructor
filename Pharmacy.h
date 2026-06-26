//
// Created by Tetiana Perederii on 26.06.2026.
//

#ifndef P53_T21_COPY_CONSTRUCTOR_PHARMACY_H
#define P53_T21_COPY_CONSTRUCTOR_PHARMACY_H
#include "Array_Template.h"
#include "Medicine.h"

class Pharmacy {
    int sizeMed;
    Medicine* arrMed;
public:
    Pharmacy();
    ~Pharmacy();

    void addMedicine(Medicine obj);
    void sortMedByPrice();
    void findMedByTitle()const;
    void showInfo()const;
};


#endif //P53_T21_COPY_CONSTRUCTOR_PHARMACY_H
