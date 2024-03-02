#include <iostream>
#include <string>
using namespace std;


class Mesas {
	public: 
	
		string color; 
		string tamano_largo;
		int cantidad_patas;
		string tamano_ancho;
		
		Mesas (string _color, string _tamano_largo, int _cantidad_patas, string _tamano_ancho ){
		
			color = _color;
			tamano_largo = _tamano_largo;
			cantidad_patas= _cantidad_patas;
			tamano_ancho= _tamano_ancho;
			cout <<"Se creo el objeto Mesas "<<endl;
		}
	
		void apoyar(){
			cout <<"Se apoyo un objeto en la Mesa "<< endl;
			
		}
		
			
};  


int main (){

	Mesas miMesa("cafe", "0.3 metros", 4, "0.5 metros" );
	
	miMesa.apoyar();
	
	return 0;
}