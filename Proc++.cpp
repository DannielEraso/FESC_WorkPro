using namespace std;
int main() {
/* EJERCICIO #1
cout << "hola a todos \n";
cout << "hoy me inicio en c++ \n \n";
*/

/* EJERCICIO #2
string nombre;
cout << "cual es tu nombre? ";
cin >> nombre;
cout << "hola, como estas " << nombre;
*/

/* EJERCICIO #3
int x;
int y;
int operacion;
cout << "ingrese un primer digito ";
cin >> x;
cout << "ingrese un segundo digito ";
cin >> y;
operacion = (x+y);
cout << "la suma de esos dos digitos es: " << operacion;
*/

/*EJERCICIO #4
int edad;
cout << "ingrese su edad para determinar si es mayor o menor de edad. ";
cin >> edad;
if(edad>=18){
cout << "eres mayor de edad ";
}
else{
cout << "eres menor de edad";
}

*/

//EJERCICIO #5
/*
int i;
for (i=1;i<=100;i++){
cout << i << "\n";
}
*/
//// como se usa el for, primero la asignacion de variable, luego la condicion y por ultimo los pasos de incrementar.

/* EJERCICIO #6
int n=0;
cout << "ingrese un numero ";
cin >> n;
for(int i=1;i<=n;i++ ){
cout << i <<"\n";
}
/
/ EJERCICIO #7
int peso=0;
int variable;
int op=0;
int op2=0;
cout << "ingrese el peso a calcular ";
cin >> peso;
cout << "el peso que ingresó está en kilogramos (1) o en gramos (2)";
cin >> variable;
if (variable==1){
op = (peso1000);
cout << "el peso en gramos es de: " << op;
}
if (variable==2){
op2 = (peso/1000);
cout << "el peso en kilogramos es de: " <<op2;
}
/
/ EJERCICIO #8
int temperatura=0;
int tipo;
int op1=0;
int op2=0;
int op3=0;
int op4=0;
int op5=0;
int op6=0;
cout << "ingrese la temperatura deseada para hacer la conversion";
cin >> temperatura;
cout << "la temperatura está en celcius(1) kelvin(2) o farenheit(3)";
cin >>tipo;
//celcius a farenheit
op1=(temperatura1.8) + 32;
//farenheit a celcius
op2= (temperatura-32) (5/9);
//kelvin a celcius
op3= (temperatura-273.15);
//celcius a kelvin
op4= (temperatura+273.15);
//kelvin a farenheit
op5= (temperatura(9/5))+459.67;
//farenheit a kelvin
op6= (temperatura+459.67)*(5/9);
if (tipo==1){
cout << "las conversiones equivalentes son: "<< op1 << "farenheit. Y "<< op4 << "kelvin";
if (tipo==2){
cout << "las conversiones equivalentes son: " << op3 << "celcius. y " << op5 << "farenheit";
if (tipo==2){
cout << "las conversiones equivalentes son: " << op2 << "en celcius. y " << op6 << " en kelvin";

}
}
}
/
/ EJERCICIO #9
float n1=0;
float n2=0;
float n3=0;
float n4=0;
float op=0;
cout << "ingrese la nota de primer previo ";
cin >>n1;
cout << "ingrese la nota del segundo previo ";
cin >> n2;
cout << "ingrese la nota del tercer previo ";
cin >> n3;
cout << "ingrese la nota de el cuarto previo ";
cin >> n4;
op= (n1+n2+n3+n4)/4;
cout << "su definitiva final es de: " << op;
*/

//EJERCICIO #10

/* EJERCICIO #10
float operacion=0;
float op=0;
int num;
float cont=0;
float n=0;
int i;
float nota=0;
cout << "cuantas notas va a ingresar ";
cin >>n;
for(i=0;i<=n-1;i++){
cout << "ingrese la nota del previo "<<i+1;
cin >>nota;
cont = cont+ nota;
}
operacion =cont/n;
op= operacion*0.20;
cout << "su promedio es de: " << operacion << "y su tercera nota es de: "<< op;

*/
return 0;
}