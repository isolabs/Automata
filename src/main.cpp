#include "c++.controllers.tinkerdevelop/MouseController.cpp"

int main(){
	
	MouseController x;
	
	x.setMouseCenterScreen();
	x.hacerClicIzquierdoPosicion(1000,653,2);
	system("sleep 5s");
	x.hacerClicIzquierdoPosicion(713,554,2); // 1ra Segada
	system("sleep 5s");
	x.hacerClicIzquierdoPosicion(655,546,2); // 2da Segada
	system("sleep 5s");
	x.hacerClicIzquierdoPosicion(624,532,2); // 3ra Segada
	system("sleep 5s");
	x.hacerClicIzquierdoPosicion(596,513,2); // 4ta Segada
	system("sleep 5s");
	return 0;
	
	}
