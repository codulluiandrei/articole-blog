<?php
    $conn = mysqli_connect('localhost', 'root', '', 'crud');
    if (!$conn) { echo "EROARE LA CONECTAREA BAZEI DE DATE"; }
    if (isset($_REQUEST['nume']) && isset($_REQUEST['prenume']) && isset($_REQUEST['email'])) {
        $id = $_REQUEST['id'];
        $nume = $_REQUEST['nume'];
        $prenume = $_REQUEST['prenume'];
        $email = $_REQUEST['email'];
        $sqlactual = "UPDATE `utilizatori` SET `nume` = '$nume', `prenume` = '$prenume', `email` = '$email' WHERE id = $id";
        if (mysqli_query($conn, $sqlactual)) {
            # echo $nume . ' ' . $prenume . ' ' . $email;
            echo "DATELE AU FOST TRIMISE CU SUCCESS";
        }
    }
    if (isset($_REQUEST['id'])) {
        $id = $_REQUEST['id'];
        $sql = "SELECT * FROM `utilizatori` WHERE id = $id";
        $query = mysqli_query($conn, $sql);
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Actualizare utilizator</title>
</head>
<body style="text-align: center;">
    <a href="index.php">Inapoi acasa</a>
    <form method="PUT">
        <?php while ($i = mysqli_fetch_assoc($query)) { ?>
            <input type="number" value="<?php echo $id?>" hidden        name="id">
            <label>Numele utilizatorului</label>
            <input  type="text"   value="<?php echo $i['nume']?>"       name="nume"><br>
            <label>Prenumele utilizatorului</label>
            <input  type="text"   value="<?php echo $i['prenume']?>"    name="prenume"><br>
            <label>Email-ul utilizatorului</label>
            <input  type="email"  value="<?php echo $i['email']?>"      name="email"><br>
            <button type="submit">Trimite datele</button>
        <?php } ?>
    </form>
</body>
</html>
<?php
    }
?>
