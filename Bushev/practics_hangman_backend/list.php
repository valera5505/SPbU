<?php
header('Content-Type: text/html; charset=cp1251');
if($_POST['hash'] != "HCXt7xC47HGvVwo_68XX25Tgs789XBZ4fhsP0") exit("#������, ������ ��������");

include_once("mysql/sql_connect.php");

$data = mysqli_query($db, "SELECT gid, host FROM hangman_games WHERE active=0") or exit("#�� ������� ������������ � �������, ���������� �����");
while($fdata = mysqli_fetch_assoc($data)){
	echo "���� #".$fdata['gid'].", ������� �������������: ".$fdata['host'].PHP_EOL;
}
?>