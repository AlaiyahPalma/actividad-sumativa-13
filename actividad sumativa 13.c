#include<iostream>
#include<conio.h>

using namespace std;
struct Cuentas
{
	
	string nombre;
	char apellido;
	int numero;
}Cuentas[40];

int cont=0;
void Registrar_cuenta()
{
	cout<<"\nHa elegido registrar una cuenta\n";
	cout<<"\nIngrese el nombre: ";cin>>Cuentas[cont].nombre;
	cout<<"\nIngrese el apellido: ";cin>>Cuentas[cont].apellido;
	cout<<"\nIngrese el numero de cuenta";cin>>Cuentas[cont].numero;
	cont++;
}

void Buscar_cuenta()
{ int band=0;
	int numero,i;
	
	system("CLS");
	cout<<"\nBuscar la cuenta...\n";
	cout<<"\nIngrese el numero de cuenta que desea buscar: \n";cin>>numero;
	
	for(i=0;i<cont;i++);
	{
		if(numero==Cuentas[i].numero)
		{
			cout<<"\nCuenta encontrada\n";
			cout<<"\nNombre del dueño: "<<Cuentas[cont].nombre;
			cout<<"\nApellido del dueño: "<<Cuentas[cont].apellido;
			cout<<"\nNumero de cuenta: "<<Cuentas[cont].numero;
			band=1;
		}
		if(band==0)cout<<"\nLa cuenta ingresada no existe\n";
		
	}
	
	
}


void Eliminar_cuenta()
{
	int Pos_borrar=-1;
	int i;
	int numero;
	
	cout<<"\nIngrese el numero de la cuenta que desea eliminar:\n";
	cin>>numero;
	
	for(i=0;i<cont;i++ )
	{
		if(numero==Cuentas[i].numero)
		Pos_borrar=i;
	}
	
	if(Pos_borrar<0)
	cout<<"\nEl numero de cuenta no existe\n";
	else
	
	for(i=Pos_borrar;i<cont;i++)
	{
		Cuentas[i].nombre=Cuentas[i+1].nombre;
		Cuentas[i].apellido=Cuentas[i+1].apellido;
		Cuentas[i].numero=Cuentas[i+1].numero;
	}
}

int menu()


{int opcion;

do{


cout<<"\nBienvenido al menu principal\n";
cout<<"\n 1_Registrar cuenta\n";
cout<<"\n 2_Buscar cuenta\n";
cout<<"\n 3_Eliminar cuenta\n";
cout<<"\nElija una de las opciones\n";
cin>>opcion;
if(opcion<1||opcion>3)
cout<<"\nLa opcion introducida no es valida, intentelo de nuevo\n";


	
	
	
}while(opcion<1||opcion>3);
return opcion;
}
int main()
{ int opcion;
char continuacion;
do{
getche();
system("CLS");

opcion=menu();

if(opcion==1)
Registrar_cuenta();

if(opcion==2);
Buscar_cuenta();

if(opcion==3);
Eliminar_cuenta();	

getche();
system("CLS");
cout<<"\nPresione la tecla s para volver al menu principal, presione una tecla para finalizar\n";
continuacion=getche();

	
}while(continuacion=='s'||continuacion=='S');
	
	return 0;
	
}

