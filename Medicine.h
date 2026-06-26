//
// Created by Tetiana Perederii on 26.06.2026.
//

#ifndef P53_T21_COPY_CONSTRUCTOR_MEDICINE_H
#define P53_T21_COPY_CONSTRUCTOR_MEDICINE_H

#include <iostream>
#include <cstring>
using namespace std;


class Medicine {
    char *title;
    char *type;
    float price;

public:
    Medicine();
    Medicine(const char *title, const char *type, float price);
    Medicine(const Medicine& obj); //Copy constructor
    Medicine& operator = (const Medicine& obj); //Assignment operator (=)
    ~Medicine();

    void setTitle(const char* title);
    const char* getTitle() const;
    void setType(const char* type);
    const char* getType() const;
    void setPrice(float price);
    float getPrice() const;

    void showInfo()const;
};


#endif //P53_T21_COPY_CONSTRUCTOR_MEDICINE_H
