//
// Created by Tetiana Perederii on 26.06.2026.
//

#include "Pharmacy.h"


 Pharmacy::Pharmacy() {
  sizeMed = 0;
  arrMed = nullptr;
}

 Pharmacy::~Pharmacy() {
  if (arrMed!=nullptr) {
   delete[] arrMed;
  }
}
void Pharmacy::addMedicine(Medicine obj) {
  addItemBack(arrMed, sizeMed, obj);
}

 void Pharmacy::sortMedByPrice() {
  mySort<Medicine>(arrMed, sizeMed, [](Medicine a, Medicine b) {
   return a.getPrice() > b.getPrice();
  });
}

 void Pharmacy::findMedByTitle(const char* user) const {
  bool find = false;
  for (int i = 0; i < sizeMed; ++i) {
      if (strcmp(arrMed[i].getTitle(), user) == 0) {
           arrMed[i].showInfo();
           find = true;
      }
  }

  if (!find) cout << "Not found!\n";
}

 void Pharmacy::showInfo() const {
  cout << "Amount of medicines: " << sizeMed << endl;
  for (int i = 0; i < sizeMed; ++i) {
     arrMed[i].showInfo();

  }
}