class Mahasiswa:
    # private attributes
    __nama = ""
    __nim = ""
    __programStudi = ""
    __fakultas = ""
    __perguruanTinggi = ""

    # Constructor with default value
    def __init__(self, nama="", nim="", programStudi="", fakultas="", perguruanTinggi=""):
        self.__nama = nama
        self.__nim = nim
        self.__programStudi = programStudi
        self.__fakultas = fakultas
        self.__perguruanTinggi = perguruanTinggi

    # --- Setters ---

    # set value of nama
    def setNama(self, nama):
        self.__nama = nama

    # set value of nim
    def setNim(self, nim):
        self.__nim = nim

    # set value of programStudi
    def setProgramStudi(self, programStudi):
        self.__programStudi = programStudi

    # set value of fakultas
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

    # set value of perguruanTinggi
    def setPerguruanTinggi(self, perguruanTinggi):
        self.__perguruanTinggi = perguruanTinggi

    # set all attributes value, this method is like the parameterized constructor
    def setAll(self, nama, nim, programStudi, fakultas, perguruanTinggi):
        self.__nama = nama
        self.__nim = nim
        self.__programStudi = programStudi
        self.__fakultas = fakultas
        self.__perguruanTinggi = perguruanTinggi

    # --- Getters ---

    # get the value of nama
    def getNama(self):
        return self.__nama

    # get the value of nim
    def getNim(self):
        return self.__nim

    # get the value of programStudi
    def getProgramStudi(self):
        return self.__programStudi

    # get the value of fakultas
    def getFakultas(self):
        return self.__fakultas

    # get the value of perguruanTinggi
    def getPerguruanTinggi(self):
        return self.__perguruanTinggi

    # --- Reset ---

    # reset the value of nama to empty string
    def resetNama(self):
        self.__nama = ""

    # reset the value of nim to empty string
    def resetNim(self):
        self.__nim = ""

    # reset the value of programStudi to empty string
    def resetProgramStudi(self):
        self.__programStudi

    # reset the value of fakultas to empty string
    def resetFakultas(self):
        self.__fakultas = ""

    # reset the value of perguruanTinggi to empty string
    def resetPerguruanTinggi(self):
        self.__pergururanTinggi = ""

    # reset all values of the attributes to empty string
    def resetAllExceptName(self):
        self.__nim = ""
        self.__programStudi = ""
        self.__fakultas = ""
        self.__perguruanTinggi = ""

    # --- Utilities ---

    # display all attributes to the dispay
    def displatAttributes(self):
        print(self.__nama)
        print(self.__nim)
        print(self.__programStudi)
        print(self.__fakultas)
        print(self.__perguruanTinggi)

    # check if the attributes is filled or not
    def isAttributeFilled(self):
        if self.__nama == "" or self.__nim == "" or self.__programStudi == "" or self.__fakultas == "" or self.__perguruanTinggi == "":
            return False
        else:
            return True
