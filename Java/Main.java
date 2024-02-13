import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Deklarasi untuk menggunakan metode class AnggotaDPR
        AnggotaDPR DPR = new AnggotaDPR();
        Scanner scanner = new Scanner(System.in);

        while (true) {
            // Output aksi
            System.out.println("============");
            System.out.println("CRUD DPR Java");
            System.out.println("============");

            // Ouput aksi yang dapat dilakukan
            System.out.println(" > 1: Add");
            System.out.println(" > 2: Edit");
            System.out.println(" > 3: Delete");
            System.out.println(" > 4: Show");
            System.out.println(" > 5: Exit");
            System.out.print("Pilihan:");

            // Menerima input dari pengguna
            String action = scanner.nextLine();

            // Jika input merupakan "1"
            if (action.equals("1")) {
                // Akan melakukan penambahan data DPR
                System.out.print("id: ");
                String id = scanner.nextLine();

                System.out.print("Nama: ");
                String nama = scanner.nextLine();

                System.out.print("Bidang: ");
                String bidang = scanner.nextLine();

                System.out.print("Partai: ");
                String partai = scanner.nextLine();

                // Menambah data DPR
                DPR.addDPR(id, nama, bidang, partai);
            }
            // Jika input merupakan "2"
            else if (action.equals("2")) {
                System.out.print("id: ");
                String id = scanner.nextLine();

                System.out.print("Nama baru (kosongkan jika tidak ingin mengubah): ");
                String nama = scanner.nextLine();
                if (nama.isEmpty()) {
                    nama = "";
                }

                System.out.print("Bidang baru (kosongkan jika tidak ingin mengubah): ");
                String bidang = scanner.nextLine();
                if (bidang.isEmpty()) {
                    bidang = "";
                }

                System.out.print("Partai baru (kosongkan jika tidak ingin mengubah): ");
                String partai = scanner.nextLine();
                if (partai.isEmpty()) {
                    partai = "";
                }

                // Mengedit data DPR
                DPR.editDPR(id, nama, bidang, partai);
            }
            // Jika input merupakan "3"
            else if (action.equals("3")) {
                // Akan melakukan aksi delete
                System.out.print("id: ");
                String id = scanner.nextLine();

                // Menghapus data DPR
                DPR.deleteDPR(id);
            }
            // Jika input merupakan "4"
            else if (action.equals("4")) {
                // Menampilkan tabel
                DPR.dataTabel();
            }
            // Jika input merupakan "5" maka akan melakukan exit
            else if (action.equals("5")) {
                System.out.println("============");
                System.out.println(" Thank You");
                System.out.println("============");
                break;
            }
            // Jika input bukan 1-5
            else {
                System.out.println("Pilihan Tak Tersedia, Silakan Coba Lagi");
            }
        }

        scanner.close();
    }
}
