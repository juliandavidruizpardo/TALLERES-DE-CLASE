/*T07E01::ESCRIBIR UN PROGRAMA EN VISUAL C++, QUE DESPLIEGUE LOS RESULTADOS
DE SIGUIENTES EXPRESIONES: EJERCICIO DE CLASE
escribir un programa en c++ que lea la edad de una persona
y calcule el valor a pagar por transporte publico si:
- si es menor de edad o mayor de 68 años, paga $1.980
- en caso contrario, paga $2.400
NOMBRE: JULIAN DAVID RUIZ PARDO, VALENTINA MONTAÑA, SANTIAGO VARGAS
ASIGNATURA:PROGRAMACION l*/
# incluye  < iostream >
usando el  espacio de nombres  std;
int  main()
{
	setlocale(LC_CTYPE, "spanish");
	int edad;
	float valor_pasaje;
	cout << "edad ";	cin >> edad;
	if (edad < 18 || edad > 62)
	{
		valor_pasaje = 1980;
	}
	else
	{
		valor_pasaje = 2400;
	}
	return  0;
}