#include <iostream>
#include <string>
using namespace std;


class Horno {
	public: 
	
		string color; 
		string tamano_largo;
		string modelo;
		string tamano_ancho;
		
		Horno (string _color, string _tamano_largo, string _modelo, string _tamano_ancho ){
		
			color = _color;
			tamano_largo = _tamano_largo;
			modelo = _modelo;
			tamano_ancho= _tamano_ancho;
			cout <<"Se creo el objeto Horno. "<<endl;
		}
	
		void encender(){
			cout <<"El Horno esta encendido. "<< endl;
			
		}
		 
		void apagar(){
			cout <<"El Horno esta apagado. "<< endl;
			
		}
		
		void abrir(){
			cout<<"El Horno se abrio"<<endl;
		
		}
		
		void cerrar(){
			cout<<"El Horno se cerro"<<endl;
		}
		
			
};  


int main (){

	Horno miHorno("Gris", "0.5m", "Scross", "0.3m" );
	
	miHorno.encender();
	miHorno.apagar();
	miHorno.abrir();
	miHorno.cerrar();
	
	return 0;
}