<?php
    $conn = mysqli_connect('localhost', 'root', '', 'crud');
    if (!$conn) { echo "EROARE LA CONECTAREA BAZEI DE DATE"; }
    $sql = "SELECT * FROM `utilizatori`";
    $query = mysqli_query($conn, $sql);
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Aplicatie CRUD</title>
</head>
<body style="text-align: center;">
    <a href="creare.php">Creare utilizator</a><br>
    <?php while ($i = mysqli_fetch_assoc($query)) { ?>
    <p>Utilizatorul <?php echo $i['id'];?>: 
        <a href="citire.php?id=<?php echo $i['id'];?>">citire</a> /
        <a href="actualizare.php?id=<?php echo $i['id'];?>">actualizare</a> /
        <a href="stergere.php?id=<?php echo $i['id'];?>">stergere</a>
    <p><?php } ?>
</body>
</html>
