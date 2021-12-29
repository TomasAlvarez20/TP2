# incluye  < stdio.h >
# incluye  < stdlib.h >
# incluye  < string.h >
# incluir  < windows.h >
# incluir  " funciones.h "

# definir  MAX  20
# definir  VACIO  0
# definir  ACTIVO  1
# definir  BORRADO  2

# definir  ROJO  " \ x1b [31m "
# define  AMARILLO  " \ x1b [33m "
# definir  VERDE  " \ x1b [32m "
# define  AZUL  " \ x1b [34m "
# define  CYAN  " \ x1b [36m "
# define  MAGENTA  " \ x1b [35m "
# definir  RESET  " \ x1b [0m "

int  main ()
{
    EPersona lista [ 20 ];
    EPersona listaaux [ 20 ];
    init (lista);

    char seguir = ' s ' ;
    int opcion = 0 ;

    mientras (seguir == ' s ' )
    {
        printf (CYAN " ---------------------------------------------- - \ n " RESET);
        printf (CYAN " | ---> BIENVENIDO A TU AGENDA CODIFICADA: 3 <--- | \ n " RESET);
        printf (CYAN " ---------------------------------------------- - \ n  \ n " REINICIAR);

        printf (RED " 1- Agregar persona \ n " RESET);
        printf (AMARILLO " 2- Borrar persona \ n " RESET);
        printf (VERDE " 3- Imprimir lista ordenada por nombre \ n " RESET);
        printf (AZUL " 4- Imprimir gráfico de edades \ n " RESET);
        printf (MAGENTA " 5- Salir \ n \ n " RESET);

        scanf ( " % d " , & opcion);

        interruptor (opcion)
        {
        caso  1 :
            alta (lista);
            romper ;
        caso  2 :
            baja (lista);
            romper ;
        caso  3 :
            mostrarOrdenado (lista);
            romper ;
        caso  4 :
            imprimirgrafico (lista);
            romper ;
        caso  5 :
            seguir = ' n ' ;
            romper ;
        }
    }
    return  0 ;
}
