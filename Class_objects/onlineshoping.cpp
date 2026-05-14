#include<iostream>
using namespace std;

class Product {
protected:
    int pid;
    string pname;

public:
    void getProduct() {
        cout << "Enter Product ID: ";
        cin >> pid;

        cout << "Enter Product Name: ";
        cin >> pname;
    }
};

class Electronics : public Product {
protected:
    int warranty;

public:
    void getWarranty() {
        cout << "Enter Warranty: ";
        cin >> warranty;
    }
};

class Mobile : public Electronics {
private:
    int ram, storage;
    float price;

public:
    void getMobile() {
        cout << "Enter RAM: ";
        cin >> ram;

        cout << "Enter Storage: ";
        cin >> storage;

        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "\nProduct ID: " << pid;
        cout << "\nName: " << pname;
        cout << "\nWarranty: " << warranty;
        cout << "\nRAM: " << ram;
        cout << "\nStorage: " << storage;
        cout << "\nPrice: " << price;
    }
};

int main() {
    Mobile m;

    m.getProduct();
    m.getWarranty();
    m.getMobile();
    m.display();
}