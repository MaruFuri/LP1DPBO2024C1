/*Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 1
dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
<?php

require_once 'DPR.php';

class Main {
    private $anggotaDPRList = [];

    // Menambahkan anggota DPR baru
    public function tambahAnggotaDPR($anggota) {
        $this->anggotaDPRList[] = $anggota;
    }

    // Mengubah data anggota DPR berdasarkan id
    public function ubahAnggotaDPR($id, $nama, $namaBidang, $namaPartai, $fotoProfil) {
        foreach ($this->anggotaDPRList as $anggota) {
            if ($anggota->getId() == $id) {
                $anggota->setNama($nama);
                $anggota->setNamaBidang($namaBidang);
                $anggota->setNamaPartai($namaPartai);
                $anggota->setFotoProfil($fotoProfil);
                break;
            }
        }
    }

    // Menghapus anggota DPR berdasarkan id
    public function hapusAnggotaDPR($id) {
        foreach ($this->anggotaDPRList as $key => $anggota) {
            if ($anggota->getId() == $id) {
                unset($this->anggotaDPRList[$key]);
                break;
            }
        }
    }

    // Menampilkan informasi daftar anggota DPR
    public function tampilkanAnggotaDPR() {
        echo "<table border='1' style='width: 50%; border-collapse: collapse;'>";
        echo "<tr><th>ID</th><th>Nama</th><th>Bidang</th><th>Partai</th><th>Foto Profil</th></tr>";
        
        foreach ($this->anggotaDPRList as $anggota) {
            echo "<tr>";
            echo "<td style='border: 1px solid black; text-align: center; padding: 25px;'>" . $anggota->getId() . "</td>";
            echo "<td style='border: 1px solid black; text-align: center; padding: 25px;'>" . $anggota->getNama() . "</td>";
            echo "<td style='border: 1px solid black; text-align: center; padding: 25px;'>" . $anggota->getNamaBidang() . "</td>";
            echo "<td style='border: 1px solid black; text-align: center; padding: 25px;'>" . $anggota->getNamaPartai() . "</td>";
            // echo "<td style='border: 1px solid black; text-align: center; padding: 25px;'>" . $anggota->getFotoProfil() . "</td>";
            echo "<td style='border: 1px solid black; text-align: center; padding: 25px;'>" . "<img src='" . $anggota->getFotoProfil() . "' style='width: 100px;'>" . "</td>";
            echo "</tr>";
        }

        echo "</table>";
    }
}

$main = new Main();

$anggota1 = new AnggotaDPR(1, "Gafarilo 1", "Bidang 1", "Partai 1", "image/image1.png");
$anggota2 = new AnggotaDPR(2, "Gafarilo 2", "Bidang 2", "Partai 2", "image/image2.png");

$main->tambahAnggotaDPR($anggota1);
$main->tambahAnggotaDPR($anggota2);

echo "Daftar Anggota DPR sebelum diubah:<br>";
$main->tampilkanAnggotaDPR();

// Mengubah data anggota dengan ID 1
$main->ubahAnggotaDPR(1, "Gafarilo 1 Baru", "Bidang 1 Baru", "Partai 1 Baru", "image/image3.png");

echo "<br>Daftar Anggota DPR setelah diubah:<br>";
$main->tampilkanAnggotaDPR();

// Menghapus anggota dengan ID 2
$main->hapusAnggotaDPR(2);

echo "<br>Daftar Anggota DPR setelah dihapus:<br>";
$main->tampilkanAnggotaDPR();

?>
