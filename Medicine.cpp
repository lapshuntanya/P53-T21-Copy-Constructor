//
// Created by Tetiana Perederii on 26.06.2026.
//

#include "Medicine.h"

Medicine::Medicine() {
    title = new char[10] {"Undefined"};
    type = new char[10] {"Undefined"};
    price = 0;
}

Medicine::Medicine(const char *title, const char *_type, float price) {
    int sizeTitle = strlen(title) + 1;
    this->title = new char[sizeTitle];
    //strcpy_s(this->title, sizeTitle, title); //VS
    strcpy(this->title, title); //CLion, Online

    int sizeType = strlen(_type) + 1;
    type = new char[sizeType];
    //strcpy_s(type, sizeType, _type); //VS
    strcpy(type, _type); //CLion, Online

    this->price = price;
}

Medicine::~Medicine() {
    delete[] title;
    delete[] type;
}

void Medicine::setTitle(const char *title) {
    if (strlen(title) > 3) {
        delete[] this->title;

        int sizeTitle = strlen(title) + 1;
        this->title = new char[sizeTitle];
        //strcpy_s(this->title, sizeTitle, title); //VS
        strcpy(this->title, title); //CLion, Online
    }else {
        cout << "Error: short title" << endl;
    }
}

const char * Medicine::getTitle() const {
    return title;
}

void Medicine::setType(const char *type) {
    if (strlen(type) > 3) {
        delete[] this->type;

        int sizeType = strlen(type) + 1;
        this->type = new char[sizeType];
        //strcpy_s(this->type, sizeType, type); //VS
        strcpy(this->type, type); //CLion, Online
    }else {
        cout << "Error: short type!" << endl;
    }
}

const char * Medicine::getType() const {
    return type;
}

void Medicine::setPrice(float price) {
    if (price > 0) this->price = price;
    else cout << "Error: invalid value!" << endl;
}

float Medicine::getPrice() const {
    return price;
}

void Medicine::showInfo() const {
    cout << "Title: " << title << endl;
    cout << "Type:  " << type << endl;
    cout << "Price: " << price << "UAH\n" << endl;
}
