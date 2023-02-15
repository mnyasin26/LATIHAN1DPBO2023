# import the class that required
from Mahasiswa import Mahasiswa
from Utilities import Utilities

# list to store the objects of Mahasiswa
listMhs = []

# Holds the choosen menu
menuIndex = 0

# Data dummy
ojan = Mahasiswa("Fauzan", "2100137", "Ilmu_Komputer", "FPMIPA",
                 "Universitas_Pendidikan_Indonesia")
maul = Mahasiswa("Maulana", "1535481222", "-",
                 "STEI-K", "Institut_Teknologi_Bandung")
reyhan = Mahasiswa("Reyhan_Adonis", "20213623", "Digital_Public_Relation", "FPMIPA",
                   "Telkom_University")

# Push the object onto the listMahasiswa
listMhs.append(ojan)
listMhs.append(maul)
listMhs.append(reyhan)

# for n in listMhs:
#     n.displatAttributes()

# Intantiate the Utilities class
program = Utilities(listMhs)

# Start the program
program.start()

# Main Loop - Keep the program running
while program.isOn() == True:
    print("=== Menu Utama ===")
    print("Input Menu(1-5): ")
    print("1. Tambah Mahasiswa")
    print("2. Edit Mhs")
    print("3. Hapus Mhs")
    print("4. Tampilkan Daftar Mahasiswa")
    print("5. Keluar Program")
    print("Input: ", end="")

    menuIndex = int(input())

    if menuIndex == 1:
        # Call addMhs() method to proceed adding Mahasiswa
        program.addMhs()
    elif menuIndex == 2:
        # Call updateMhs() method to begin updating Mahasiswa that will be selected
        program.updateMhs()
    elif menuIndex == 3:
        # Call deleteMhs() method to begin delete Mahasiswa that will be selected
        program.deleteMhs()
    elif menuIndex == 4:
        # display List of Mahasiswa in a table
        program.displayMhs()

    print()

    # to terminate the program
    if menuIndex == 5:
        program.stop()
