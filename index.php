<?php include "vistas/cabecera.inc"; ?>
  
<?php 

if(isset($_GET['pagina'])){
	$url = $_GET['pagina'];
}else{
	$url = "default";
}

include "vistas/".$url.".inc";
?>

<?php include "vistas/footer.inc"; ?>
