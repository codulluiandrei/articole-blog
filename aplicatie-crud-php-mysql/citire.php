<?php
    $conn = mysqli_connect('localhost', 'root', '', 'crud');
    if (!$conn) { echo "EROARE LA CONECTAREA BAZEI DE DATE"; }
    if (isset($_REQUEST['id'])) {
        $id = $_REQUEST['id'];
        $sql = "SELECT * FROM `utilizatori` WHERE id = $id";
        $query = mysqli_query($conn, $sql);
        while ($i = mysqli_fetch_assoc($query)) {
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Citire utilizator</title>
</head>
<body style="text-align: center;">
    <a href="index.php">Inapoi acasa</a>
    <p>Numele utilizatorului: <b><?php echo $i['nume'];?></b></p>
    <p>Prenumele utilizatorului: <b><?php echo $i['prenume'];?></b></p>
    <p>Email-ul utilizatorului: <b><?php echo $i['email'];?></b></p>
</body>
</html>
<?php
        }
    }
?>
