#include <iostream>
#include <string>
using namespace std;


class Refrigerador {
	public: 
	
		string color; 
		string tamano;
		string marca;
		int puertas;
		
		Refrigerador (string _color, string _tamano, string _marca, int _puertas ){
		
			color = _color;
			tamano = _tamano;
			marca = _marca;
			puertas= _puertas;
			cout <<"Se creo el objeto Refrigerador "<<endl;
		}
	
		void encender(){
			cout <<"El Refrigerador esta encendido. "<< endl;
			
		}
		 
		void apagar(){
			cout <<"El Refrigerador esta apagado. "<< endl;
			
		}
		
		void subir_potencia(){
			cout<<"Se subio la potencia de enfriamiento del Refrigerador"<<endl;
		
		}
		
		void bajar_potencia(){
			cout<<"Se ha bajado la potencia de enfriamiento del Refrigerador"<<endl;
		}
		
			
};  


int main (){

	Refrigerador miRefrigerador("Gris", "2m", "Lg", 2 );
	
	miRefrigerador.encender();
	miRefrigerador.apagar();
	miRefrigerador.subir_potencia();
	miRefrigerador.bajar_potencia();
	
	return 0;
}