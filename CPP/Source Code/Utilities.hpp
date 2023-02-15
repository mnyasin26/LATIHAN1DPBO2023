/* Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan
latihan 1 dalam
mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan
kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include "Mahasiswa.hpp"
#include <iostream>
#include <vector>

using namespace std;

class Utilities
{
private:
    vector<Mahasiswa> listMhs; // <-- vector of Mahasiswa instance
    int colLength[6] = {0};    // <-- used for table forming
    int index = 1;             // <-- index of row in table
    bool turnedOn = false;     // state of the object's

    void calColLen(); // calculate longest element on a column
    void printFullBorder(int source[6]);
    void printBorder(int len);
    void printAttributes(int sourceLen[6], string Str[6]);
    void printSpace(int len);

public:
    Utilities(vector<Mahasiswa> source); // feed a vector to constructor

    // CRUD methods
    void deleteMhs();
    void updateMhs();
    void addMhs();

    // another tools
    void displayMhs();
    void start();
    bool isOn();
    void stop();

    ~Utilities();
};