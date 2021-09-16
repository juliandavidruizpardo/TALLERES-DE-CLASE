/*T07E01::ESCRIBIR UN PROGRAMA EN VISUAL C++, QUE DESPLIEGUE LOS RESULTADOS
DE SIGUIENTES EXPRESIONES: EJERCICIO DE CLASE
si se conoce la distancia recorrida por un vehiculo (en kms) y el tiempo de
desplazamiento (en horas), calcular la velocidad (en km/hora) y determinar si
es o no infractor, sabiendo que el limite permitido de velocidad es de 80km/hora).
NOMBRE: JULIAN DAVID RUIZ PARDO, VALENTINA MONTAÑA, SANTIAGO VARGAS
ASIGNATURA:PROGRAMACION l*/
#include <iostream>
using namespace std;
int main()
{
	float distancia, tiempo, velocidad;
	cout<<"distancia (km): ";	cin>>distancia;
	cout<<"tiempo (h): ";		cin>>tiempo;
	velocidad = distancia / tiempo;
	cout<<"velocidad (km/h): "<<velocidad<<endl;
	if(velocidad> 80)
	{
		cout<<"es infractor"<<endl;
	}
	else
	{
		cout<<"cumple con los limites permitidos"<<endl;
	}
	return 0;
}
