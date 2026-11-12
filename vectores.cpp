#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
string nombre;
int codigo;
};

void registrar(Estudiante estudiantes[], int n) {
for (int i = 0; i < n; i++) {
cout << "\nNombre del estudiante: ";
cin >> estudiantes[i].nombre;

cout << "Codigo del estudiante: ";
cin >> estudiantes[i].codigo;
}
}

void mostrar(Estudiante estudiantes[], int n) {
cout << "\nLista de estudiantes\n";

for (int i = 0; i < n; i++) {
cout << "\nNombre: " << estudiantes[i].nombre;
cout << "\nCodigo: " << estudiantes[i].codigo << endl;
}
}

void notas(float matriz[][3], int n) {
for (int i = 0; i < n; i++) {
cout << "\nNotas del estudiante " << i + 1 << endl;

for (int j = 0; j < 3; j++) {
cout << "Nota " << j + 1 << ": ";
cin >> matriz[i][j];
}
}
}

void promedio(float matriz[][3], int n) {
for (int i = 0; i < n; i++) {
float suma = 0;

for (int j = 0; j < 3; j++) {
suma = suma + matriz[i][j];
}

float resultado = suma / 3;

cout << "\nPromedio del estudiante "
<< i + 1 << ": " << resultado;

if (resultado >= 3.0) {
cout << "\nAprobo\n";
} else {
cout << "\nReprobo\n";
}
}
}

int main() {
int n;

cout << "Cantidad de estudiantes: ";
cin >> n;

Estudiante estudiantes[n];
float matriz[n][3];

registrar(estudiantes, n);

mostrar(estudiantes, n);

notas(matriz, n);

promedio(matriz, n);

return 0;
}
