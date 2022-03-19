//
//Projeto realizado por:
//Tiago Almeida (40125)
//Diogo Pereira (40207)
//

#ifndef PROJECT_PROJETO_H
#define PROJECT_PROJETO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

typedef struct poi{
    int id_poi;
    char *name;
}PoI;

typedef struct dynarray_poi{
    int currentpoi;
    int n_pois;
    PoI *ppoi;
}DYNARRAY_POI;

typedef struct cidade {
    int id_cidade;
    float x;
    float y;
    char *name;
    DYNARRAY_POI poi;
} CIDADE;

typedef struct dynarray_cidades {
    int currentcidade;
    int n_cidades;
    CIDADE *pcidades;
} DYNARRAY_CIDADES;

typedef struct trajeto{
    int id_trajeto;
    int array[20];
    float distancia;
} TRAJETO;

typedef struct dynarray_trajetos{
    int n_trajetos;
    int currenttrajeto;
    TRAJETO *ptrajeto;
} DYNARRAY_TRAJETOS;

typedef struct pais {
    int id_pais;
    char *name;
    DYNARRAY_CIDADES cidades;
    DYNARRAY_TRAJETOS trajetos;
} PAIS;


typedef struct lista_pais {
    int n_pais;
    int currentpais;
    PAIS *ppais;
} LISTA_PAIS;

typedef struct cliente{
    int nif;
    int id;
    int trajeto;
    char *pais;
    char *name;
} CLIENTE;

typedef struct lista_clientes{
    int n_clientes;
    int currentcliente;
    CLIENTE *pcliente;
}LISTA_CLIENTES;

int main_projeto(int argc, char * argv[]);

/*----------------------------------------------------------------------------------------------------------------*/

/*-----------------------------------------------------[PAIS]-----------------------------------------------------*/

void create_lista_pais(LISTA_PAIS *listaPais, int initsize);

void insert_pais(LISTA_PAIS *listaPais, int id_pais, char name_pais[]);

PAIS *find_pais(LISTA_PAIS *listaPais, char name_pais[]);

void remove_pais(LISTA_PAIS *listaPais, char name_pais[]);

void print_pais(LISTA_PAIS * listaPais);

/*----------------------------------------------------------------------------------------------------------------*/

/*----------------------------------------------------[CIDADES]---------------------------------------------------*/

void create_dynarray_cidades(LISTA_PAIS *listaPais,char name_pais[], int initsize);

void insert_cidades(LISTA_PAIS *listaPais, char name_pais[], int id_cidade, float x, float y,char name_cidade[]);

CIDADE *find_cidade(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[]);

void remove_cidade(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[]);

void reset_id_cidades(LISTA_PAIS *listaPais, char name_pais[]);

void print_cidades(LISTA_PAIS *listaPais, char name_pais[]);

/*----------------------------------------------------------------------------------------------------------------*/

/*-----------------------------------------------------[POI]------------------------------------------------------*/

void create_dynarray_pois(LISTA_PAIS *listaPais,char name_pais[], char name_cidade[], int initsize);

void insert_pois(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[], char name_poi[], int id_poi);

PoI *find_poi(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[], char name_poi[]);

void change_poi_info(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[], char name_poi[], char name[]);

void remove_poi(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[], char name_poi[]);

void reset_id_pois(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[]);

void print_pois(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[]);

/*----------------------------------------------------------------------------------------------------------------*/

/*---------------------------------------------------[TRAJETO]----------------------------------------------------*/

void create_dynarray_tajetos(LISTA_PAIS *listaPais,char name_pais[], int initsize);

void insert_trajetos(LISTA_PAIS *listaPais, char name_pais[], int id_trajeto);

float create_distance_trajetos(PAIS *found_pais, TRAJETO *t);

float distance(float x1, float y1, float x, float y);

TRAJETO *find_trajeto(LISTA_PAIS *listaPais, char name_pais[], int id_trajeto);

void remove_trajeto(LISTA_PAIS *listaPais, char name_pais[], int id_trajeto);

void print_trajetos(LISTA_PAIS *listaPais, char name_pais[]);

/*----------------------------------------------------------------------------------------------------------------*/

/*----------------------------------------------------[CLIENTE]---------------------------------------------------*/

void create_lista_clientes(LISTA_CLIENTES *listaClientes, int initsize);

void insert_tail_cliente(LISTA_CLIENTES *listaClientes, int id_cliente, int nif, char name[],LISTA_PAIS *listaPais,
                         char name_pais[], int id_trajeto);

void insert_head_cliente(LISTA_CLIENTES *listaClientes, int id_cliente, int nif, char name[],LISTA_PAIS *listaPais,
                         char name_pais[], int id_trajeto);

CLIENTE *find_cliente(LISTA_CLIENTES *listaClientes, int nif);

void remove_cliente(LISTA_CLIENTES *listaClientes, int nif);

void print_clientes(LISTA_CLIENTES *listaClientes);

/*----------------------------------------------------------------------------------------------------------------*/

/*---------------------------------------------------[Ficheiros]--------------------------------------------------*/

void save_INFO_txt(LISTA_PAIS *listaPais, char filename[]);

void read_INFO_txt(LISTA_PAIS *listaPais, char filename[]);

void save_INFO_trajeto_txt(LISTA_PAIS *listaPais, char filename[]);

void read_INFO_trajeto_txt(LISTA_PAIS *listaPais, char filename[]);

void save_INFO_cliente_txt(LISTA_CLIENTES *listaClientes,LISTA_PAIS *listaPais, char filename[]);

void read_INFO_cliente_txt(LISTA_CLIENTES *listaClientes,LISTA_PAIS *listaPais, char filename[]);

void save_INFO_bin(LISTA_PAIS *listaPais, char filename[]);

void read_INFO_bin(LISTA_PAIS *listaPais, char filename[]);

void save_INFO_trajeto_bin(LISTA_PAIS *listaPais, char filename[]);

void read_INFO_trajeto_bin(LISTA_PAIS *listaPais, char filename[]);

void save_INFO_cliente_bin(LISTA_CLIENTES *listaClientes,LISTA_PAIS *listaPais, char filename[]);

void read_INFO_cliente_bin(LISTA_CLIENTES *listaClientes,LISTA_PAIS *listaPais, char filename[]);



#endif //PROJECT_PROJETO_H
