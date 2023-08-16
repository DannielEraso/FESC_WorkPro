Algoritmo Punto8
	
	Definir temperatura Como Real
	Definir escala Como Real
	Definir temperaturaCelcius, temperaturaFahrenheit, temperaturaKelvin Como Real
	
	Escribir "Ingrese la temperatura"
	Leer temperatura
	
	Escribir "Seleccione la escala de la temperatura que necesita"
	
	Escribir "1. Celcius, 2. Fahrenheit, 3. Kelvin"
	Leer escala
	
	Segun escala Hacer
		1:
			temperaturaCelcius <- temperatura
			temperaturaFahrenheit <- (temperatura*9/5)+32
			temperaturaKelvin <- temperatura+273.15
		2:
			temperaturaFahrenheit <- temperatura
			temperaturaCelcius <- (temperatura-32) * 5/9
			temperaturaKelvin <- (temperatura+459.67) * 5/9
			
		3:
			temperaturaKelvin <- temperatura
			temperaturaCelcius <- temperatura-273.15
			temperaturaFahrenheit <-(temperatura*9/5) - 459.67
			
	FinSegun
	
	Escribir "La temperatura en Celcius es: ", temperaturaCelcius
	Escribir "La temperatura en Fahrenheit es: ", temperaturaFahrenheit
	Escribir "La temperatura en Kelvin es: ", temperaturaKelvin
	
FinAlgoritmo
