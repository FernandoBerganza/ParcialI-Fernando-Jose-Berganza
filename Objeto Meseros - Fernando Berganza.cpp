#include <iostream>
#include <string>
using namespace std;


class Meseros {
	public: 
	
		string color_piel; 
		string altura;
		string edad;
		string peso;
		
		Meseros (string _color_piel, string _altura, string _edad, string _peso ){
		
			color_piel = _color_piel;
			altura = _altura;
			edad = _edad;
			peso= _peso;
			cout <<"Se creo el objeto Meseros "<<endl;
		}
	
		void atender(){
			cout <<"El mesero atendio "<< endl;
			
		}
		 
		void anotar(){
			cout <<"El mesero anoto. "<< endl;
			
		}
		
		void servir(){
			cout<<"El mesero acaba de servir" <<endl;
		
		}
		
		
			
};  


int main (){

	Meseros Jose ("moreno", "1.70m", "25 años", "55kg" );
	
	Jose.atender();
	Jose.anotar();
	Jose.servir();
	
	return 0;
}