Algoritmo decimo
	contador=0
	Escribir "hasta que nota desea contar? "
	leer n
	Para i<-0 Hasta n-1 Con Paso 1 Hacer
		Escribir "ingrese la nota numero ", i+1
		leer nota
		contador=contador+nota
	Fin Para
	promedio= contador/n
	Escribir "el promedio es de ", promedio
	Escribir "tercera nota es igual a ", promedio*0.2
FinAlgoritmo
