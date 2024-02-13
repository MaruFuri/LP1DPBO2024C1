# Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 1
# dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Mengimpor kelas AnggotaDPR dari DPR.py
from DPR import AnggotaDPR

class Main:
    # Membuat instance dari AnggotaDPR
    def main(self):
        dpr = AnggotaDPR()

        while True:
            print("============")
            print("CRUD DPR Python")
            print("============")
            print(" > 1: Add")
            print(" > 2: Edit")
            print(" > 3: Delete")
            print(" > 4: Show")
            print(" > 5: Exit")

             # Menerima input aksi dari pengguna
            action = input("Pilihan:")

             # Menambahkan anggota DPR baru
            if action == "1":
                id = input("id: ")
                nama = input("Nama: ")
                bidang = input("Bidang: ")
                partai = input("Partai: ")
                dpr.addDPR(id, nama, bidang, partai)

             # Mengedit anggota DPR 
            elif action == "2":
                id = input("id: ")
                nama = input("Nama baru (kosongkan jika tidak ingin mengubah): ")
                bidang = input("Bidang baru (kosongkan jika tidak ingin mengubah): ")
                partai = input("Partai baru (kosongkan jika tidak ingin mengubah): ")
                dpr.editDPR(id, nama, bidang, partai)
            
            # Menghapus anggota DPR
            elif action == "3":
                id = input("id: ")
                dpr.deleteDPR(id)

            # Menampilkan tabel anggota DPR
            elif action == "4":
                dpr.dataTabel()

            # Exit
            elif action == "5":
                print("============")
                print(" Thank You")
                print("============")
                break
            
            # Jika input tidak dari opsi di atas
            else:
                print("Pilihan Tak Tersedia, Silakan Coba Lagi")


if __name__ == "__main__":
    main_instance = Main()
    main_instance.main()
