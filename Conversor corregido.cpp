#include <iostream>

using namespace std;

int main( )

{

    char menu;

    cout << "¿Qué desea convertir? \nm.Monedas \nd.Distancias \np.Peso \n";

    cin >> menu;

    

switch(menu)

{ 

    case 'm':

{

    char opcion;

    float pesos;

cout << "¿Cual es la cantidad de pesos a convertir?"; cin >> pesos;

cout << "Elija una opcion : \n1.Dolares. \n2.Euros. \n3.Soles Peruanos. \n4.Francos Suizos. \n5.Chelines. \n";

cin >> opcion;

switch(opcion)

{

    case '1':

        cout << "Esta cantidad equivale a: " << pesos*0.053 <<" Dolares" << endl;

        break;

    

    case '2':

        cout << "Esta cantidad equivale a: " << pesos*0.049 << " Euros" << endl;

        break;

    

    case '3':

        cout << "Esta cantidad equivale a: " << pesos*0.20 << " Soles Peruanos" <<  endl;

        break;

    

    case '4':

        cout << "Esta cantidad equivale a: " << pesos*0.048 << " Francos Suizos" << endl;

        break;

    

    case '5':

        cout << "Esta cantidad equivale a: " << pesos*6.54 << " Chelines" << endl;

        break;}

        

        

    case 'd':

{

    char opcion;

    float distancia;

cout << "¿Cual es la distancia en kilometros que desea convertir?"; 

cin >> distancia;

cout << "Elija una opcion : \n1.Pulgadas. \n2.Pies. \n3.Centimetros. \n4.Nanometro. \n5.Años luz. \n";

cin >> opcion;

switch(opcion)

{

    case '1':

        cout << opcion << " km equivalen a: " << distancia*39370.1 <<" Pulgadas" << endl;

        descanso;

    

    caso '2':

        cout << opcion << " km equivalen a: " << distancia*3281.84 <<" Pies" << endl;

        descanso;

        

     caso '3':

        cout << opcion << " km equivalen a: " << distancia/100000 <<" Centimetros" << endl;

        descanso;

        

      caso '4':

        cout << opcion << " km equivalen a: " << distancia*1e+12 <<" Nanómetros" << endl;

        descanso;

    

      caso '5':

        cout << opcion << " km equivalen a: " << distancia/9.461e+12 <<" Años luz" << endl;

        descanso;}

    

    

        caso 'p':

{

    char opción;

    peso flotante;

cout << "¿Cuántos kilogramos desea convertir?";

cin >> peso;

cout << "Elija una opcion : \n1.Toneladas. \n2.Onzas. \n3.Libras. \n4.Microgramos. \n5.Teragramos. \n";

cin >> opción;

interruptor (opción)

{

    caso 1':

        cout << opcion << " kg equivalen a: " << peso*0.001 <<" Toneladas" << endl;

        descanso;

    

    caso '2':

        cout << opcion << " km equivalen a: " << peso*35.274 <<" Onzas" << endl;

        descanso;

        

     caso '3':

        cout << opcion << " km equivalen a: " << peso*2.20462 <<" Libras" << endl;

        descanso;

        

      caso '4':

        cout << opcion << " km equivalen a: " << peso*1e+9<<" Microgramos" << endl;

        descanso;

    

      caso '5':

        cout << opcion << " km equivalen a: " << peso/1e+9 <<" Teragramos" << endl;

        descanso;}

          

    }

}

}

}

}
