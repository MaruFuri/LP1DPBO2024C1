# Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 1
# dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Inisialisasi objek AnggotaDPR
class AnggotaDPR:
    def __init__(self):
        self.n = 69
        self.data = []

     # Inisialisasi objek DPR
    class DPR:
        def __init__(self, id, nama, bidang, partai):
            self.id = id
            self.nama = nama
            self.bidang = bidang
            self.partai = partai
    
    # Fungsi untuk menambah anggota DPR
    def addDPR(self, id, nama, bidang, partai):
        if len(self.data) < self.n:
            anggota = self.DPR(id, nama, bidang, partai)
            self.data.append(anggota)
        else:
            print("Array penuh, tidak dapat menambah data lagi.")

    # Fungsi untuk mengedit anggota DPR
    def editDPR(self, id, nama="", bidang="", partai=""):
        for anggota in self.data:
            if anggota.id == id:
                if nama:
                    anggota.nama = nama
                if bidang:
                    anggota.bidang = bidang
                if partai:
                    anggota.partai = partai
                break
    
    # Fungsi untuk menghapus anggota DPR berdasarkan ID
    def deleteDPR(self, id):
        for anggota in self.data:
            if anggota.id == id:
                self.data.remove(anggota)
                break

    # Fungsi untuk menampilkan tabel data anggota DPR
    def dataTabel(self):
        max_id = 20
        max_nama = 20
        max_bidang = 20
        max_partai = 20

        for anggota in self.data:
            max_id = max(max_id, len(anggota.id))
            max_nama = max(max_nama, len(anggota.nama))
            max_bidang = max(max_bidang, len(anggota.bidang))
            max_partai = max(max_partai, len(anggota.partai))

        print("\nDaftar DPR:")
        print("_____________________________________________________________________________________")
        print("No | id" + " " * (max_id - 2) + " | Nama" + " " * (max_nama - 4) +
              " | Bidang" + " " * (max_bidang - 6) + " | Partai" + " " * (max_partai - 6))
        print()

        for i, anggota in enumerate(self.data, start=1):
            print(f" {i} | {anggota.id}" + " " * (max_id - len(anggota.id)) +
                  f" | {anggota.nama}" + " " * (max_nama - len(anggota.nama)) +
                  f" | {anggota.bidang}" + " " * (max_bidang - len(anggota.bidang)) +
                  f" | {anggota.partai}" + " " * (max_partai - len(anggota.partai)))
        print("_____________________________________________________________________________________")