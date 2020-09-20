#ifndef REPORTES_H_INCLUDED
#define REPORTES_H_INCLUDED

struct fecha {
	int dia;
	int mes;
	int anio;


};

struct peluqueria {
	int codigo_de_tintura[35];
	fecha fecha_de_hoy;
	char genero;
	char tipo_de_pelo[20];

};


void menureportes();

void mostrar_fecha();

fecha cargar_fecha();
peluqueria carga_coloracion();
bool guardar_coloracion(peluqueria);
void listar_coloraciones();

void mostrar_coloracion(peluqueria);
void mostrar_fecha(fecha);









#endif // REPORTES_H_INCLUDED
