
     <!--Footer-->

        <footer class="footer">
            <div>

                <h4>Información de contacto</h4>

                <article>
                    Dirección Calle 145A # 45A-07 Bogotá
                    <br />
                    Teléfonos: (57-1) 258 4552 (57-1) 258 2629 (57) Celular: 315 8040323 - 315 3091769<br />
                    E-mail :ssmagdala@yahoo.com
                    <p>SSMGAS 2014 Copyright &copy Todos los derechos reservados</p>
                    <p>Diseñado y Desarrollado por MohanSoft &copy Todos los derechos reservados</p>
                </article>
                <aside>
                    <input type="button" id="foot-contac" value="Contactenos" onclick="$(document).ready(function () { $(location).attr('href', '?pagina=contacto'); })" />
                </aside>
            </div>

        </footer>
        <!--/Footer-->

</body>
	
 <script src="Scripts/jquery-2.1.1.min.js"></script>
    <script src="Scripts/default.js"></script>
    <script type="text/javascript" src="Scripts/jquery.cslider.js"></script>
    <!--/Scripts-->
    <script type="text/javascript">
        //Inicializo funcion del Slide
        $(function () {

            $('#da-slider').cslider({
                autoplay: true,
                bgincrement: 450
            });

        });
		</script>

    <script type="text/javascript">
        //inicializo funcion para la propiedad DropDown Menu
        $(function () {
            HorizontalMenu.init();
        });

        //Funcion pra redirecion en el boton de inicio a Home
        function inicio() {
            $('.menu-principal li:nth-child(1)').click(function () {
                $(location).attr('href', '?pagina=default');
            });
        }
        /*Funcion para redireccionar a nuestra empresa cuando dan click a los elementos p cuando dan click en 
        la barra de nuestra empresa*/
        var main = function () {
            $('.submenu-interno p').click(function () {
                $(location).attr('href', '?pagina=empresa');
            });
            $('#submenu-pruductos h4').click(function () {
                $(location).attr('href', '?pagina=productos');
            });
            $('#submenu-pruductos h4').css('cursor', 'pointer');

            $('#mezclador').click(function () {
                $(location).attr('href', '?pagina=mezcladores');
            });
        }

        $(document).ready(main);

    </script>
    <!--Funsion para el zoom de los productos-->
    <script src="Scripts/jquery.elevatezoom.js"></script>
    <script src="Scripts/productos.js"></script>
</html>