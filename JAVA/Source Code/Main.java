/* Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
latihan 1 dalam 
mata kuliah Desain Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. */
import java.util.Scanner;
import java.util.Vector;

public class Main {
    // Static scanner so it can used on main, cause main is also static
    static private Scanner sc = new Scanner(System.in);
    // Vector to store the objects of Mahasiswa
    static private Vector<Mahasiswa> listMhs = new Vector<Mahasiswa>();

    public static void main(String[] args) {
        // Holds the choosen menu
        int menuIndex = 0;

        // Data dummy
        Mahasiswa ojan = new Mahasiswa("Fauzan", "2100137", "Ilmu_Komputer", "FPMIPA",
                "Universitas_Pendidikan_Indonesia");
        Mahasiswa maul = new Mahasiswa("Maulana", "1535481222", "-", "STEI-K", "Institut_Teknologi_Bandung");
        Mahasiswa reyhan = new Mahasiswa("Reyhan_Adonis", "20213623", "Digital_Public_Relation", "FPMIPA",
                "Telkom_University");

        // Push the object onto the listMhs
        listMhs.add(ojan);
        listMhs.add(maul);
        listMhs.add(reyhan);

        // Intantiate the Utilities class
        Utilities program = new Utilities(listMhs);

        // Start the program
        program.start();

        // Main Loop - Keep the program running
        while (program.isOn() == true) {
            System.out.println("=== Menu Utama ===");
            System.out.println("Input Menu(1-5): ");
            System.out.println("1. Tambah Mahasiswa");
            System.out.println("2. Edit Mhs");
            System.out.println("3. Hapus Mhs");
            System.out.println("4. Tampilkan Daftar Mahasiswa");
            System.out.println("5. Keluar Program");
            System.out.print("Input: ");
            try {
                // scan the input
                menuIndex = sc.nextInt();
            } catch (Exception e) {
                System.out.println("that's not an integer");
            }

            switch (menuIndex) {
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

            System.out.println();
            
            // to terminate the program
            if (menuIndex == 5) {
                program.stop();
            }
        }
    }
}