#include <iostream>
#include <vector>
#include "Mahasiswa.hpp"
#include "Utilities.hpp"

using namespace std;

int main()
{
    // Vector to store the objects of Mahasiswa
    vector<Mahasiswa> listMahasiswa;

    // Holds the choosen menu
    int menuIndex = 0;

    // Data dummy
    Mahasiswa ojan("Fauzan", "2100137", "Ilmu_Komputer", "FPMIPA", "Universitas_Pendidikan_Indonesia");
    Mahasiswa maul("Maulana", "1535481222", "-", "STEI-K", "Institut_Teknologi_Bandung");
    Mahasiswa reyhan("Reyhan_Adonis", "20213623", "Digital_Public_Relation", "FPMIPA", "Telkom_University");

    // Push the object onto the listMahasiswa
    listMahasiswa.push_back(ojan);
    listMahasiswa.push_back(maul);
    listMahasiswa.push_back(reyhan);

    // Intantiate the Utilities class
    Utilities program(listMahasiswa);

    // Start the program
    program.start();

    // Main Loop - Keep the program running
    while (program.isOn() == true)
    {
        cout << "=== Menu Utama ===" << endl;
        cout << "Input Menu(1-5): " << endl;
        cout << "1. Tambah Mahasiswa" << endl;
        cout << "2. Edit Mhs" << endl;
        cout << "3. Hapus Mhs" << endl;
        cout << "4. Tampilkan Daftar Mahasiswa" << endl;
        cout << "5. Keluar Program" << endl;
        cout << "Input: ";
        cin >> menuIndex;

        switch (menuIndex)
        {
        case 1:
            // Call addMhs() method to proceed adding Mahasiswa
            program.addMhs();
            break;

        case 2:
            // Call updateMhs() method to begin updating Mahasiswa that will be selected
            program.updateMhs();
            break;

        case 3:
            // Call deleteMhs() method to begin delete Mahasiswa that will be selected
            program.deleteMhs();
            break;

        case 4:
            // display List of Mahasiswa in a table
            program.displayMhs();
            break;

        default:
            break;
        }

        cout << endl;

        // to terminate the program
        if (menuIndex == 5)
        {
            program.stop();
        }
    }

    return 0;
}