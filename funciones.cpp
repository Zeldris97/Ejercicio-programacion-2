#include <iostream>
using namespace std;
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include "Reportes.h"
#include "interfaz.h"
#include "rlutil.h"
using namespace rlutil;



fecha cargar_fecha() {

	fecha aux;
	cout << endl;
	cout << "    Día: ";
	cin >> aux.dia;
	while (aux.dia < 1 || aux.dia > 31) {
		cout << "    >Día: ";
		cin >> aux.dia;
	}
	cout << "    Mes: ";
	cin >> aux.mes;
	while (aux.mes < 1 || aux.mes > 12) {
		cout << "    >Mes: ";
		cin >> aux.mes;
	}
	cout << "    Año: ";
	cin >> aux.anio;
	while (aux.anio >2020) {
		cout << "    >Año: ";
		cin >> aux.anio;
	}
	return aux;
}

peluqueria carga_coloracion(){
int codigo;

peluqueria a, *aux;

aux=&a;

cout<<"Ingrese codigo de tintura: ";
cin>>codigo;

while(codigo<100 && codigo>135){
    cout<<"Ingrese una opcion valida: "<<endl;
    cin>>codigo;
}

aux->codigo_de_tintura[codigo-100]++;

cargar_fecha();

cout<<"Ingrese el genero: "<<endl;
cin>> aux->genero;

while (aux->genero!='h' && aux->genero!='H' && aux->genero!='m' && aux->genero!='M' ){

    cout<<"Ingrese H o M: ";
    cin>>aux->genero;

};

cout<<"Ingrese el tipo de pelo: "<<endl;
cin.ignore();
cin.getline(aux->tipo_de_pelo, 20);

while (aux->tipo_de_pelo[0] == '\0'|| aux->tipo_de_pelo[0] == ' ') {
		cout << "Ingrese un tipo de pelo: ";
		cin.getline(aux->tipo_de_pelo, 20);
	}


return a;

}
bool guardar_coloracion(peluqueria reg) {
	bool carga;


	FILE* f;
	f = fopen("color.dat", "ab");
	if (f == NULL) {
		return false;
	}
	carga = fwrite(&reg, sizeof(peluqueria), 1, f);


	fclose(f);
	return carga;
}



void mostrar_coloracion(peluqueria reg) {
	cout << "    Codigo de tintura : " << reg.codigo_de_tintura << endl;
	cout << "    Genero            : " << reg.genero << endl;
	cout << "    Tipo de pelo         : " << reg.tipo_de_pelo << endl;

	mostrar_fecha(reg.fecha_de_hoy);

	anykey();

}
void mostrar_fecha(fecha reg){
    cout << "    Dia                : " << reg.dia << endl;
	cout << "    Genero            : " << reg.mes << endl;
	cout << "    Tipo de pelo         : " << reg.anio << endl;
}






