/*Saya Akmal Zulkifli, id 2101310, mengerjakan soal Latihan 1
dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <iostream>
#include <string>
#include "DPR.cpp"

using namespace std;

int main()
{
    // Deklarasi untuk menggunakan metode class AnggotaDPR
    AnggotaDPR DPR;

    while (true)
    {
        // Output aksi
        cout << "============" << endl;
        cout << "CRUD DPR C++" << endl;
        cout << "============" << endl;

        string action;
        // Ouput aksi yang dapat dilakukan
        cout << " > 1: Add" << endl;
        cout << " > 2: Edit" << endl;
        cout << " > 3: Delete" << endl;
        cout << " > 4: Show" << endl;
        cout << " > 5: Exit" << endl;
        cout << "Pilihan:";
        // Menerima input dari pengguna
        getline(cin, action);

        // Jika input merupakan "1"
        if (action == "1")
        {
            // Akan melakukan penambahan data DPR
            string id;
            string nama;
            string bidang;
            string partai;

            // Input id
            cout << "id: ";
            getline(cin, id);

            // Input nama
            cout << "Nama: ";
            getline(cin, nama);

            // Input bidang
            cout << "Bidang: ";
            getline(cin, bidang);

            // Input partai
            cout << "Partai: ";
            getline(cin, partai);

            // Menambah data DPR
            DPR.addDPR(id, nama, bidang, partai);
        }
        // Jika input merupakan "2"
        else if (action == "2")
        {
            string id;

            // Input id
            cout << "id: ";
            getline(cin, id);

            // Input nama
            string nama;
            cout << "Nama baru (kosongkan jika tidak ingin mengubah): ";
            getline(cin, nama);
            // Jika kosong maka tidak akan diubah
            if (nama.empty())
            {
                nama = "";
            }

            // Input bidang
            string bidang;
            cout << "Bidang baru (kosongkan jika tidak ingin mengubah): ";
            getline(cin, bidang);
            // Jika kosong maka tidak akan diubah
            if (bidang.empty())
            {
                bidang = "";
            }

            // Input partai
            string partai;
            cout << "Partai baru (kosongkan jika tidak ingin mengubah): ";
            getline(cin, partai);
            // Jika kosong maka tidak akan diubah
            if (partai.empty())
            {
                partai = "";
            }

            // Mengedit data DPR
            DPR.editDPR(id, nama, bidang, partai);
        }
        // Jika input merupakan "3"
        else if (action == "3")
        {
            // Akan melakukan aksi delete
            // Input id
            string id;
            cout << "id: ";
            getline(cin, id);

            // Menghapus data DPR
            DPR.deleteDPR(id);
        }
        // Jika input merupakan "4"
        else if (action == "4")
        {
            // Menampilkan tabel
            DPR.dataTabel();
        }
        // Jika input merupakan "5" maka akan melakukan exit
        else if (action == "5")
        {
            cout << "============" << endl;
            cout << " Thank You" << endl;
            cout << "============" << endl;
            break;
        }
        // Jika input bukan 1-5
        else
        {
            cout << "Pilihan Tak Tersedia, Silakan Coba Lagi" << endl;
        }
    }
    return 0;
}