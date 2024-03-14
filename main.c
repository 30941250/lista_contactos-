#include <stdio.h>
#include <string.h>


typedef struct {
    char nombre[50];
    char numeroTelefono[20];
    char correoElectronico[50];
} Contacto;


void agregarContacto(Contacto *lista, int *cantidad);
void mostrarContactos(Contacto *lista, int cantidad);

int main() {
    Contacto listaContactos[100];
    int cantidadContactos = 0;

    agregarContacto(listaContactos, &cantidadContactos);
    agregarContacto(listaContactos, &cantidadContactos);

    mostrarContactos(listaContactos, cantidadContactos);

    return 0;
}


void agregarContacto(Contacto *lista, int *cantidad) {
    if (*cantidad < 100) {
        printf("Introduce el nombre del contacto: ");
        scanf("%49s", lista[*cantidad].nombre);
        printf("Introduce el n�mero de tel�fono: ");
        scanf("%19s", lista[*cantidad].numeroTelefono);
        printf("Introduce el correo electr�nico: ");
        scanf("%49s", lista[*cantidad].correoElectronico);
        (*cantidad)++;
    } else {
        printf("La lista de contactos est� llena.\n");
    }
}

void mostrarContactos(Contacto *lista, int cantidad) {
    printf("Lista de contactos:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("Contacto %d\n", i + 1);
        printf("Nombre: %s\n", lista[i].nombre);
        printf("N�mero de tel�fono: %s\n", lista[i].numeroTelefono);
        printf("Correo electr�nico: %s\n", lista[i].correoElectronico);
    }
  return 0;
}


