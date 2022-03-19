//
//Projeto realizado por:
//Tiago Almeida (40125)
//Diogo Pereira (40207)
//

#include "projeto.h"

int id_paises = 0;
int id_cidades = 0;
int id_clientes = 0;
int id_trajetos = 0;
int id_pois = 0;

int main_projeto(int argc, char *argv[]) {

/**********************************************************************************************************************/
    LISTA_PAIS lp = {0, 0};
    create_lista_pais(&lp, 10);
    insert_pais(&lp, id_paises, "Portugal");
    insert_pais(&lp, id_paises, "Espanha");
    //remove_pais(&lp, "Portugal");
    //print_pais(&lp);
/**********************************************************************************************************************/
    create_dynarray_cidades(&lp, "Portugal", 10);
    insert_cidades(&lp, "Portugal", id_cidades, 2, 2, "Porto");
    insert_cidades(&lp, "Portugal", id_cidades, 3, 3, "Lisboa");
    insert_cidades(&lp, "Portugal", id_cidades, 3, 4, "Guarda");
    //change_cidade_info(&lp, "Portugal", "Lisboa", "Braga", 5.0, 5.0);
    //remove_cidade(&lp, "Portugal", "Lisboa");
    //print_cidades(&lp, "Portugal");
/**********************************************************************************************************************/
    create_dynarray_pois(&lp, "Portugal", "Porto", 10);
    insert_pois(&lp, "Portugal", "Porto", "A", id_pois);
    insert_pois(&lp, "Portugal", "Porto", "B", id_pois);
    //print_pois(&lp, "Portugal", "Porto");
/**********************************************************************************************************************/
    create_dynarray_pois(&lp, "Portugal", "Lisboa", 10);
    reset_id_pois(&lp, "Portugal", "Lisboa");
    insert_pois(&lp, "Portugal", "Lisboa", "A", id_pois);
    insert_pois(&lp, "Portugal", "Lisboa", "B", id_pois);
    //print_pois(&lp, "Portugal", "Lisboa");
/**********************************************************************************************************************/
    create_dynarray_pois(&lp, "Portugal", "Guarda", 10);
    reset_id_pois(&lp, "Portugal", "Guarda");
    insert_pois(&lp, "Portugal", "Guarda", "A", id_pois);
    insert_pois(&lp, "Portugal", "Guarda", "B", id_pois);
   // print_pois(&lp, "Portugal", "Porto");
/**********************************************************************************************************************/
    create_dynarray_cidades(&lp, "Espanha", 10);
    reset_id_cidades(&lp, "Espanha");
    insert_cidades(&lp, "Espanha", id_cidades, 2, 2, "Madrid");
    insert_cidades(&lp, "Espanha", id_cidades, 3, 3, "Palma");
    //remove_cidade(&lp, "Espanha", "Madrid");
    //print_cidades(&lp, "Espanha");
/**********************************************************************************************************************/
    create_dynarray_pois(&lp, "Espanha", "Madrid", 10);
    reset_id_pois(&lp, "Espanha", "Madrid");
    insert_pois(&lp, "Espanha", "Madrid", "A", id_pois);
    insert_pois(&lp, "Espanha", "Madrid", "B", id_pois);
   // print_pois(&lp, "Espanha", "Madrid");
/**********************************************************************************************************************/
    create_dynarray_pois(&lp, "Espanha", "Palma", 10);
    reset_id_pois(&lp, "Espanha", "Palma");
    insert_pois(&lp, "Espanha", "Palma", "A", id_pois);
    insert_pois(&lp, "Espanha", "Palma", "B", id_pois);
    //print_pois(&lp, "Espanha", "Palma");

/**********************************************************************************************************************/
    create_dynarray_tajetos(&lp, "Portugal", 10);
    insert_trajetos(&lp, "Portugal", id_trajetos);
    insert_trajetos(&lp, "Portugal", id_trajetos);
    insert_trajetos(&lp, "Portugal", id_trajetos);
    //remove_trajeto(&lp, "Portugal", 1);
    print_trajetos(&lp, "Portugal");
/**********************************************************************************************************************/
    create_dynarray_tajetos(&lp, "Espanha", 10);
    insert_trajetos(&lp, "Espanha", id_trajetos);
    insert_trajetos(&lp, "Espanha", id_trajetos);
    insert_trajetos(&lp, "Espanha", id_trajetos);
    //remove_trajeto(&lp, "Espanha", 3);
    print_trajetos(&lp, "Espanha");

/**********************************************************************************************************************/

   /* LISTA_CLIENTES lc = {0, 0};
    create_lista_clientes(&lc, 10);
    insert_tail_cliente(&lc, id_clientes, 123, "Filipe Nogueira", &lp, "Portugal", 0);
    insert_tail_cliente(&lc, id_clientes, 124, "Luis Gouveia", &lp, "Portugal", 2);
    insert_tail_cliente(&lc, id_clientes, 125, "Carlos Ferreira", &lp, "Portugal", 1);
    insert_tail_cliente(&lc, id_clientes, 126, "Ze Carlos", &lp, "Portugal", 0);
    insert_tail_cliente(&lc, id_clientes, 127, "Nelo Chapeiro", &lp, "Portugal", 0);
    insert_tail_cliente(&lc, id_clientes, 128, "Ana Malhoa", &lp, "Portugal", 0);

    insert_tail_cliente(&lc, id_clientes, 129, "Ana Malhoa", &lp, "Espanha", 0);
    insert_head_cliente(&lc, id_clientes, 130, "Ana Malhoa", &lp, "Espanha", 0);*/
    //remove_cliente(&lc, 130);
    //print_clientes(&lc);

/**********************************************************************************************************************/

    char file_INFO_TXT[] = "../data/ficheirostxt/INFO_TXT.txt";
    char file_INFO_BIN[] = "../data/ficheirosbin/INFO_BIN.txt";

    char file_INFO_trajeto_TXT[] = "../data/ficheirostxt/INFO_trajeto_TXT.txt";
    char file_INFO_trajeto_BIN[] = "../data/ficheirosbin/INFO_trajeto_BIN.txt";

    char file_INFO_cliente_TXT[] = "../data/ficheirostxt/INFO_cliente_TXT.txt";
    char file_INFO_cliente_BIN[] = "../data/ficheirosbin/INFO_cliente_BIN.txt";

    //save_INFO_txt(&lp, file_INFO_TXT);
    //read_INFO_txt(&lp, file_INFO_TXT);
    //save_INFO_bin(&lp, file_INFO_BIN);
    //read_INFO_bin(&lp, file_INFO_BIN);

    //save_INFO_trajeto_txt(&lp, file_INFO_trajeto_TXT);
    //read_INFO_trajeto_txt(&lp, file_INFO_trajeto_TXT);
    //save_INFO_trajeto_bin(&lp, file_INFO_trajeto_BIN);
    //read_INFO_trajeto_bin(&lp, file_INFO_trajeto_BIN);

    //save_INFO_cliente_txt(&lc, &lp, file_INFO_cliente_TXT);
    //read_INFO_cliente_txt(&lc, &lp, file_INFO_cliente_TXT);
    //save_INFO_cliente_bin(&lc, &lp, file_INFO_cliente_BIN);
    //read_INFO_cliente_bin(&lc, &lp, file_INFO_cliente_BIN);
    return 0;
}

/*----------------------------------------------------------------------------------------------------------------*/

/*-----------------------------------------------------[PAIS]-----------------------------------------------------*/

void create_lista_pais(LISTA_PAIS *listaPais, int initsize) {
    listaPais->ppais = malloc(initsize * sizeof(PAIS));
    listaPais->n_pais = initsize;
    listaPais->currentpais = 0;
    PAIS *p = listaPais->ppais;
    for (int i = 0; i < listaPais->n_pais; i++) {
        p->name = NULL;
        p->id_pais = NULL;
        p->cidades.n_cidades = 0;
        p++;
    }
}

void insert_pais(LISTA_PAIS *listaPais, int id_pais, char name_pais[]) {

    int newsize = listaPais->n_pais + 2;
    int oldsize = listaPais->n_pais;
    id_paises++;
    PAIS *p = NULL, np = {NULL, NULL};

    if (listaPais->currentpais == listaPais->n_pais) {
        listaPais->ppais = (PAIS *) realloc(listaPais->ppais, newsize * sizeof(PAIS));
        listaPais->n_pais = newsize;
        p = listaPais->ppais;
        for (int i = oldsize; i < newsize; i++) {
            *(p + i) = np;
        }
    }

    p = listaPais->ppais + listaPais->currentpais;
    p->name = (char *) malloc(strlen(name_pais) + 1);
    strcpy(p->name, name_pais);
    p->id_pais = id_pais;
    listaPais->currentpais++;
}

PAIS *find_pais(LISTA_PAIS *listaPais, char name_pais[]) {
    PAIS *p = listaPais->ppais;

    while (p != NULL) {
        if (strcmp(name_pais, p->name) == 0) {
            return p;
        }
        p++;
    }

    return NULL;
}

void remove_pais(LISTA_PAIS *listaPais, char name_pais[]) {
    PAIS *pcur = listaPais->currentpais + listaPais->ppais;
    PAIS pais = {NULL, NULL};
    PAIS *found_pais = find_pais(listaPais, name_pais);

    if (found_pais == NULL) {
        printf("Pais nao encontrado\n");
        return;
    } else {
        while (found_pais < pcur) {
            *found_pais = *(found_pais + 1);
            found_pais++;
        }
        if (found_pais == pcur) {
            *found_pais = pais;
        }
        listaPais->currentpais--;
    }
}

void print_pais(LISTA_PAIS *listaPais) {
    PAIS *p = listaPais->ppais;

    for (int i = 0; i < listaPais->currentpais; i++) {
        printf("Id_Pais: %d, PAIS: %s\n", p->id_pais, p->name);
        p++;
    }
}

/*----------------------------------------------------------------------------------------------------------------*/

/*----------------------------------------------------[CIDADES]---------------------------------------------------*/

void create_dynarray_cidades(LISTA_PAIS *listaPais, char name_pais[], int initsize) {
    PAIS *found_pais = find_pais(listaPais, name_pais);
    found_pais->cidades.pcidades = malloc(initsize * sizeof(CIDADE));
    found_pais->cidades.n_cidades = initsize;
    found_pais->cidades.currentcidade = 0;
    CIDADE *c = found_pais->cidades.pcidades;

    for (int i = 0; i < found_pais->cidades.n_cidades; i++) {
        c->id_cidade = NULL;
        c->name = NULL;
        c->x = 0;
        c->y = 0;
        c++;
    }
}

void insert_cidades(LISTA_PAIS *listaPais, char name_pais[], int id_cidade, float x, float y, char name_cidade[]) {
    PAIS *found_pais = find_pais(listaPais, name_pais);
    int newsize = found_pais->cidades.n_cidades + 5;
    int oldsize = found_pais->cidades.n_cidades;
    id_cidades++;
    CIDADE *c = NULL, nc = {NULL, 0, 0, NULL};

    if (found_pais->cidades.currentcidade == found_pais->cidades.n_cidades) {
        found_pais->cidades.pcidades = (CIDADE *) realloc(found_pais->cidades.pcidades, newsize * sizeof(CIDADE));
        found_pais->cidades.n_cidades = newsize;
        c = found_pais->cidades.pcidades;
        for (int i = oldsize; i < newsize; i++) {
            *(c + i) = nc;
        }
    }

    c = found_pais->cidades.pcidades + found_pais->cidades.currentcidade;
    c->name = (char *) malloc(strlen(name_cidade) + 1);
    strcpy(c->name, name_cidade);
    c->id_cidade = id_cidade;
    c->x = x;
    c->y = y;
    found_pais->cidades.currentcidade++;
}

CIDADE *find_cidade(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[]) {
    PAIS *found_pais = find_pais(listaPais, name_pais);

    if (found_pais == NULL) {
        printf("Pais nao encontrado");
        return NULL;
    }

    CIDADE *c = found_pais->cidades.pcidades;

    while (c != NULL) {
        if (strcmp(name_cidade, c->name) == 0) {
            return c;
        }
        c++;
    }

    return NULL;
}

void change_cidade_info(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[], char name[], float x, float y) {
    CIDADE *cidade = find_cidade(listaPais, name_pais, name_cidade);
    cidade->name = name;
    cidade->x = x;
    cidade->y = y;

}

void remove_cidade(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[]) {
    PAIS *found_pais = find_pais(listaPais, name_pais);
    CIDADE cidade = {NULL, 0, 0, NULL}, *ccur = found_pais->cidades.currentcidade + found_pais->cidades.pcidades;
    CIDADE *found_cidade = find_cidade(listaPais, name_pais, name_cidade);

    if (found_cidade != NULL) {
        while (found_cidade < ccur) {
            *found_cidade = *(found_cidade + 1);
            found_cidade++;
        }
        if (found_cidade == ccur || found_cidade == found_pais->cidades.pcidades) {
            *found_cidade = cidade;
        }
        found_pais->cidades.currentcidade--;
    }
}

void reset_id_cidades(LISTA_PAIS *listaPais, char name_pais[]) {
    PAIS *found_pais = find_pais(listaPais, name_pais);

    if ((found_pais)->id_pais != (found_pais - 1)->id_pais) {
        id_cidades = 0;
    }
}

void print_cidades(LISTA_PAIS *listaPais, char name_pais[]) {
    PAIS *found_pais = find_pais(listaPais, name_pais);
    CIDADE *c = found_pais->cidades.pcidades;

    for (int i = 0; i < found_pais->cidades.currentcidade; i++) {
        printf("Pais: %s, Id_Cidade: %d, Cidade: %s, Latitude: %.2f, longitude: %.2f\n", found_pais->name,
               c->id_cidade,
               c->name, c->x, c->y);
        c++;
    }
}

/*----------------------------------------------------------------------------------------------------------------*/

/*-----------------------------------------------------[POI]------------------------------------------------------*/

void create_dynarray_pois(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[], int initsize) {
    CIDADE *found_cidade = find_cidade(listaPais, name_pais, name_cidade);
    found_cidade->poi.ppoi = malloc(initsize * sizeof(PoI));
    found_cidade->poi.n_pois = initsize;
    found_cidade->poi.currentpoi = 0;
    PoI *poi = found_cidade->poi.ppoi;

    for (int i = 0; i < found_cidade->poi.n_pois; i++) {
        poi->name = NULL;
        poi->id_poi = NULL;
        poi++;
    }
}

void insert_pois(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[], char name_poi[], int id_poi) {
    CIDADE *found_cidade = find_cidade(listaPais, name_pais, name_cidade);
    int newsize = found_cidade->poi.n_pois + 5;
    int oldsize = found_cidade->poi.currentpoi;
    id_pois++;
    PoI *poi = NULL, np = {NULL, NULL};

    if (found_cidade->poi.currentpoi == found_cidade->poi.n_pois) {
        found_cidade->poi.ppoi = (PoI *) realloc(found_cidade->poi.ppoi, newsize * sizeof(CIDADE));
        found_cidade->poi.n_pois = newsize;
        poi = found_cidade->poi.ppoi;
        for (int i = oldsize; i < newsize; i++) {
            *(poi + i) = np;
        }
    }

    poi = found_cidade->poi.ppoi + found_cidade->poi.currentpoi;
    poi->name = (char *) malloc(strlen(name_poi) + 1);
    strcpy(poi->name, name_poi);
    poi->id_poi = id_poi;
    found_cidade->poi.currentpoi++;
}

PoI *find_poi(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[], char name_poi[]) {
    CIDADE *found_cidade = find_cidade(listaPais, name_pais, name_cidade);

    if (found_cidade == NULL) {
        printf("Cidade nao encontrado");
        return NULL;
    }

    PoI *p = found_cidade->poi.ppoi;

    while (p != NULL) {
        if (strcmp(name_poi, p->name) == 0) {
            return p;
        }
        p++;
    }

    return NULL;
}

void change_poi_info(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[], char name_poi[], char name[]) {
    PoI *poi = find_poi(listaPais, name_pais, name_cidade, name_poi);
    poi->name = name;
}

void remove_poi(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[], char name_poi[]) {
    CIDADE *found_cidade = find_cidade(listaPais, name_pais, name_cidade);
    PoI poi = {NULL, NULL}, *pcur = found_cidade->poi.ppoi + found_cidade->poi.currentpoi;
    PoI *found_poi = find_poi(listaPais, name_pais, name_cidade, name_poi);

    if (found_poi != NULL) {
        while (found_poi < pcur) {
            *found_poi = *(found_poi + 1);
            found_poi++;
        }
        if (found_poi == pcur || found_poi == found_cidade->poi.ppoi) {
            *found_poi = poi;
        }
        found_cidade->poi.currentpoi--;
    }
}

void reset_id_pois(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[]) {
    CIDADE *found_cidade = find_cidade(listaPais, name_pais, name_cidade);

    if ((found_cidade)->id_cidade != (found_cidade - 1)->id_cidade) {
        id_pois = 0;
    }
}

void print_pois(LISTA_PAIS *listaPais, char name_pais[], char name_cidade[]) {
    CIDADE *found_cidade = find_cidade(listaPais, name_pais, name_cidade);
    PoI *p = found_cidade->poi.ppoi;

    for (int i = 0; i < found_cidade->poi.currentpoi; i++) {
        printf("Cidade: %s, Id_PoI: %d, PoI: %s\n", found_cidade->name, p->id_poi, p->name);
        p++;
    }
}

/*----------------------------------------------------------------------------------------------------------------*/

/*---------------------------------------------------[TRAJETO]----------------------------------------------------*/

void create_dynarray_tajetos(LISTA_PAIS *listaPais, char name_pais[], int initsize) {
    PAIS *found_pais = find_pais(listaPais, name_pais);
    found_pais->trajetos.ptrajeto = malloc(initsize * sizeof(TRAJETO));
    found_pais->trajetos.n_trajetos = initsize;
    found_pais->trajetos.currenttrajeto = 0;
    TRAJETO *t = found_pais->trajetos.ptrajeto;

    for (int i = 0; i < found_pais->trajetos.n_trajetos; i++) {
        t->id_trajeto = NULL;
        t->distancia = 0;
        t++;
    }
}

void insert_trajetos(LISTA_PAIS *listaPais, char name_pais[], int id_trajeto) {
    PAIS *found_pais = find_pais(listaPais, name_pais);
    int newsize = found_pais->trajetos.n_trajetos + 5;
    int oldsize = found_pais->trajetos.n_trajetos;
    id_trajetos++;
    TRAJETO *t = NULL, nt = {NULL, 0};

    if (found_pais->trajetos.currenttrajeto == found_pais->trajetos.n_trajetos) {
        found_pais->trajetos.ptrajeto = (TRAJETO *) realloc(found_pais->trajetos.ptrajeto, newsize * sizeof(TRAJETO));
        found_pais->trajetos.n_trajetos = newsize;
        t = found_pais->trajetos.ptrajeto;
        for (int i = oldsize; i < newsize; i++) {
            *(t + i) = nt;
        }
    }

    t = found_pais->trajetos.ptrajeto + found_pais->trajetos.currenttrajeto;
    t->id_trajeto = id_trajeto;
    t->distancia = create_distance_trajetos(found_pais, t);
    found_pais->trajetos.currenttrajeto++;

}

float create_distance_trajetos(PAIS *found_pais, TRAJETO *tj) {
    float dis = 0;
    time_t t;
    CIDADE *c = found_pais->cidades.pcidades;
    int size_cidades = found_pais->cidades.currentcidade;
    int array[size_cidades];
    int n, aux;
    srand((unsigned) time(&t));

    for (int i = 0; i < size_cidades; i++) {
        array[i] = c->id_cidade;
        tj->array[i] = array[i];
        c++;
    }
// nem sempre o rand gera todps os elementos do array inicial
    for (int i = 0; i < size_cidades; i++) {
        n = rand() % size_cidades;
        aux = array[i];
        array[i] = array[n];
        array[n] = aux;
    }

    tj->array[size_cidades] = array[0];

    float x, y;

    for (int i = 0; i <= size_cidades; i++) {
        CIDADE *cidade = found_pais->cidades.pcidades + array[i];
        if (i == 0) {
            x = 0;
            y = 0;
            dis += distance(cidade->x, cidade->y, x, y);
            x = cidade->x;
            y = cidade->y;
        } else {
            dis += distance(cidade->x, cidade->y, x, y);
            x = cidade->x;
            y = cidade->y;
        }
    }

    return dis;
}

float distance(float x1, float y1, float x, float y) {

    float distance = 0;
    float a;
    float b;
    a = pow((x1 - x), 2);
    b = pow((y1 - y), 2);
    distance += sqrt(a + b);
    return distance;
}

TRAJETO *find_trajeto(LISTA_PAIS *listaPais, char name_pais[], int id_trajeto) {
    PAIS *found_pais = find_pais(listaPais, name_pais);

    if (found_pais == NULL) {
        printf("Pais nao encontrado");
        return NULL;
    }

    TRAJETO *t = found_pais->trajetos.ptrajeto;

    while (t != NULL) {
        if (t->id_trajeto == id_trajeto) {
            return t;
        }
        t++;
    }

    return NULL;
}

void remove_trajeto(LISTA_PAIS *listaPais, char name_pais[], int id_trajeto) {
    PAIS *found_pais = find_pais(listaPais, name_pais);
    TRAJETO t = {NULL, 0}, *tcur = found_pais->trajetos.ptrajeto + found_pais->trajetos.currenttrajeto;
    TRAJETO *found_trajeto = find_trajeto(listaPais, name_pais, id_trajeto);

    if (found_trajeto != NULL) {
        while (found_trajeto < tcur) {
            *found_trajeto = *(found_trajeto + 1);
            found_trajeto++;
        }
        if (found_trajeto == tcur || found_trajeto == found_pais->trajetos.ptrajeto) {
            *found_trajeto = t;
        }
        found_pais->trajetos.currenttrajeto--;
    }
}

void print_trajetos(LISTA_PAIS *listaPais, char name_pais[]) {
    PAIS *found_pais = find_pais(listaPais, name_pais);
    TRAJETO *t = found_pais->trajetos.ptrajeto;
    int size = found_pais->trajetos.currenttrajeto;

    for (int i = 0; i < size; i++) {
        printf("Pais: %s, Id_Trajeto: %d, Distancia: %.2f\n", found_pais->name, t->id_trajeto, t->distancia);
        for (int x = 0; x <= found_pais->cidades.currentcidade; x++) {
            printf("%d ", t->array[x]);
        }
        printf("\n");
        t++;
    }
}

/*----------------------------------------------------------------------------------------------------------------*/

/*----------------------------------------------------[CLIENTES]---------------------------------------------------*/


void create_lista_clientes(LISTA_CLIENTES *listaClientes, int initsize) {
    listaClientes->pcliente = malloc(initsize * sizeof(CLIENTE));
    listaClientes->n_clientes = initsize;
    listaClientes->currentcliente = 0;
    CLIENTE *c = listaClientes->pcliente;

    for (int i = 0; i < listaClientes->n_clientes; i++) {
        c->name = NULL;
        c->id = NULL;
        c++;
    }
}

void insert_tail_cliente(LISTA_CLIENTES *listaClientes, int id_cliente, int nif, char name[], LISTA_PAIS *listaPais,
                         char name_pais[], int id_trajeto) {
    int newsize = listaClientes->n_clientes + 10;
    int oldsize = listaClientes->n_clientes;
    id_clientes++;
    CLIENTE *c = NULL, nc = {NULL, NULL, NULL};

    if (listaClientes->currentcliente == listaClientes->n_clientes) {
        listaClientes->pcliente = (CLIENTE *) realloc(listaClientes->pcliente, newsize * sizeof(CLIENTE));
        listaClientes->n_clientes = newsize;
        c = listaClientes->pcliente;
        for (int i = oldsize; i < newsize; i++) {
            *(c + i) = nc;
        }
    }

    TRAJETO *t = find_trajeto(listaPais, name_pais, id_trajeto);
    c = listaClientes->pcliente + listaClientes->currentcliente;
    c->name = (char *) malloc(strlen(name) + 1);
    strcpy(c->name, name);
    c->id = id_cliente;
    c->nif = nif;
    c->pais = (char *) malloc(strlen(name_pais) + 1);
    c->pais = name_pais;
    c->trajeto = t->id_trajeto;
    listaClientes->currentcliente++;
}

void insert_head_cliente(LISTA_CLIENTES *listaClientes, int id_cliente, int nif, char name[],LISTA_PAIS *listaPais,
                         char name_pais[], int id_trajeto) {
    int newsize = listaClientes->n_clientes + 10;
    int oldsize = listaClientes->n_clientes;
    id_clientes++;
    CLIENTE *c = NULL, nc = {NULL, NULL, NULL};

    if (listaClientes->currentcliente == listaClientes->n_clientes) {
        listaClientes->pcliente = (CLIENTE *) realloc(listaClientes->pcliente, newsize * sizeof(CLIENTE));
        listaClientes->n_clientes = newsize;
        c = listaClientes->pcliente;
        for (int i = oldsize; i < listaClientes->n_clientes; i++) {
            *(c + i) = nc;
        }
    }

    c = listaClientes->pcliente;

    for (int i = (listaClientes->currentcliente); i >= 0; i--) {
        CLIENTE aux_c = *(c + 1);
        *(c + i) = *(c + (i - 1));
        *(c + (i + 1)) = aux_c;
    }

    TRAJETO *t = find_trajeto(listaPais, name_pais, id_trajeto);
    c->name = (char *) malloc(strlen(name) + 1);
    strcpy(c->name, name);
    c->id = id_cliente;
    c->nif = nif;
    c->pais = (char *) malloc(strlen(name_pais) + 1);
    c->pais = name_pais;
    c->trajeto = t->id_trajeto;
    listaClientes->currentcliente++;
}

CLIENTE *find_cliente(LISTA_CLIENTES *listaClientes, int nif) {
    CLIENTE *c = listaClientes->pcliente;

    while (c != NULL) {
        if (c->nif == nif) {
            return c;
        }
        c++;
    }

    return NULL;
}

void remove_cliente(LISTA_CLIENTES *listaClientes, int nif) {
    CLIENTE cliente = {NULL, NULL, NULL}, *ccur = listaClientes->pcliente + listaClientes->currentcliente;
    CLIENTE *found_cliente = find_cliente(listaClientes, nif);

    if (found_cliente != NULL) {
        while (found_cliente < ccur) {
            *found_cliente = *(found_cliente + 1);
            found_cliente++;
        }
        if (found_cliente == ccur || found_cliente == listaClientes->pcliente) {
            *found_cliente = cliente;
        }
        listaClientes->currentcliente--;
    }
}

void print_clientes(LISTA_CLIENTES *listaClientes) {
    CLIENTE *c = listaClientes->pcliente;

    for (int i = 0; i < listaClientes->currentcliente; i++) {
        printf("ID: %d, NIF: %d, Nome: %s, Pais: %s, Trajeto: %d\n", c->id, c->nif, c->name, c->pais, c->trajeto);
        c++;
    }
}

/*----------------------------------------------------------------------------------------------------------------*/

/*---------------------------------------------------[Ficheiros]--------------------------------------------------*/

void save_INFO_txt(LISTA_PAIS *listaPais, char filename[]) {

    FILE *arquivoINFO = NULL;

    if ((arquivoINFO = fopen(filename, "w")) == NULL) {
        fprintf(stdout, "ERRO\n");
        return;
    }
    PAIS *pais = find_pais(listaPais, listaPais->ppais->name);
    fprintf(arquivoINFO, "Numero de paises: %d\n", listaPais->currentpais);
    for (int i = 0; i < listaPais->currentpais; i++) {

        fprintf(arquivoINFO, "%d | %s\n", pais->id_pais, pais->name);

        CIDADE *cidade = find_cidade(listaPais, pais->name, pais->cidades.pcidades->name);
        fprintf(arquivoINFO, "\tNumero de cidades: %d\n", pais->cidades.currentcidade);
        for (int x = 0; x < pais->cidades.currentcidade; x++) {

            fprintf(arquivoINFO, "\t\t%d | %s | %.2f | %.2f\n", cidade->id_cidade, cidade->name, cidade->x,
                    cidade->y);
            PoI *poi = find_poi(listaPais, pais->name, cidade->name, cidade->poi.ppoi->name);
            fprintf(arquivoINFO, "\t\t\tNumero de pois: %d\n", cidade->poi.currentpoi);
            for (int n = 0; n < cidade->poi.currentpoi; n++) {
                fprintf(arquivoINFO, "\t\t\t\t%d | %s\n", poi->id_poi, poi->name);
                poi++;
            }
            cidade++;
        }
        pais++;
    }

    fclose(arquivoINFO);
    printf("Sucesso!\n");
}

void read_INFO_txt(LISTA_PAIS *listaPais, char filename[]) {
    FILE *arquivoINFO;

    if ((arquivoINFO = fopen(filename, "r")) == NULL) {
        fprintf(stdout, "ERRO\n");
        return;
    }

    char aux1[100], aux2[100], aux3[100];
    float x, y;
    int n1 = 0, n2 = 0, n3 = 0, id_pais, id_cidade, id_poi;

    fscanf(arquivoINFO, "%*[^:]:%d", &n1);
    while (arquivoINFO != NULL && listaPais->currentpais < n1) {
        fscanf(arquivoINFO, "%d | %[^|]", &id_pais, aux1);
        if (id_pais > id_paises) {
            id_paises = id_pais + 1;
        }
        id_paises--;
        insert_pais(listaPais, id_pais, aux1);
        PAIS *pais = find_pais(listaPais, aux1);
        fscanf(arquivoINFO, "%*[^:]:%d", &n2);
        while (pais->cidades.currentcidade < n2) {
            fscanf(arquivoINFO, "%d | %[^|] | %f | %f", &id_cidade, aux2, x,
                   y);
            if (id_cidade > id_cidades) {
                id_cidades = id_cidade + 1;
            }
            id_cidades--;
            insert_cidades(listaPais, aux1, id_cidade, x, y, aux2);
            CIDADE *cidade = find_cidade(listaPais, aux1, aux2);
            fscanf(arquivoINFO, "%*[^:]:%d", &n3);
            while (cidade->poi.currentpoi < n3) {
                fscanf(arquivoINFO, "%d | %[^|]", &id_poi, aux3);
                if (id_poi > id_pois) {
                    id_pois = id_poi + 1;
                }
                id_pois--;
                insert_pois(listaPais, aux1, aux2, aux3, id_poi);
            }
        }
    }
    fclose(arquivoINFO);
    printf("Sucesso\n");
}

void save_INFO_bin(LISTA_PAIS *listaPais, char filename[]) {

    FILE *fileInfo = NULL;

    if ((fileInfo = fopen(filename, "wb")) == NULL) {
        printf("ERRO %s\n", filename);
        return;
    }

    PAIS *pais = find_pais(listaPais, listaPais->ppais->name);
    fwrite(&listaPais->currentpais, sizeof(int), 1, fileInfo);
    for (int i = 0; i < listaPais->currentpais; i++) {
        fwrite(&pais->id_pais, sizeof(int), 1, fileInfo);
        int size_name_pais = strlen(pais->name) + 1;
        fwrite(&size_name_pais, sizeof(int), 1, fileInfo);
        fwrite(&pais->name, sizeof(char), size_name_pais, fileInfo);
        fwrite(&pais->cidades.currentcidade, sizeof(int), 1, fileInfo);

        CIDADE *cidade = find_cidade(listaPais, pais->name, pais->cidades.pcidades->name);
        fwrite(&pais->cidades.currentcidade, sizeof(int), 1, fileInfo);
        for (int x = 0; x < pais->cidades.currentcidade; x++) {
            fwrite(&cidade->id_cidade, sizeof(int), 1, fileInfo);
            int size_name_cidade = strlen(cidade->name) + 1;
            fwrite(&size_name_cidade, sizeof(int), 1, fileInfo);
            fwrite(&cidade->name, sizeof(char), size_name_pais, fileInfo);
            fwrite(&cidade->x, sizeof(float), 1, fileInfo);
            fwrite(&cidade->y, sizeof(float), 1, fileInfo);

            PoI *poi = find_poi(listaPais, pais->name, cidade->name, cidade->poi.ppoi->name);
            fwrite(&cidade->poi.currentpoi, sizeof(int), 1, fileInfo);
            for (int n = 0; n < cidade->poi.currentpoi; n++) {
                fwrite(&poi->id_poi, sizeof(int), 1, fileInfo);
                int size_name_poi = strlen(poi->name) + 1;
                fwrite(&poi->name, sizeof(char), size_name_poi, fileInfo);
                poi++;
            }
            cidade++;
        }
        pais++;
    }

    fclose(fileInfo);
    printf("Sucesso!\n");
}

void read_INFO_bin(LISTA_PAIS *listaPais, char filename[]) {
    FILE *fileInfo = NULL;

    if ((fileInfo = fopen(filename, "rb")) == NULL) {
        printf("Erro %s\n", filename);
        return;
    }

    int nP;
    fread(&nP, sizeof(int), 1, fileInfo);
    for (int i = 0; i < nP; i++) {
        char aux1[100] = {};
        int id_pais = 0, size_name_pais = 0, n_cidade = 0;
        fread(&id_pais, sizeof(int), 1, fileInfo);
        fread(&size_name_pais, sizeof(int), 1, fileInfo);
        fread(aux1, sizeof(char), size_name_pais, fileInfo);

        insert_pais(listaPais, id_pais, aux1);
        PAIS *pais = find_pais(listaPais, aux1);
        fread(&n_cidade, sizeof(int), 1, fileInfo);
        for (int x = 0; x < pais->cidades.currentcidade; x++) {
            int id_cidade = 0, size_name_cidade = 0, n_pois = 0;
            float x, y;
            char aux2[100] = {};
            fread(&id_cidade, sizeof(int), 1, fileInfo);
            fread(&size_name_cidade, sizeof(int), 1, fileInfo);
            fread(aux2, sizeof(char), size_name_cidade, fileInfo);
            fread(&x, sizeof(float), 1, fileInfo);
            fread(&y, sizeof(float), 1, fileInfo);

            insert_cidades(listaPais, aux1, id_cidade, x, y, aux2);
            CIDADE *cidade = find_cidade(listaPais, aux1, aux2);
            fread(&n_pois, sizeof(int), 1, fileInfo);
            for (int n = 0; n < cidade->poi.currentpoi; n++) {
                int id_poi = 0, size_name_poi = 0;
                char aux3[100] = {};
                fread(&id_poi, sizeof(int), 1, fileInfo);
                fread(&size_name_poi, sizeof(int), 1, fileInfo);
                fread(aux3, sizeof(char), size_name_poi, fileInfo);

                insert_pois(listaPais, aux1, aux2, aux3, id_poi);
            }
        }
    }

    fclose(fileInfo);
    printf("Sucesso\n");
}

void save_INFO_trajeto_txt(LISTA_PAIS *listaPais, char filename[]) {

    FILE *arquivoINFO = NULL;

    if ((arquivoINFO = fopen(filename, "w")) == NULL) {
        fprintf(stdout, "ERRO\n");
        return;
    }

    PAIS *pais = find_pais(listaPais, listaPais->ppais->name);
    fprintf(arquivoINFO, "Numero de paises: %d\n", listaPais->currentpais);
    for (int i = 0; i < listaPais->currentpais; i++) {
        fprintf(arquivoINFO, "%d | %s\n", pais->id_pais, pais->name);

        TRAJETO *trajeto = pais->trajetos.ptrajeto;
        fprintf(arquivoINFO, "Numero de trajetos: %d\n", pais->trajetos.currenttrajeto);
        for (int n = 0; n < pais->trajetos.currenttrajeto; n++) {
            fprintf(arquivoINFO, "%d | %.2f\n", trajeto->id_trajeto, trajeto->distancia);


            fprintf(arquivoINFO, "\tNumero de cidades: %d\n", pais->cidades.currentcidade);
            for (int x = 0; x <= pais->cidades.currentcidade; x++) {
                CIDADE *cidade = pais->cidades.pcidades + trajeto->array[x];
                fprintf(arquivoINFO, "\t\t%d | %s | %.2f | %.2f\n", cidade->id_cidade, cidade->name, cidade->x,
                        cidade->y);
            }

            trajeto++;
        }
        pais++;
    }
    fclose(arquivoINFO);
    printf("Sucesso!\n");
}

void read_INFO_trajeto_txt(LISTA_PAIS *listaPais, char filename[]) {
    FILE *arquivoINFO;

    if ((arquivoINFO = fopen(filename, "r")) == NULL) {
        fprintf(stdout, "ERRO\n");
        return;
    }

    char aux1[100], aux2[100], aux3[100];
    float dis, x, y;
    int n1 = 0, n2 = 0, n3 = 0, id_pais, id_cidade, id_trajeto;

    fscanf(arquivoINFO, "%*[^:]:%d", &n1);
    while (arquivoINFO != NULL && listaPais->currentpais < n1) {
        fscanf(arquivoINFO, "%d | %[^|]", &id_pais, aux1);
        if (id_pais > id_paises) {
            id_paises = id_pais + 1;
        }
        id_paises--;
        insert_pais(listaPais, id_pais, aux1);
        PAIS *pais = find_pais(listaPais, aux1);
        fscanf(arquivoINFO, "%*[^:]:%d", &n2);
        while (pais->trajetos.currenttrajeto < n2) {
            fscanf(arquivoINFO, "%d | %f", &id_trajeto, dis);

            if (id_trajeto > id_trajetos) {
                id_trajeto = id_trajetos + 1;
            }
            id_trajetos--;
            insert_trajetos(listaPais, aux1, id_trajeto);
            TRAJETO *trajeto = find_trajeto(listaPais, aux1, id_trajeto);
            fscanf(arquivoINFO, "%*[^:]:%d", &n3);
            while (pais->cidades.currentcidade < n3) {
                fscanf(arquivoINFO, "%d | %[^|] | %f | %f", &id_cidade, aux3, x, y);
                if (id_cidade > id_cidades) {
                    id_cidades = id_cidade + 1;
                }
                id_cidades--;
                insert_cidades(listaPais, aux1, id_cidade, x, y, aux3);
            }
        }
    }
    fclose(arquivoINFO);
    printf("Sucesso\n");
}

void save_INFO_trajeto_bin(LISTA_PAIS *listaPais, char filename[]) {

    FILE *fileInfo = NULL;

    if ((fileInfo = fopen(filename, "wb")) == NULL) {
        printf("ERRO %s\n", filename);
        return;
    }

    PAIS *pais = find_pais(listaPais, listaPais->ppais->name);
    fwrite(&listaPais->currentpais, sizeof(int), 1, fileInfo);
    for (int i = 0; i < listaPais->currentpais; i++) {
        fwrite(&pais->id_pais, sizeof(int), 1, fileInfo);
        int size_name_pais = strlen(pais->name) + 1;
        fwrite(&size_name_pais, sizeof(int), 1, fileInfo);
        fwrite(&pais->name, sizeof(char), size_name_pais, fileInfo);
        fwrite(&pais->cidades.currentcidade, sizeof(int), 1, fileInfo);

        TRAJETO *trajeto = find_trajeto(listaPais, pais->name, pais->trajetos.ptrajeto->id_trajeto);
        fwrite(&pais->trajetos.currenttrajeto, sizeof(int), 1, fileInfo);
        for (int x = 0; x < pais->trajetos.currenttrajeto; x++) {
            fwrite(&trajeto->id_trajeto, sizeof(int), 1, fileInfo);
            fwrite(&trajeto->distancia, sizeof(float), 1, fileInfo);

            for (int n = 0; n <= pais->cidades.currentcidade; n++) {
                CIDADE *cidade = pais->cidades.pcidades + trajeto->array[x];
                fwrite(&cidade->id_cidade, sizeof(int), 1, fileInfo);
                int size_name_cidade = strlen(cidade->name) + 1;
                fwrite(&cidade->name, sizeof(char), size_name_cidade, fileInfo);
                fwrite(&cidade->x, sizeof(float), 1, fileInfo);
                fwrite(&cidade->y, sizeof(float), 1, fileInfo);
            }
            trajeto++;
        }
        pais++;
    }

    fclose(fileInfo);
    printf("Sucesso!\n");
}

void read_INFO_trajeto_bin(LISTA_PAIS *listaPais, char filename[]) {
    FILE *fileInfo = NULL;

    if ((fileInfo = fopen(filename, "rb")) == NULL) {
        printf("Erro %s\n", filename);
        return;
    }

    int nP;
    fread(&nP, sizeof(int), 1, fileInfo);
    for (int i = 0; i < nP; i++) {
        char aux1[100] = {};
        int id_pais = 0, size_name_pais = 0, n_cidade = 0;
        fread(&id_pais, sizeof(int), 1, fileInfo);
        fread(&size_name_pais, sizeof(int), 1, fileInfo);
        fread(aux1, sizeof(char), size_name_pais, fileInfo);

        insert_pais(listaPais, id_pais, aux1);
        PAIS *pais = find_pais(listaPais, aux1);
        fread(&n_cidade, sizeof(int), 1, fileInfo);
        for (int x = 0; x < pais->trajetos.currenttrajeto; x++) {
            int id_trajeto = 0, n_cidades = 0;
            float dis;
            fread(&id_trajeto, sizeof(int), 1, fileInfo);
            fread(&dis, sizeof(float), 1, fileInfo);
            insert_trajetos(listaPais, aux1, id_trajeto);
            TRAJETO *trajeto = find_trajeto(listaPais, aux1, id_trajeto);
            fread(&n_cidades, sizeof(int), 1, fileInfo);
            for (int n = 0; n < pais->cidades.currentcidade; n++) {
                int id_cidade = 0, size_name_cidade = 0;
                float x, y;
                char aux2[100] = {};
                fread(&id_cidade, sizeof(int), 1, fileInfo);
                fread(&size_name_cidade, sizeof(int), 1, fileInfo);
                fread(aux2, sizeof(char), size_name_cidade, fileInfo);
                fread(&x, sizeof(float), 1, fileInfo);
                fread(&y, sizeof(float), 1, fileInfo);

                insert_cidades(listaPais, aux1, id_cidade, x, y, aux2);
                CIDADE *cidade = find_cidade(listaPais, aux1, aux2);
            }
        }
    }

    fclose(fileInfo);
    printf("Sucesso\n");
}

void save_INFO_cliente_txt(LISTA_CLIENTES *listaClientes,LISTA_PAIS *listaPais, char filename[]) {

    FILE *arquivoINFO = NULL;

    if ((arquivoINFO = fopen(filename, "w")) == NULL) {
        fprintf(stdout, "ERRO\n");
        return;
    }

    CLIENTE *cliente = find_cliente(listaClientes, listaClientes->pcliente->nif);
    fprintf(arquivoINFO, "Numero de clientes: %d\n", listaClientes->currentcliente);
    for (int i = 0; i < listaClientes->currentcliente; i++) {
        fprintf(arquivoINFO, "%d | %s | %d | %s | %d\n", cliente->id, cliente->name, cliente->nif, cliente->pais, cliente->trajeto);
        cliente++;
    }
    fclose(arquivoINFO);
    printf("Sucesso!\n");
}

void read_INFO_cliente_txt(LISTA_CLIENTES *listaClientes,LISTA_PAIS *listaPais, char filename[]) {
    FILE *arquivoINFO;

    if ((arquivoINFO = fopen(filename, "r")) == NULL) {
        fprintf(stdout, "ERRO\n");
        return;
    }

    char aux1[100], aux2[100];

    int n1 = 0, n2 = 0, id_cliente, id_trajeto;

    fscanf(arquivoINFO, "%*[^:]:%d", &n1);
    while (arquivoINFO != NULL && listaClientes->currentcliente < n1) {
        fscanf(arquivoINFO, "%d | %[^|] | %d | %[^|] | %d", &id_cliente, aux1, n2, aux2, id_trajeto);
        if (id_cliente > id_clientes) {
            id_clientes = id_cliente + 1;
        }
        id_clientes--;
        insert_head_cliente(listaClientes, id_cliente, n2, aux1, listaPais , aux2, id_trajeto);
    }
    fclose(arquivoINFO);
    printf("Sucesso\n");
}

void save_INFO_cliente_bin(LISTA_CLIENTES *listaClientes,LISTA_PAIS *listaPais, char filename[]) {

    FILE *fileInfo = NULL;

    if ((fileInfo = fopen(filename, "wb")) == NULL) {
        printf("ERRO %s\n", filename);
        return;
    }

    CLIENTE *cliente= find_cliente(listaClientes, listaClientes->pcliente->nif);
    fwrite(&listaClientes->currentcliente, sizeof(int), 1, fileInfo);
    for (int i = 0; i < listaClientes->currentcliente; i++) {
        fwrite(&cliente->id, sizeof(int), 1, fileInfo);
        int size_name_cliente = strlen(cliente->name) + 1;
        fwrite(&size_name_cliente, sizeof(int), 1, fileInfo);
        fwrite(&cliente->name, sizeof(char), size_name_cliente, fileInfo);
        fwrite(&cliente->nif, sizeof(int), 1, fileInfo);
        int size_name_pais = strlen(cliente->pais) + 1;
        fwrite(&size_name_pais, sizeof(int), 1, fileInfo);
        fwrite(&cliente->pais, sizeof(char), size_name_pais, fileInfo);
        fwrite(&cliente->trajeto, sizeof(int), 1, fileInfo);
        cliente++;
    }

    fclose(fileInfo);
    printf("Sucesso!\n");
}

void read_INFO_cliente_bin(LISTA_CLIENTES *listaClientes,LISTA_PAIS *listaPais, char filename[]) {
    FILE *fileInfo = NULL;

    if ((fileInfo = fopen(filename, "rb")) == NULL) {
        printf("Erro %s\n", filename);
        return;
    }

    int nP;
    fread(&nP, sizeof(int), 1, fileInfo);
    for (int i = 0; i < nP; i++) {
        char aux1[100] = {}, aux2[100] = {};
        int id_cliente = 0, size_name_cliente = 0, n_clientes = 0, size_name_pais = 0, id_trajeto = 0, nif = 0;
        fread(&id_cliente, sizeof(int), 1, fileInfo);
        fread(&size_name_cliente, sizeof(int), 1, fileInfo);
        fread(aux1, sizeof(char), size_name_cliente, fileInfo);
        fread(&nif, sizeof(int), 1, fileInfo);
        fread(&size_name_pais, sizeof(int), 1, fileInfo);
        fread(aux2, sizeof(char), size_name_pais, fileInfo);
        fread(&id_trajeto, sizeof(int), 1, fileInfo);

        insert_tail_cliente(listaClientes, id_cliente, nif, aux1, listaPais, aux2, id_trajeto);
    }

    fclose(fileInfo);
    printf("Sucesso\n");
}