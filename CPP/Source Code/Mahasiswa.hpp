// necessary libraries
#include <string>

// MAHASISWA_HPP
#ifndef MAHASISWA_HPP
#define MAHASISWA_HPP

using namespace std;

class Mahasiswa
// This class represents college student, it has several attributes that belong to the students
// This class has ability to update or deletes value of its attributes and checking if one of its attributes is empty
{
    // private attributes
private:
    string nama;
    string nim;
    string programStudi;
    string fakultas;
    string perguruanTinggi;

    // public methods
public:
    // --- Constructor ---

    // parameterized constructor,
    // this constructor will be called if the class is instantiated with the given arguments match with the parameters
    // it will set all parameters to the value that was passed to the constructor
    Mahasiswa(string nama, string nim, string programStudi, string fakultas, string perguruanTinggi);


    // --- Setter and Getter ---

    // set value of nama
    void setNama(string nama);

    // set value of nim
    void setNim(string nim);

    // set value of programStudi
    void setProgramStudi(string programStudi);

    // set value of fakultas
    void setFakultas(string fakultas);

    // set value of perguruanTinggi
    void setPerguruanTinggi(string perguruanTinggi);

    // set all attributes value, this method is like the parameterized constructor
    void setAll(string nama, string nim, string programStudi, string fakultas, string perguruanTinggi);

    // get the value of nama
    string getNama();

    // get the value of nim
    string getNim();

    // get the value of programStudi
    string getProgramStudi();

    // get the value of fakultas
    string getFakultas();

    // get the value of perguruanTinggi
    string getPerguruanTinggi();

    // reset the value of nama to empty string
    void resetNama();

    // reset the value of nim to empty string
    void resetNim();

    // reset the value of programStudi to empty string
    void resetProgramStudi();

    // reset the value of fakultas to empty string
    void resetFakultas();

    // reset the value of perguruanTinggi to empty string
    void resetPerguruanTinggi();

    // reset all values of the attributes to empty string
    void resetAllExceptName();

    // display all attributes to the dispay
    void displayAttributes();

    // check if the attributes is filled or not
    bool isAttributeFilled();

    // destructor, actually its not used
    ~Mahasiswa();
};

#endif