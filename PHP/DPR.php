/*Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 1
dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
<?php

class AnggotaDPR {
    private $id;
    private $nama;
    private $namaBidang;
    private $namaPartai;
    private $fotoProfil;

    public function __construct($id, $nama, $namaBidang, $namaPartai, $fotoProfil) {
        $this->id = $id;
        $this->nama = $nama;
        $this->namaBidang = $namaBidang;
        $this->namaPartai = $namaPartai;
        $this->fotoProfil = $fotoProfil;
    }

    // Getter dan setter untuk setiap atribut
    public function getId() {
        return $this->id;
    }

    public function getNama() {
        return $this->nama;
    }

    public function getNamaBidang() {
        return $this->namaBidang;
    }

    public function getNamaPartai() {
        return $this->namaPartai;
    }

    public function getFotoProfil() {
        return $this->fotoProfil;
    }

    public function setId($id) {
        $this->id = $id;
    }

    public function setNama($nama) {
        $this->nama = $nama;
    }

    public function setNamaBidang($namaBidang) {
        $this->namaBidang = $namaBidang;
    }

    public function setNamaPartai($namaPartai) {
        $this->namaPartai = $namaPartai;
    }

    public function setFotoProfil($fotoProfil) {
        $this->fotoProfil = $fotoProfil;
    }
}

?>
