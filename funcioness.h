# ifndef FUNCIONES_H_INCLUDED
# definir  FUNCIONES_H_INCLUDED
# incluye  < stdio.h >
# incluye  < stdlib.h >
# incluye  < string.h >
# incluir  < windows.h >

# definir  MAX  20
# definir  VACIO  0
# definir  OCUPADO  1
# definir  BORRADO  2

# definir  ROJO  " \ x1b [31m "
# define  AMARILLO  " \ x1b [33m "
# definir  VERDE  " \ x1b [32m "
# define  AZUL  " \ x1b [34m "
# define  CYAN  " \ x1b [36m "
# define  MAGENTA  " \ x1b [35m "
# definir  RESET  " \ x1b [0m "

 estructura typedef
{
    char nombre [ 50 ];
    int edad;
    int dni;
    int estado;
} EPersona;

void  init (EPersona lista [ 20 ]);
void  alta (EPersona lista [ 20 ]);
void  baja (EPersona lista [ 20 ]);
void  mostrarOrdenado (EPersona lista [ 20 ]);
void  imprimirgrafico (EPersona lista [ 20 ]);
 ordenamiento vacío (EPersona lista [ 20 ]);
void  colocarAll (EPersona listaaux [ 20 ], EPersona lista [ 20 ]);
int  buscardni (EPersona lista [ 20 ]);
void  imprimirPersona (EPersona persona);
void  listasPorEdades (EPersona lista [ 20 ], EPersona lista18 [ 20 ], EPersona lista19_35 [ 20 ], EPersona lista35 [ 20 ]);
void  separarPersona (EPersona lista [ 20 ], EPersona persona);

void  init (EPersona lista [ 20 ])
{
    para ( int i = 0 ; i <MAX; i ++)
    {
        strcpy (lista [i]. nombre , " Vacio " );
        lista [i]. edad = 0 ;
        lista [i]. dni = 0 ;
        lista [i]. estado = VACIO;
    }
}

void  alta (EPersona lista [ 20 ])
{
    char aux1 [ 50 ];
    char aux2 [ 50 ];

    printf (RED " Ingrese los datos correspondientes \ n " RESET);

    para ( int i = 0 ; i <MAX; i ++)
    {
        if (lista [i]. estado == VACIO)
        {
            printf (AMARILLO " Nombre: " RESET);
            scanf ( " % s " , lista [i]. nombre );

            printf (VERDE " Edad: " RESET);
            scanf ( " % d " , & lista [i]. edad );

            printf (AZUL " DNI: " RESET);
            scanf ( " % d " , & lista [i]. dni );

            lista [i]. estado = OCUPADO;

            printf (MAGENTA " El contacto se ha agregado correctamente! \ n " RESET);
            romper ;
        }
    }
}

int  buscardni (EPersona lista [ 20 ])
{
    int posicion = - 1 ;
    int buscDNI;

    printf (AMARILLO " Ingrese el DNI: " RESET);
    scanf ( " % d " , & buscDNI);

    para ( int i = 0 ; i <MAX; i ++)
    {
        if (lista [i]. estado == OCUPADO && lista [i]. dni == buscDNI)
        {
            posicion = i;
            romper ;
        }
    }
    posición de retorno ;
}

void baja(EPersona lista[20])
{
    int posicion = buscardni(lista);

    if (posicion != -1)
    {
        strcpy(lista[posicion].nombre, "Vacio");
        lista[posicion].edad = 0;
        lista[posicion].dni = 0;
        lista[posicion].estado = VACIO;
        printf(GREEN "El contacto se dio de baja correctamente!\n" RESET);
    }
    else
    {
        printf(RED "No se encuentra el contacto\n" RESET);
    }
}

void  mostrarOrdenado (EPersona lista [ 20 ])
{
    EPersona listaaux [ 20 ];
    colocarAll (listaaux, lista);
    ordenamiento (listaaux);
    para ( int i = 0 ; i <MAX; i ++)
    {
        printf ( " % s  % d  % d " ,
            listaaux [i]. nombre ,
            listaaux [i]. edad ,
            listaaux [i]. dni );
        printf (CYAN "  % d  \ n " RESET, listaaux [i]. estado );
    }
}

void  colocarAll (EPersona listaaux [ 20 ], EPersona lista [ 20 ])
{
    para ( int i = 0 ; i <MAX; i ++)
    {
        strcpy (listaaux [i]. nombre , lista [i]. nombre );
        listaaux [i]. edad = lista [i]. edad ;
        listaaux [i]. dni = lista [i]. dni ;
        listaaux [i]. estado = lista [i]. estado ;
    }
}

 ordenamiento vacío (EPersona lista [ 20 ])
{
    para ( int i = 0 ; i <MAX; i ++)
    {
        para ( int j = 0 ; j < 19 ; j ++)
        {
            if ( stricmp (lista [j]. nombre , lista [j + 1 ]. nombre )> 0 )
            {
                char auxn [ 20 ];
                int aux;
                strcpy (auxn, lista [j]. nombre );
                strcpy (lista [j]. nombre , lista [j + 1 ]. nombre );
                strcpy (lista [j + 1 ]. nombre , auxn);
                aux = lista [j]. edad ;
                lista [j]. edad = lista [j + 1 ]. edad ;
                lista [j + 1 ]. edad = aux;
                aux = lista [j]. dni ;
                lista [j]. dni = lista [j + 1 ]. dni ;
                lista [j + 1 ]. dni = aux;
                aux = lista [j]. estado ;
                lista [j]. estado = lista [j + 1 ]. estado ;
                lista [j + 1 ]. estado = aux;
            }
        }
    }
}

void  separarPersona (EPersona lista [ 20 ], EPersona persona)
{
    para ( int i = 0 ; i <MAX; i ++)
    {
        if (lista [i]. estado == VACIO)
        {
            strcpy (lista [i]. nombre , persona. nombre );
            lista [i]. edad = persona. edad ;
            lista [i]. dni = persona. dni ;
            lista [i]. estado = persona. estado ;
            romper ;
        }
    }
}

void  imprimirPersona (EPersona persona)
{
    if ( strcmp (persona. nombre , " Vacio " ))
    {
        printf (VERDE "    *    " RESET);
    }
    demás
    {
        printf ( "  " );
    }
}

void  listasPorEdades (EPersona lista [ 20 ], EPersona lista18 [ 20 ], EPersona lista19_35 [ 20 ], EPersona lista35 [ 20 ])
{
    para ( int i = 0 ; i <MAX; i ++)
    {
        si (lista [i]. edad <= 18 )
        {
            separarPersona (lista18, lista [i]);
        }
        if (lista [i]. edad > 18 && lista [i]. edad <= 35 )
        {
            separarPersona (lista19_35, lista [i]);
        }
        si (lista [i]. edad > 35 )
        {
            separarPersona (lista35, lista [i]);
        }
    }
}

void  imprimirgrafico (EPersona lista [ 20 ])
{
    EPersona lista1 [ 20 ];
    EPersona lista2 [ 20 ];
    EPersona lista3 [ 20 ];
    init (lista1);
    init (lista2);
    init (lista3);
    listasPorEdades (lista, lista1, lista2, lista3);

    printf ( " Grafico de edades \ n \ n " );
    printf ( "   <18 19-35> 35 \ n " );

    para ( int i = 0 ; i <MAX; i ++)
    {
        imprimirPersona (lista1 [i]);
        imprimirPersona (lista2 [i]);
        imprimirPersona (lista3 [i]);
        printf ( " \ n " );
    }
}

# endif  // FUNCIONES_H_INCLUDEDS
