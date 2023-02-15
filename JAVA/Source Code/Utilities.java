import java.util.Scanner;
import java.util.Vector;

public class Utilities {
    private Vector<Mahasiswa> listMhs = new Vector<Mahasiswa>();// <-- vector of Mahasiswa instance
    private int[] colLength = new int[6]; // <-- used for table forming
    private boolean turnedOn = false; // state of the object's
    private int index = 1; // <-- index of row in table
    private Scanner sc = new Scanner(System.in); // <-- scanner for input data

    // contructor definition
    public Utilities(Vector<Mahasiswa> source) {
        this.listMhs = source;
    }

    // method to turn on the object
    public void start() {
        turnedOn = true;
    }

    // check wether the object in on state or not
    public boolean isOn() {
        return turnedOn;
    }

    // change the state of the object to off
    public void stop() {
        turnedOn = false;
    }

    // adding method
    public void addMhs() {
        String nama = "", nim = "", programStudi = "", fakultas = "", perguruanTinggi = "";
        System.out.println("Isis Data Mahasiswa");
        System.out.print("Nama: ");
        nama = sc.next();
        System.out.print("NIM: ");
        nim = sc.next();
        System.out.print("Program Studi: ");
        programStudi = sc.next();
        System.out.print("Fakultas: ");
        fakultas = sc.next();
        System.out.print("Perguruan Tinggi: ");
        perguruanTinggi = sc.next();

        Mahasiswa temp = new Mahasiswa(nama, nim, programStudi, fakultas, perguruanTinggi);
        listMhs.add(temp);
    }

    // updating method, it can edit all of the attributes of mahasiswa or in
    // partially
    public void updateMhs() {
        String temp = "", nama = "", nim = "", programStudi = "", fakultas = "", perguruanTinggi = "";
        int updateIndex = 0;

        int index = 0;
        System.out.print("Nomor Mahasiswa yang ingin diedit: ");
        try {
            index = sc.nextInt();
        } catch (Exception e) {
            System.out.println("that's not an integer");
        }
        index--;

        // select sub menu
        System.out.println("Input Opsi Edit(1-5): ");
        System.out.println("1. Ubah semua atribut");
        System.out.println("2. Ubah salah satu atribut");
        System.out.println("3. Hapus semua atribut (kecuali nama)");
        System.out.println("4. Hapus salah satu atribut");
        System.out.println("5. Keluar Program");
        System.out.print("Input: ");
        try {
            updateIndex = sc.nextInt();
        } catch (Exception e) {
            System.out.println("that's not an integer");
        }

        switch (updateIndex) {
            case 1:
                // change all of the attributes
                System.out.println("Isi Data Mahasiswa");
                System.out.print("Nama: ");
                nama = sc.next();
                System.out.print("NIM: ");
                nim = sc.next();
                System.out.print("Program Studi: ");
                programStudi = sc.next();
                System.out.print("Fakultas: ");
                fakultas = sc.next();
                System.out.print("Perguruan Tinggi: ");
                perguruanTinggi = sc.next();
                listMhs.get(index).setAll(nama, nim, programStudi, fakultas, perguruanTinggi);
                break;

            case 2:
                // change single of the attributes
                System.out.println("Pilih atribut(1-5): ");
                System.out.println("1. Nama");
                System.out.println("2. Nim");
                System.out.println("3. program studi");
                System.out.println("4. fakultas");
                System.out.println("5. perguruan tinggi");
                System.out.print("Input: ");
                try {
                    updateIndex = sc.nextInt();
                } catch (Exception e) {
                    System.out.println("that's not an integer");
                }

                System.out.print("Nilai ubah: ");
                temp = sc.next();
                switch (updateIndex) {
                    case 1:
                        // select the elemen by index then called the setter method of mahasiswa
                        listMhs.get(index).setNama(temp);
                        break;
                    case 2:
                        listMhs.get(index).setNim(temp);
                        break;
                    case 3:
                        listMhs.get(index).setProgramStudi(temp);
                        break;
                    case 4:
                        listMhs.get(index).setFakultas(temp);
                        break;
                    case 5:
                        listMhs.get(index).setPerguruanTinggi(temp);
                        break;

                    default:
                        break;
                }
                break;

            case 3:
                // reset all attributes
                listMhs.get(index).resetAllExceptName();
                break;

            case 4:
                // reset/ delete partially
                System.out.println("Pilih atribut(1-5): ");
                System.out.println("1. Nama");
                System.out.println("2. Nim");
                System.out.println("3. program studi");
                System.out.println("4. fakultas");
                System.out.println("5. perguruan tinggi");
                System.out.print("Input: ");
                try {
                    updateIndex = sc.nextInt();
                } catch (Exception e) {
                    System.out.println("that's not an integer");
                }
                switch (updateIndex) {
                    case 1:
                        listMhs.get(index).resetNama();
                        break;
                    case 2:
                        listMhs.get(index).resetNim();
                        break;
                    case 3:
                        listMhs.get(index).resetProgramStudi();
                        break;
                    case 4:
                        listMhs.get(index).resetFakultas();
                        break;
                    case 5:
                        listMhs.get(index).resetPerguruanTinggi();
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
    public void deleteMhs() {
        int index = 0;
        System.out.print("Nomor Mahasiswa yang ingin dihapus: ");
        try {
            index = sc.nextInt();
        } catch (Exception e) {
            System.out.println("that's not an integer");
        }
        index--;

        listMhs.removeElementAt(index);
    }

    // diplay in table format
    public void displayMhs() {
        calColLen();

        printFullBorder(colLength);
        String[] temp = { "No", "Nama", "NIM", "Program Studi", "Fakultas", "Perguruan Tinggi" };
        printAttributes(colLength, temp);

        if (listMhs.size() == 0) {
            printFullBorder(colLength);
        }

        for (Mahasiswa n : listMhs) {
            String[] tempFor = { Integer.toString(index), n.getNama(), n.getNim(), n.getProgramStudi(), n.getFakultas(),
                    n.getPerguruanTinggi() };

            printFullBorder(colLength);
            printAttributes(colLength, tempFor);

            if (index == listMhs.size()) {
                printFullBorder(colLength);
                this.index = 1;
            } else {
                this.index++;
            }
        }
    }

    // calculate longest element on a column
    private void calColLen() {
        int index = 1;
        colLength[0] = 2; // length of "No"
        colLength[1] = 4; // length of "Nama"
        colLength[2] = 3; // length of "Nim"
        colLength[3] = 13; // length of "Program Studi"
        colLength[4] = 8; // length of "Fakultas"
        colLength[5] = 16; // length of "Perguruan Tinggi"

        for (Mahasiswa n : listMhs) {
            // checking the longest length of every element corresponds to its column
            if (Integer.toString(index).length() > colLength[0]) {
                colLength[0] = Integer.toString(index).length();
            }
            if (n.getNama().length() > colLength[1]) {
                colLength[1] = n.getNama().length();
            }
            if (n.getNim().length() > colLength[2]) {
                colLength[2] = n.getNim().length();
            }
            if (n.getProgramStudi().length() > colLength[3]) {
                colLength[3] = n.getProgramStudi().length();
            }
            if (n.getFakultas().length() > colLength[4]) {
                colLength[4] = n.getFakultas().length();
            }
            if (n.getPerguruanTinggi().length() > colLength[5]) {
                colLength[5] = n.getPerguruanTinggi().length();
            }

            index++;
        }

    }

    // printing border like: +--------+-------+-----+
    private void printFullBorder(int[] source) {
        System.out.print("+");
        printBorder(source[0] + 2);
        System.out.print("+");
        printBorder(source[1] + 2);
        System.out.print("+");
        printBorder(source[2] + 2);
        System.out.print("+");
        printBorder(source[3] + 2);
        System.out.print("+");
        printBorder(source[4] + 2);
        System.out.print("+");
        printBorder(source[5] + 2);
        System.out.println("+");
    }

    // print only: ----------
    private void printBorder(int len) {
        for (int i = 0; i < len; i++) {
            System.out.print("-");
        }
    }

    // display attributes (in single row of table)
    private void printAttributes(int[] sourceLen, String[] sourceStr) {
        System.out.print("|");
        System.out.print(" " + sourceStr[0]);
        printSpace(sourceLen[0] - sourceStr[0].length() + 1);
        System.out.print("|");
        System.out.print(" " + sourceStr[1]);
        printSpace(sourceLen[1] - sourceStr[1].length() + 1);
        System.out.print("|");
        System.out.print(" " + sourceStr[2]);
        printSpace(sourceLen[2] - sourceStr[2].length() + 1);
        System.out.print("|");
        System.out.print(" " + sourceStr[3]);
        printSpace(sourceLen[3] - sourceStr[3].length() + 1);
        System.out.print("|");
        System.out.print(" " + sourceStr[4]);
        printSpace(sourceLen[4] - sourceStr[4].length() + 1);
        System.out.print("|");
        System.out.print(" " + sourceStr[5]);
        printSpace(sourceLen[5] - sourceStr[5].length() + 1);
        System.out.println("|");
    }

    // print spacing
    private void printSpace(int len) {
        for (int i = 0; i < len; i++) {
            System.out.print(" ");
        }
    }
}
