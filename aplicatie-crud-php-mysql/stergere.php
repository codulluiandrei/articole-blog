<?php
    $conn = mysqli_connect('localhost', 'root', '', 'crud');
    if (!$conn) { echo "EROARE LA CONECTAREA BAZEI DE DATE"; }
    if (isset($_REQUEST['id'])) {
        $id = $_REQUEST['id'];
        $sql = "DELETE FROM `utilizatori` WHERE id = $id";
        $query = mysqli_query($conn, $sql);
        echo "DATELE AU FOST STERSE CU SUCCESS";
    }
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Stergere utilizator</title>
</head>
<body>
</body>
</html>
