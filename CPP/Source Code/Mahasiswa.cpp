#include "Mahasiswa.hpp"
#include <iostream>
#include <string>

// using standard namespace to quickly access std::
using namespace std;

// --- Constructor ---

// parameterized constructor,
// this constructor will be called if the class is instantiated with the given arguments match with the parameters
// it will set all parameters to the value that was passed to the constructor
Mahasiswa::Mahasiswa(string nama, string nim, string programStudi, string fakultas, string perguruanTinggi)
{
    this->nama = nama;
    this->nim = nim;
    this->programStudi = programStudi;
    this->fakultas = fakultas;
    this->perguruanTinggi = perguruanTinggi;
}

// --- Setters ---

// set value of nama
void Mahasiswa::setNama(string nama)
{ 
    this->nama = nama;
}

// set value of nim
void Mahasiswa::setNim(string nim)
{
    this->nim = nim;
}

// set value of programStudi
void Mahasiswa::setProgramStudi(string programStudi)
{
    this->programStudi = programStudi;
}

// set value of fakultas
void Mahasiswa::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

// set value of perguruanTinggi
void Mahasiswa::setPerguruanTinggi(string perguruanTinggi)
{
    this->perguruanTinggi = perguruanTinggi;
}

// set all attributes value, this method is like the parameterized constructor
void Mahasiswa::setAll(string nama, string nim, string programStudi, string fakultas, string perguruanTinggi)
{
    this->nama = nama;
    this->nim = nim;
    this->programStudi = programStudi;
    this->fakultas = fakultas;
    this->perguruanTinggi = perguruanTinggi;
}

// --- Getters ---

// get the value of nama
string Mahasiswa::getNama()
{
    return this->nama;
}

// get the value of nim
string Mahasiswa::getNim()
{
    return this->nim;
}

// get the value of programStudi
string Mahasiswa::getProgramStudi()
{
    return this->programStudi;
}

// get the value of fakultas
string Mahasiswa::getFakultas()
{
    return this->fakultas;
}

// get the value of perguruanTinggi
string Mahasiswa::getPerguruanTinggi()
{
    return this->perguruanTinggi;
}

// --- Reseters ---

// reset the value of nama to empty string
void Mahasiswa::resetNama()
{
    this->nama = "";
}

// reset the value of nim to empty string
void Mahasiswa::resetNim()
{
    this->nim = "";
}

// reset the value of programStudi to empty string
void Mahasiswa::resetProgramStudi()
{
    this->programStudi = "";
}

// reset the value of fakultas to empty string
void Mahasiswa::resetFakultas()
{
    this->fakultas = "";
}

// reset the value of perguruanTinggi to empty string
void Mahasiswa::resetPerguruanTinggi()
{
    this->perguruanTinggi = "";
}

// reset all values of the attributes to empty string
void Mahasiswa::resetAllExceptName()
{
    this->nim = "";
    this->programStudi = "";
    this->fakultas = "";
    this->perguruanTinggi = "";
}

// --- Utilities ---

// display all attributes to the display
void Mahasiswa::displayAttributes()
{
    cout << "Nama: " + this->nama << endl;
    cout << "NIM: " + this->nim << endl;
    cout << "Program Studi: " + this->programStudi << endl;
    cout << "Fakultas: " + this->fakultas << endl;
    cout << "Perguruan Tinggi: " + this->perguruanTinggi << endl;
}

// check if the attributes is filled or not
bool Mahasiswa::isAttributeFilled()
{
    if (nama == "" && nim == "" && programStudi == "" && fakultas == "" && perguruanTinggi == "")
    {
        return false;
    }
    else
    {
        return true;
    }
}

// destructor, actually its not used
Mahasiswa::~Mahasiswa()
{
}
