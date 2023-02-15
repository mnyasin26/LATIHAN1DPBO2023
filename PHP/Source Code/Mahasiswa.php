<?php

// This class represents college student, it has several attributes that belong to the students
// This class has ability to update or deletes value of its attributes and checking if one of its attributes is empty
class Mahasiswa
{
    // private attributes
    private $nama;
    private $nim;
    private $programStudi;
    private $fakultas;
    private $perguruanTinggi;

    // public methods

    // --- Constructor ---

    // parameterized constructor,
    // this constructor will be called if the class is instantiated with the given arguments match with the parameters
    // it will set all parameters to the value that was passed to the constructor
    public function __construct($nama, $nim, $programStudi, $fakultas, $perguruanTinggi)
    {
        $this->nama = $nama;
        $this->nim = $nim;
        $this->programStudi = $programStudi;
        $this->fakultas = $fakultas;
        $this->perguruanTinggi = $perguruanTinggi;
    }

    // --- Setters ---

    // set value of nama
    public function setNama($nama)
    {
        $this->nama = $nama;
    }

    // set value of nim
    public function setNim($nim)
    {
        $this->nim = $nim;
    }

    // set value of programStudi
    public function setProgramStudi($programStudi)
    {
        $this->programStudi = $programStudi;
    }

    // set value of fakultas
    public function setFakultas($fakultas)
    {
        $this->fakultas = $fakultas;
    }

    // set value of perguruanTinggi
    public function setPerguruanTinggi($perguruanTinggi)
    {
        $this->perguruanTinggi = $perguruanTinggi;
    }

    // set all attributes value, this method is like the parameterized constructor
    public function setAll($nama, $nim, $programStudi, $fakultas, $perguruanTinggi)
    {
        $this->nama = $nama;
        $this->nim = $nim;
        $this->programStudi = $programStudi;
        $this->fakultas = $fakultas;
        $this->perguruanTinggi = $perguruanTinggi;
    }

    // --- Getters ---

    // get the value of nama
    public function getNama()
    {
        return $this->nama;
    }

    // get the value of nim
    public function getNim()
    {
        return $this->nim;
    }

    // get the value of programStudi
    public function getProgramStudi()
    {
        return $this->programStudi;
    }

    // get the value of fakultas
    public function getFakultas()
    {
        return $this->fakultas;
    }

    // get the value of perguruanTinggi
    public function getPerguruanTinggi()
    {
        return $this->perguruanTinggi;
    }

    // --- resetters ---

    // reset the value of nama to empty string
    public function resetNama()
    {
        $this->nama = "";
    }

    // reset the value of nim to empty string
    public function resetNim()
    {
        $this->nim = "";
    }

    // reset the value of programStudi to empty string
    public function resetProgramStudi()
    {
        $this->programStudi = "";
    }

    // reset the value of fakultas to empty string
    public function resetFakultas()
    {
        $this->fakultas = "";
    }

    // reset the value of perguruanTinggi to empty string
    public function resetPerguruanTinggi()
    {
        $this->perguruanTinggi = "";
    }

    // reset all values of the attributes to empty string
    public function resetAllExceptName()
    {
        $this->nama = "";
        $this->nim = "";
        $this->programStudi = "";
        $this->fakultas = "";
        $this->perguruanTinggi = "";
    }

    // display all attributes to the dispay
    public function displayAttributes()
    {
        echo "Nama: " . $this->nama . "<br>";
        echo "NIM: " . $this->nim . "<br>";
        echo "Program Studi: " . $this->programStudi . "<br>";
        echo "Perguruan Tinggi: " . $this->perguruanTinggi . "<br>";
    }

    // check if the attributes is filled or not
    public function isAttributeFilled()
    {
        if ($this->nama == "" || $this->nim == "" || $this->programStudi == "" || $this->fakultas == "" || $this->perguruanTinggi == "") {
            return false;
        } else {
            return true;
        }
    }
}
