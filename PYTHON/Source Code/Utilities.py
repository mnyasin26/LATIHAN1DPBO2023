from Mahasiswa import Mahasiswa


class Utilities:
    __listMhs = []  # <-- vector of Mahasiswa instance
    __colLength = []  # <-- used for table forming
    __turnedOn = False  # <-- index of row in table
    __index = 1  # <-- state of the object's

    # contructor definition
    def __init__(self, source):
        self.__listMhs = source
        for i in range(6):
            self.__colLength.append(i)

    # method to turn on the object
    def start(self):
        self.__turnedOn = True

    # check wether the object in on state or not
    def isOn(self):
        return self.__turnedOn

    # change the state of the object to off
    def stop(self):
        self.__turnedOn = False

    # adding method
    def addMhs(self):
        nama = ""
        nim = ""
        programStudi = ""
        fakultas = ""
        perguruanTinggi = ""

        print("Isis Data Mahasiswa")
        print("Nama: ")
        nama = input()
        print("NIM: ")
        nim = input()
        print("Program Studi: ")
        programStudi = input()
        print("Fakultas: ")
        fakultas = input()
        print("Perguruan Tinggi: ")
        perguruanTinggi = input()

        mhs = Mahasiswa(nama, nim, programStudi, fakultas, perguruanTinggi)
        self.__listMhs.append(mhs)

    # updating method, it can edit all of the attributes of mahasiswa or in partially
    def updateMhs(self):
        temp = ""
        nama = ""
        nim = ""
        programStudi = ""
        fakultas = ""
        perguruanTinggi = ""
        updateIndex = 0

        index = 0
        print("Nomor Mahasiswa yang ingin diedit: ")
        index = int(input())
        index = index - 1

        # select sub menu
        print("Input Opsi Edit(1-5): ")
        print("1. Ubah semua atribut")
        print("2. Ubah salah satu atribut")
        print("3. Hapus semua atribut (kecuali nama)")
        print("4. Hapus salah satu atribut")
        print("5. Keluar Program")
        print("Input: ")

        updateIndex = int(input())

        if updateIndex == 1:
            # change all of the attributes
            print("Isi Data Mahasiswa")
            print("Nama: ")
            nama = input()
            print("NIM: ")
            nim = input()
            print("Program Studi: ")
            programStudi = input()
            print("Fakultas: ")
            fakultas = input()
            print("Perguruan Tinggi: ")
            perguruanTinggi = input()
            self.__listMhs[1]

            self.__listMhs[index].setAll(
                nama, nim, programStudi, fakultas, perguruanTinggi)

        elif updateIndex == 2:
            # change single of the attributes
            print("Pilih atribut(1-5): ")
            print("1. Nama")
            print("2. Nim")
            print("3. program studi")
            print("4. fakultas")
            print("5. perguruan tinggi")
            print("Input: ")

            updateIndex = int(input())

            print("Nilai ubah:")
            temp = input()
            if updateIndex == 1:
                # select the elemen by index then called the setter method of mahasiswa
                self.__listMhs[index].setNama(temp)
            elif updateIndex == 2:
                self.__listMhs[index].setNim(temp)
            elif updateIndex == 3:
                self.__listMhs[index].setProgramStudi(temp)
            elif updateIndex == 4:
                self.__listMhs[index].setFakultas(temp)
            elif updateIndex == 5:
                self.__listMhs[index].setPerguruanTinggi(temp)
        elif updateIndex == 3:
            # reset all attributes
            self.__listMhs[index].resetAllExceptName()
        elif updateIndex == 4:
            # reset/ delete partially
            print("Pilih print")
            print("1. Nama")
            print("2. Nim")
            print("3. program studi")
            print("4. fakultas")
            print("5. perguruan tinggi")
            print("Input: ")
            updateIndex = int(input())

            if updateIndex == 1:
                self.__listMhs[index].resetNama()
            elif updateIndex == 2:
                self.__listMhs[index].resetNim()
            elif updateIndex == 3:
                self.__listMhs[index].resetProgramStudi()
            elif updateIndex == 4:
                self.__listMhs[index].resetFakultas()
            elif updateIndex == 5:
                self.__listMhs[index].resetPerguruanTinggi()

    # delete method, delete the object in the vector
    def deleteMhs(self):
        index = 1
        print("Nomor Mahasiswa yang ingin dihapus: ")
        index = int(input())
        index = index - 1

        del self.__listMhs[index]

    # print only: ----------
    def printBorder(self, len):
        for i in range(len):
            print("-", end="")

    # printing border like: +--------+-------+-----+
    def printFullBorder(self, source):
        print("+", end="")
        self.printBorder(source[0] + 2)
        print("+", end="")
        self.printBorder(source[1] + 2)
        print("+", end="")
        self.printBorder(source[2] + 2)
        print("+", end="")
        self.printBorder(source[3] + 2)
        print("+", end="")
        self.printBorder(source[4] + 2)
        print("+", end="")
        self.printBorder(source[5] + 2)
        print("+")

    # calculate longest element on a column
    def calColLen(self):
        index = 1
        self.__colLength[0] = 2  # length of "No"
        self.__colLength[1] = 4  # length of "Nama"
        self.__colLength[2] = 3  # length of "Nim"
        self.__colLength[3] = 13  # length of "Program Studi"
        self.__colLength[4] = 8  # length of "Fakultas"
        self.__colLength[5] = 16  # length of "Perguruan Tinggi"

        for n in self.__listMhs:
            # checking the longest length of every element corresponds to its column
            if (len(str(index)) > self.__colLength[0]):
                self.__colLength[0] = len(str(index))

            if (len(n.getNama()) > self.__colLength[1]):
                self.__colLength[1] = len(n.getNama())

            if (len(n.getNim()) > self.__colLength[2]):
                self.__colLength[2] = len(n.getNim())

            if (len(n.getProgramStudi()) > self.__colLength[3]):
                self.__colLength[3] = len(n.getProgramStudi())

            if (len(n.getFakultas()) > self.__colLength[4]):
                self.__colLength[4] = len(n.getFakultas())

            if (len(n.getPerguruanTinggi()) > self.__colLength[5]):
                self.__colLength[5] = len(n.getPerguruanTinggi())

            index = index + 1

    # print spacing
    def printSpace(self, len):
        for i in range(len):
            print(" ", end="")

    # display attributes (in single row of table)
    def printAttributes(self, sourceLen, sourceStr):
        print("|", end="")
        print(" " + sourceStr[0], end="")
        self.printSpace(sourceLen[0] - len(sourceStr[0]) + 1)
        print("|", end="")
        print(" " + sourceStr[1], end="")
        self.printSpace(sourceLen[1] - len(sourceStr[1]) + 1)
        print("|", end="")
        print(" " + sourceStr[2], end="")
        self.printSpace(sourceLen[2] - len(sourceStr[2]) + 1)
        print("|", end="")
        print(" " + sourceStr[3], end="")
        self.printSpace(sourceLen[3] - len(sourceStr[3]) + 1)
        print("|", end="")
        print(" " + sourceStr[4], end="")
        self.printSpace(sourceLen[4] - len(sourceStr[4]) + 1)
        print("|", end="")
        print(" " + sourceStr[5], end="")
        self.printSpace(sourceLen[5] - len(sourceStr[5]) + 1)
        print("|")

    # diplay in table format
    def displayMhs(self):
        self.calColLen()

        self.printFullBorder(self.__colLength)
        temp = ["No", "Nama", "NIM", "Program Studi",
                "Fakultas", "Perguruan Tinggi"]
        self.printAttributes(self.__colLength, temp)

        if len(self.__listMhs) == 0:
            self.printFullBorder(self.__colLength)

        for n in self.__listMhs:
            tempFor = [str(self.__index), n.getNama(), n.getNim(), n.getProgramStudi(), n.getFakultas(),
                       n.getPerguruanTinggi()]

            self.printFullBorder(self.__colLength)
            self.printAttributes(self.__colLength, tempFor)

            if self.__index == len(self.__listMhs):
                self.printFullBorder(self.__colLength)
                self.__index = 1
            else:
                self.__index = self.__index + 1
