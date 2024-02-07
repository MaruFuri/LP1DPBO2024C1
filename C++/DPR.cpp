/*Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 1
dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <iostream>
#include <string>

using namespace std;

// Ukuran array
const int n = 69;

// Deklarasi class
class AnggotaDPR
{
    // private atribut
private:
    struct DPR
    {
        string id;
        string nama;
        string bidang;
        string partai;

        // Get id
        string getID()
        {
            return id;
        }

        // Set id
        void setID(string id)
        {
            this->id = id;
        }

        // Get Nama
        string getNama()
        {
            return nama;
        }

        // Set Nama
        void setNama(string nama)
        {
            this->nama = nama;
        }

        // Get bidang
        string getBidang()
        {
            return bidang;
        }

        // Set bidang
        void setBidang(string bidang)
        {
            this->bidang = bidang;
        }

        // Get partai
        string getPartai()
        {
            return partai;
        }

        // Set partai
        void setPartai(string partai)
        {
            this->partai = partai;
        }
    };

    // Deklarasi array objek DPR dengan ukuran n
    DPR data[n];

public:
    // Banyak data
    int size;

    AnggotaDPR()
    {
        size = 0;
    }

    // Menambah data DPR
    void addDPR(string id, string nama, string bidang, string partai)
    {
        // ukuran data akan bertambah jika melakukan penambahan data
        DPR anggota = {id, nama, bidang, partai};
        data[size++] = anggota;
    }

    // Mengedit data DPR dengan patokan id
    void editDPR(string id, string nama = "", string bidang = "", string partai = "")
    {
        for (int i = 0; i < size; i++)
        {
            // Jika ada id di data sama dengan id yang di-input-kan
            if (data[i].getID() == id)
            {
                // Jika input tidak kosong maka akan diganti dengan data sesuai input
                if (!nama.empty())
                {
                    data[i].setNama(nama);
                }
                if (!bidang.empty())
                {
                    data[i].setBidang(bidang);
                }
                if (!partai.empty())
                {
                    data[i].setPartai(partai);
                }
                break;
            }
        }
    }

    // Menghapus data DPR dengan patokan id
    void deleteDPR(string id)
    {
        for (int i = 0; i < size; i++)
        {
            // Jika ada id di data sama dengan id yang di-input-kan
            if (data[i].getID() == id)
            {
                // Maka ukuran data akan dikurangi
                for (int j = i; j < size - 1; j++)
                {
                    data[j] = data[j + 1];
                }
                size--;
                break;
            }
        }
    }

    // Menampilkan tabel data DPR
    void dataTabel()
    {
        // Deklarasi maksimal panjang sebuah string
        int max_id = 20,
            max_nama = 20,
            max_bidang = 20,
            max_partai = 20;

        // Menentukan string terpanjang
        for (int i = 0; i < size; i++)
        {
            if (data[i].getID().length() > max_id)
            {
                max_id = data[i].getID().length();
            }
            if (data[i].getNama().length() > max_nama)
            {
                max_nama = data[i].getNama().length();
            }
            if (data[i].getBidang().length() > max_bidang)
            {
                max_bidang = data[i].getBidang().length();
            }
            if (data[i].getPartai().length() > max_partai)
            {
                max_partai = data[i].getPartai().length();
            }
        }

        // Output judul tabel
        cout << endl
             << "Daftar DPR:" << endl;
        cout << "_____________________________________________________________________________________" << endl;

        // Header kolom
        cout << "No | id";
        // Panjang String dikurangi dengan 2 = panjang string "id"
        for (int i = 0; i < max_id - 2; i++)
        {
            cout << " ";
        }

        cout << " | Nama";
        // Panjang String dikurangi dengan 4 = panjang string "nama"
        for (int i = 0; i < max_nama - 4; i++)
        {
            cout << " ";
        }

        cout << " | Bidang";
        // Panjang String dikurangi dengan 6 = panjang string "bidang"
        for (int i = 0; i < max_bidang - 6; i++)
        {
            cout << " ";
        }

        cout << " | Partai";
        // Panjang String dikurangi dengan 6 = panjang string "partai"
        for (int i = 0; i < max_partai - 6; i++)
        {
            cout << " ";
        }

        // New line
        cout << endl;

        // Output data
        for (int i = 0; i < size; i++)
        {
            // Output id
            cout << " " << i + 1 << " | " << data[i].id;
            // Memberi spasi
            for (int j = 0; j < max_id - data[i].getID().length(); j++)
            {
                cout << " ";
            }

            // Output nama
            cout << " | " << data[i].nama;
            // Memberi spasi
            for (int j = 0; j < max_nama - data[i].getNama().length(); j++)
            {
                cout << " ";
            }

            // Output bidang
            cout << " | " << data[i].bidang;
            // Memberi spasi
            for (int j = 0; j < max_bidang - data[i].getBidang().length(); j++)
            {
                cout << " ";
            }

            //  Output partai
            cout << " | " << data[i].partai;
            // Memberi spasi
            for (int j = 0; j < max_partai - data[i].getPartai().length(); j++)
            {
                cout << " ";
            }

            // New line
            cout << endl;
        }
        cout << "_____________________________________________________________________________________" << endl;
    }

    // Destructor
    ~AnggotaDPR()
    {
    }
};