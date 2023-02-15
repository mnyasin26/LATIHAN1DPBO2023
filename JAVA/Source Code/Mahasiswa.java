public class Mahasiswa {
    private String nama;
    private String nim;
    private String programStudi;
    private String fakultas;
    private String perguruanTinggi;

    // --- Constructor ---

    // parameterized constructor,
    // this constructor will be called if the class is instantiated with the given
    // arguments match with the parameters
    // it will set all parameters to the value that was passed to the constructor
    public Mahasiswa(String nama, String nim, String programStudi, String fakultas, String perguruanTinggi) {
        this.nama = nama;
        this.nim = nim;
        this.programStudi = programStudi;
        this.fakultas = fakultas;
        this.perguruanTinggi = perguruanTinggi;
    }

    // --- Setters ---

    // set value of nama
    public void setNama(String nama) {
        this.nama = nama;
    }

    // set value of nim
    public void setNim(String nim) {
        this.nim = nim;
    }

    // set value of programStudi
    public void setProgramStudi(String programStudi) {
        this.programStudi = programStudi;
    }

    // set value of fakultas
    public void setFakultas(String fakultas) {
        this.fakultas = fakultas;
    }

    // set value of perguruanTinggi
    public void setPerguruanTinggi(String perguruanTinggi) {
        this.perguruanTinggi = perguruanTinggi;
    }

    // set all attributes value, this method is like the parameterized constructor
    public void setAll(String nama, String nim, String programStudi, String fakultas, String perguruanTinggi) {
        this.nama = nama;
        this.nim = nim;
        this.programStudi = programStudi;
        this.fakultas = fakultas;
        this.perguruanTinggi = perguruanTinggi;
    };

    // --- Getters ---

    // get the value of nama
    public String getNama() {
        return this.nama;
    }

    // get the value of nim
    public String getNim() {
        return this.nim;
    }

    // get the value of programStudi
    public String getProgramStudi() {
        return this.programStudi;
    }

    // get the value of fakultas
    public String getFakultas() {
        return this.fakultas;
    }

    // get the value of perguruanTinggi
    public String getPerguruanTinggi() {
        return this.perguruanTinggi;
    }

    // --- Reseters ---

    // reset the value of nama to empty string
    public void resetNama() {
        this.nama = "";
    }

    // reset the value of nim to empty string
    public void resetNim() {
        this.nim = "";
    }

    // reset the value of programStudi to empty string
    public void resetProgramStudi() {
        this.programStudi = "";
    }

    // reset the value of fakultas to empty string
    public void resetFakultas() {
        this.fakultas = "";
    }

    // reset the value of perguruanTinggi to empty string
    public void resetPerguruanTinggi() {
        this.perguruanTinggi = "";
    }

    // reset all values of the attributes to empty string
    public void resetAllExceptName() {
        this.nim = "";
        this.programStudi = "";
        this.fakultas = "";
        this.perguruanTinggi = "";
    }

    // --- Utilities ---

    // display all attributes to the display
    public void displayAttributes() {
        System.out.println("Nama: " + this.nama);
        System.out.println("NIM: " + this.nim);
        System.out.println("Program Studi: " + this.programStudi);
        System.out.println("Fakultas: " + this.fakultas);
        System.out.println("Perguruan Tinggi: " + this.perguruanTinggi);
    }

    // check if the attributes is filled or not
    public boolean isAttributeFilled() {
        if (this.nama == "" || this.nim == "" || this.programStudi == "" || this.fakultas == ""
                || this.perguruanTinggi == "") {
            return false;
        } else {
            return true;
        }
    }
}
