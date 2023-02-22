<?php
    $conn = mysqli_connect('localhost', 'root', '', 'crud');
    if (!$conn) { echo "EROARE LA CONECTAREA BAZEI DE DATE"; }
    if (isset($_POST['nume']) && isset($_POST['prenume']) && isset($_POST['email'])) {
        $nume = $_POST['nume'];
        $prenume = $_POST['prenume'];
        $email = $_POST['email'];
        $sql = "INSERT INTO `utilizatori`(`nume`, `prenume`, `email`) 
        VALUES ('$nume','$prenume','$email')";
        if(mysqli_query($conn, $sql)) {
            # echo $nume . ' ' . $prenume . ' ' . $email;
            echo "DATELE AU FOST TRIMISE CU SUCCESS";
        }
    }
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Creare utilizator</title>
</head>
<body style="text-align: center;">
    <a href="index.php">Inapoi acasa</a>
    <form method="POST">
        <input  type="text"   placeholder="Numele utilizatorului"     name="nume"><br>
        <input  type="text"   placeholder="Prenumele utilizatorului"  name="prenume"><br>
        <input  type="email"  placeholder="Email-ul utilizatorului"   name="email"><br>
        <button type="submit">Trimite datele</button>
    </form>
</body>
</html>
