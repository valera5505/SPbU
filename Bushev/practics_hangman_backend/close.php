<?php
header('Content-Type: text/html; charset=cp1251');
if($_POST['hash'] != "HCXt7xC47HGvVwo_68XX25Tgs789XBZ4fhsP0") exit("#������, ������ ��������");

include_once("mysql/sql_connect.php");

$gid = (int)$_POST['gid'];
mysqli_query($db, "UPDATE hangman_games SET active=9 WHERE gid='$gid'") or exit("#�� ������� ������������ � �������, ���������� �����");
exit("���� #".$gid." ���� ������� ������� ��� �����������");
?>