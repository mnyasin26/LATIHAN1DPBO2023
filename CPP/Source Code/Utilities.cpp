#include "Utilities.hpp"
#include <iostream>
#include <string>

using namespace std;

// contructor definition
Utilities::Utilities(vector<Mahasiswa> source)
{
    listMhs = source;
};

// method to turn on the object
void Utilities::start()
{
    turnedOn = true;
};

// check wether the object in on state or not
bool Utilities::isOn()
{
    return turnedOn;
};

// change the state of the object to off
void Utilities::stop()
{
    turnedOn = false;
};

// printing border like: +--------+-------+-----+
void Utilities::printFullBorder(int source[6])
{
    cout << "+";
    printBorder(source[0] + 2);
    cout << "+";
    printBorder(source[1] + 2);
    cout << "+";
    printBorder(source[2] + 2);
    cout << "+";
    printBorder(source[3] + 2);
    cout << "+";
    printBorder(source[4] + 2);
    cout << "+";
    printBorder(source[5] + 2);
    cout << "+" << endl;
}

// print only: ----------
void Utilities::printBorder(int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "-";
    }
}

// print spacing
void Utilities::printSpace(int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << " ";
    }
}

// updating method, it can edit all of the attributes of mahasiswa or in partially
void Utilities::updateMhs()
{
    string temp = "", nama = "", nim = "", programStudi = "", fakultas = "", perguruanTinggi = "";
    int updateIndex = 0;

    int index = 0;
    cout << "Nomor Mahasiswa yang ingin diedit: ";
    cin >> index;
    index--;

    // select sub menu
    cout << "Input Opsi Edit(1-5): " << endl;
    cout << "1. Ubah semua atribut" << endl;
    cout << "2. Ubah salah satu atribut" << endl;
    cout << "3. Hapus semua atribut (kecuali nama)" << endl;
    cout << "4. Hapus salah satu atribut" << endl;
    cout << "5. Keluar Program" << endl;
    cout << "Input: ";
    cin >> updateIndex;

    switch (updateIndex)
    {
    case 1:
        // change all of the attributes
        cout << "Isi Data Mahasiswa" << endl;
        cout << "nama: ";
        cin >> nama;
        cout << "nim: ";
        cin >> nim;
        cout << "program studi: ";
        cin >> programStudi;
        cout << "fakultas: ";
        cin >> fakultas;
        cout << "perguruan tinggi: ";
        cin >> perguruanTinggi;
        listMhs.at(index).setAll(nama, nim, programStudi, fakultas, perguruanTinggi);
        break;

    case 2:
        // change single of the attributes
        cout << "Pilih atribut(1-5): " << endl;
        cout << "1. Nama" << endl;
        cout << "2. Nim" << endl;
        cout << "3. program studi" << endl;
        cout << "4. fakultas" << endl;
        cout << "5. perguruan tinggi" << endl;
        cout << "Input: ";
        cin >> updateIndex;
        cout << "Nilai ubah: ";
        cin >> temp;
        switch (updateIndex)
        {
        case 1:
            // select the elemen by index then called the setter method of mahasiswa
            listMhs.at(index).setNama(temp);
            break;
        case 2:
            listMhs.at(index).setNim(temp);
            break;
        case 3:
            listMhs.at(index).setProgramStudi(temp);
            break;
        case 4:
            listMhs.at(index).setFakultas(temp);
            break;
        case 5:
            listMhs.at(index).setPerguruanTinggi(temp);
            break;

        default:
            break;
        }
        break;

    case 3:
        // reset all attributes
        listMhs.at(index).resetAllExceptName();
        break;

    case 4:
        // reset/ delete partially
        cout << "Pilih atribut(1-5): " << endl;
        cout << "1. Nama" << endl;
        cout << "2. Nim" << endl;
        cout << "3. program studi" << endl;
        cout << "4. fakultas" << endl;
        cout << "5. perguruan tinggi" << endl;
        cout << "Input: ";
        cin >> updateIndex;
        switch (updateIndex)
        {
        case 1:
            listMhs.at(index).resetNama();
            break;
        case 2:
            listMhs.at(index).resetNim();
            break;
        case 3:
            listMhs.at(index).resetProgramStudi();
            break;
        case 4:
            listMhs.at(index).resetFakultas();
            break;
        case 5:
            listMhs.at(index).resetPerguruanTinggi();
            break;

        default:
            break;
        }
        break;

    default:
        break;
    }
}

// delete method, delete the object in the vector
void Utilities::deleteMhs()
{
    int index = 0;
    cout << "Nomor Mahasiswa yang ingin dihapus: ";
    cin >> index;
    index--;

    listMhs.erase(listMhs.begin() + index);
}

// adding method
void Utilities::addMhs()
{
    string nama = "", nim = "", programStudi = "", fakultas = "", perguruanTinggi = "";
    cout << "Isi Data Mahasiswa" << endl;
    cout << "nama: ";
    cin >> nama;
    cout << "nim: ";
    cin >> nim;
    cout << "program studi: ";
    cin >> programStudi;
    cout << "fakultas: ";
    cin >> fakultas;
    cout << "perguruan tinggi: ";
    cin >> perguruanTinggi;

    Mahasiswa *temp = new Mahasiswa(nama, nim, programStudi, fakultas, perguruanTinggi);
    listMhs.push_back(*temp);
}

// display attributes (in single row of table)
void Utilities::printAttributes(int sourceLen[6], string sourceStr[6])
{
    cout << "|";
    cout << " " + sourceStr[0];
    printSpace(sourceLen[0] - sourceStr[0].size() + 1);
    cout << "|";
    cout << " " + sourceStr[1];
    printSpace(sourceLen[1] - sourceStr[1].size() + 1);
    cout << "|";
    cout << " " + sourceStr[2];
    printSpace(sourceLen[2] - sourceStr[2].size() + 1);
    cout << "|";
    cout << " " + sourceStr[3];
    printSpace(sourceLen[3] - sourceStr[3].size() + 1);
    cout << "|";
    cout << " " + sourceStr[4];
    printSpace(sourceLen[4] - sourceStr[4].size() + 1);
    cout << "|";
    cout << " " + sourceStr[5];
    printSpace(sourceLen[5] - sourceStr[5].size() + 1);
    cout << "|" << endl;
}

// diplay in table format
void Utilities::displayMhs()
{
    calColLen();

    printFullBorder(colLength);
    string temp[6] = {"No", "Nama", "NIM", "Program Studi", "Fakultas", "Perguruan Tinggi"};
    printAttributes(colLength, temp);

    if (listMhs.size() == 0)
    {
        printFullBorder(colLength);
    }

    for (auto &it : listMhs)
    {
        string temp[6] = {to_string(index), it.getNama(), it.getNim(), it.getProgramStudi(), it.getFakultas(), it.getPerguruanTinggi()};

        printFullBorder(colLength);
        printAttributes(colLength, temp);

        if (index == listMhs.size())
        {
            printFullBorder(colLength);
            this->index = 1;
        }
        else
        {
            this->index++;
        }
    }
}

// calculate longest element on a column
void Utilities::calColLen()
{
    int index = 1;
    colLength[0] = 2;  // length of "No"
    colLength[1] = 4;  // length of "Nama"
    colLength[2] = 3;  // length of "Nim"
    colLength[3] = 13; // length of "Program Studi"
    colLength[4] = 8;  // length of "Fakultas"
    colLength[5] = 16; // length of "Perguruan Tinggi"
    for (auto &it : listMhs)
    {
        // checking the longest length of every element corresponds to its column
        if (to_string(index).size() > colLength[0])
        {
            colLength[0] = to_string(index).size();
        }
        if (it.getNama().size() > colLength[1])
        {
            colLength[1] = it.getNama().size();
        }
        if (it.getNim().size() > colLength[2])
        {
            colLength[2] = it.getNim().size();
        }
        if (it.getProgramStudi().size() > colLength[3])
        {
            colLength[3] = it.getProgramStudi().size();
        }
        if (it.getFakultas().size() > colLength[4])
        {
            colLength[4] = it.getFakultas().size();
        }
        if (it.getPerguruanTinggi().size() > colLength[5])
        {
            colLength[5] = it.getPerguruanTinggi().size();
        }

        index++;
    }
};

Utilities::~Utilities()
{
}
