<?php
include "Mahasiswa.php";

/* Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
latihan 1 dalam 
mata kuliah Desain Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. */

// Data dummy
$ojan = new Mahasiswa(
    "Fauzan",
    "2100137",
    "Ilmu_Komputer",
    "FPMIPA",
    "Universitas_Pendidikan_Indonesia"
);
$maul = new Mahasiswa(
    "Maulana",
    "1535481222",
    "-",
    "STEI-K",
    "Institut_Teknologi_Bandung"
);
$reyhan = new Mahasiswa(
    "Reyhan_Adonis",
    "20213623",
    "Digital_Public_Relation",
    "FPMIPA",
    "Telkom_University"
);

// Push the object onto the listMahasiswa
$listMhs = array($ojan, $maul, $reyhan);

if (isset($_POST['Submit'])) {
    echo $_POST['fnama'];
    $temp = new Mahasiswa(
        $_POST['fnama'],
        $_POST['fnim'],
        $_POST['fprogramStudi'],
        $_POST['ffakultas'],
        $_POST['fperguruanTinggi']
    );

    $listMhs[] = $temp;
}
?>

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Latihan 1 PHP</title>
</head>

<body>
    <table class="table">
        <thead>
            <tr>
                <th>No</th>
                <th>Nama</th>
                <th>NIM</th>
                <th>Program Studi</th>
                <th>Fakultas</th>
                <th>Perguruan Tinggi</th>
                <th>Action</th>
            </tr>
        </thead>
        <tbody>
            <!-- Loop the elemen on list then dipaly it in html -->
            <?php
            $index = 1;
            foreach ($listMhs as $mhs) {
            ?>
                <tr>
                    <td scope="row"><?php echo $index; ?></td>
                    <td><?php echo $mhs->getNama(); ?></td>
                    <td><?php echo $mhs->getNim(); ?></td>
                    <td><?php echo $mhs->getProgramStudi(); ?></td>
                    <td><?php echo $mhs->getFakultas(); ?></td>
                    <td><?php echo $mhs->getPerguruanTinggi(); ?></td>
                    <td>
                        <a href="#">edit</a>
                        <a href="index.php">delete</a>
                    </td>
                </tr>
            <?php
                $index++;
            }
            ?>
        </tbody>
    </table>

    <!-- form to get the data and insert it to list of Mahasiswa above -->
    <form class="formData" action="index.php" method="post">
        <label for="fnama">Nama:</label><br>
        <input type="text" name="fnama" placeholder="Yasin"><br>
        <label for="fnim">NIM:</label><br>
        <input type="text" name="fnim" placeholder="2100137"><br>
        <label for="fprogramStudi">Program Studi:</label><br>
        <input type="text" name="fprogramStudi" placeholder="Ilmu Komputer"><br>
        <label for="ffakultas">Fakultas:</label><br>
        <input type="text" name="ffakultas" placeholder="FPMIPA"><br>
        <label for="fperguruanTinggi">Perguruan Tinggi:</label><br>
        <input type="text" name="fperguruanTinggi" placeholder="UPI"><br>
        <button type="submit" name="Submit" value="Add" class="btn-submit">Add</button>
    </form>
</body>

</html>