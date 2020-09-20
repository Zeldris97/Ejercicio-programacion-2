#include <iostream>

#include <cstdlib>
#include <cstdio>
#include <cstring>
#include "rlutil.h"
using namespace std;
using namespace rlutil;
#include "interfaz.h"
#include "Reportes.h"


const char* FILE_PELUQUERIA= "color.dat";

void listar_coloraciones() {
	peluqueria aux;
	FILE* f;
	f = fopen(FILE_PELUQUERIA, "rb");
	cout<<"ENTRO";
	system("pause");

	if (f == NULL) {
		cout << "No se puede leer el archivo.";
		return;
	}
	while (fread(&aux, sizeof(peluqueria), 1, f)) {
		mostrar_coloracion(aux);
		cout << endl;
	}
	fclose(f);


}










void menureportes() {
	int opcion;
	bool carga;
	peluqueria reg;
	fecha fecha_de_coloracion;


	do {
		system("cls");
		title("PELUQUERIA", APP_TITLEFORECOLOR, APP_TITLEBACKCOLOR);
		for (int i = 0; i < 23; i++) {
			gotoxy(i + 4, 3); printf("*");
			gotoxy(9, 4); printf("MENÚ REPORTES ");
			gotoxy(i + 4, 5); printf("*");
			gotoxy(4, 4); printf("*");
			gotoxy(26, 4); printf("*");
		}

		gotoxy(1, 6);
		cout << "    1. NUEVA COLORACION" << endl;
		cout << "    2. TINTURAS CON 10 O MAS COLORACIONES" << endl;
		cout << "    3. TINTURA MENOS UTILIZADA" << endl;
		cout << "    4. COLORACIONES REALIZADAS EN ENERO" << endl;
		cout << "    5. PORCENTAJE DE COLORACIONES POR GENERO " << endl;
		cout << "    6. DIA CON MAS COLORACIONES REALIZADAS" << endl;
        cout << "    7. Mostrar todas las coloraciones"<<endl<<endl;
		cout << "    0. VOLVER AL MENÚ PRINCIPAL" << endl;
		cout << "    ------------------------------" << endl;

		cout << "    Opción-> ";
		cin >> opcion;

		switch (opcion) {
		case 1:
			rlutil::cls();
			title("PELUQUERIA", APP_TITLEFORECOLOR, APP_TITLEBACKCOLOR);
			gotoxy(1, 3);

            reg = carga_coloracion();
            if (guardar_coloracion(reg)){
           msj("El usuario se guardó correctamente.", APP_FORECOLOR, APP_OKCOLOR);
           }
                else{
                msj("El usuario no se guardó.", APP_FORECOLOR, APP_ERRORCOLOR);

                }
			break;
		case 2:
			rlutil::cls();
			title("PELUQUERIA", APP_TITLEFORECOLOR, APP_TITLEBACKCOLOR);
			gotoxy(1, 3);


			break;
		case 3:
			rlutil::cls();
			title("PELUQUERIA", APP_TITLEFORECOLOR, APP_TITLEBACKCOLOR);
			gotoxy(1, 3);

			break;
		case 4:
			rlutil::cls();
			title("PELUQUERIA", APP_TITLEFORECOLOR, APP_TITLEBACKCOLOR);
			gotoxy(1, 3);


			break;
		case 5:
			rlutil::cls();
			title("PELUQUERIA", APP_TITLEFORECOLOR, APP_TITLEBACKCOLOR);
			gotoxy(1, 3);

			system("pause");
			break;
		case 6:
			rlutil::cls();
			title("PELUQUERIA", APP_TITLEFORECOLOR, APP_TITLEBACKCOLOR);
			gotoxy(1, 3);

			break;

        case 7:
           rlutil::cls();
			title("PELUQUERIA", APP_TITLEFORECOLOR, APP_TITLEBACKCOLOR);
			gotoxy(1, 3);

			cout<<"entro";
            void listar_coloraciones();

            system("pause");



		case 0: return;
			break;
		}
	} while (opcion != 0);
	cin.ignore();


}


