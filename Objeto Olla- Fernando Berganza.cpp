#include <iostream>
#include <string>
using namespace std;


class Ollas {
	public: 
	
		string color; 
		string material;
		string capacidad;
		string profundidad;
		
		Ollas (string _color, string _material, string _capacidad, string _profundidad ){
		
			color = _color;
			material = _material;
			capacidad = _capacidad;
			profundidad= _profundidad;
			cout <<"Se creo el objeto Ollas "<<endl;
		}
	
		void almacenar(){
			cout <<"Se almaceno en la Olla. "<< endl;
			
		}
		 
			
};  


int main (){

	Ollas miOlla("Azul", "Metal", "5L", "40cm" );
	
	miOlla.almacenar();
	
	return 0;
}