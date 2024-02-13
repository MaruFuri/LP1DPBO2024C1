/*Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 1
dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

// Deklarasi class
class AnggotaDPR {
    // private atribut
    private static final int n = 69;

    // Deklarasi inner class DPR
    private static class DPR {
        String id;
        String nama;
        String bidang;
        String partai;

        // Get id
        String getID() {
            return id;
        }

        // Set id
        void setID(String id) {
            this.id = id;
        }

        // Get Nama
        String getNama() {
            return nama;
        }

        // Set Nama
        void setNama(String nama) {
            this.nama = nama;
        }

        // Get bidang
        String getBidang() {
            return bidang;
        }

        // Set bidang
        void setBidang(String bidang) {
            this.bidang = bidang;
        }

        // Get partai
        String getPartai() {
            return partai;
        }

        // Set partai
        void setPartai(String partai) {
            this.partai = partai;
        }
    }

    // Deklarasi array objek DPR dengan ukuran n
    private final DPR[] data = new DPR[n];
    private int size;

    // Constructor
    AnggotaDPR() {
        size = 0;
    }

    // Menambah data DPR
    void addDPR(String id, String nama, String bidang, String partai) {
        if (size < n) {
            DPR anggota = new DPR();
            anggota.setID(id);
            anggota.setNama(nama);
            anggota.setBidang(bidang);
            anggota.setPartai(partai);
            data[size++] = anggota;
        } else {
            System.out.println("Array penuh, tidak dapat menambah data lagi.");
        }
    }

    // Mengedit data DPR dengan patokan id
    void editDPR(String id, String nama, String bidang, String partai) {
        for (int i = 0; i < size; i++) {
            if (data[i].getID().equals(id)) {
                if (!nama.isEmpty()) {
                    data[i].setNama(nama);
                }
                if (!bidang.isEmpty()) {
                    data[i].setBidang(bidang);
                }
                if (!partai.isEmpty()) {
                    data[i].setPartai(partai);
                }
                break;
            }
        }
    }

    // Menghapus data DPR dengan patokan id
    void deleteDPR(String id) {
        for (int i = 0; i < size; i++) {
            if (data[i].getID().equals(id)) {
                System.arraycopy(data, i + 1, data, i, size - i - 1);
                size--;
                break;
            }
        }
    }

    // Menampilkan tabel data DPR
    void dataTabel() {
        int max_id = 20, max_nama = 20, max_bidang = 20, max_partai = 20;

        // Menentukan string terpanjang
        for (int i = 0; i < size; i++) {
            max_id = Math.max(max_id, data[i].getID().length());
            max_nama = Math.max(max_nama, data[i].getNama().length());
            max_bidang = Math.max(max_bidang, data[i].getBidang().length());
            max_partai = Math.max(max_partai, data[i].getPartai().length());
        }

        // Output judul tabel
        System.out.println("\nDaftar DPR:");
        System.out.println("_____________________________________________________________________________________");

        // Header kolom
        System.out.print("No | id");
        printSpaces(max_id - 2);

        System.out.print(" | Nama");
        printSpaces(max_nama - 4);

        System.out.print(" | Bidang");
        printSpaces(max_bidang - 6);

        System.out.print(" | Partai");
        printSpaces(max_partai - 6);

        System.out.println();

        // Output data
        for (int i = 0; i < size; i++) {
            System.out.printf(" %d | %s", i + 1, data[i].id);
            printSpaces(max_id - data[i].getID().length());

            System.out.printf(" | %s", data[i].nama);
            printSpaces(max_nama - data[i].getNama().length());

            System.out.printf(" | %s", data[i].bidang);
            printSpaces(max_bidang - data[i].getBidang().length());

            System.out.printf(" | %s", data[i].partai);
            printSpaces(max_partai - data[i].getPartai().length());

            System.out.println();
        }
        System.out.println("_____________________________________________________________________________________");
    }

    // Helper method untuk mencetak spasi
    private static void printSpaces(int count) {
        for (int j = 0; j < count; j++) {
            System.out.print(" ");
        }
    }
}
