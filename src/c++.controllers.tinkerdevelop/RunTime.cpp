#include "RunTime.hpp"

RunTime::RunTime(){}
RunTime::~RunTime(){}

std::vector<std::string> RunTime::loadScript(std::string route_file){
	
		std::ifstream myReadFile;
		myReadFile.open(route_file.c_str());
		std::vector <std::string> lineas;
		std::string output = "";
		if (myReadFile.is_open()) {
			
			while (!myReadFile.eof()) {
				std::getline(myReadFile, output);
				lineas.push_back(output);
				std::cout<<output<<"\n";
			}
		 
		}
		myReadFile.close();
		return lineas;
	}

int RunTime::validateScript(std::vector <std::string> lineasScript){
		
		/*
		 * Estructura del script
		 * #	Comentarios
		 * 
		 * #	Variables Globales
		 * 
		 * posicionActual
		 * posicionActual.x
		 * posicionActual.y
		 * 
		 * #	Definición de variables
		 * 
		 * $texto variableNombre;
		 * $numero variableNombre2;
		 * 
		 * variableNombre = variableNombre + variableNombre2;
		 * 
		 * centrar();
		 * imprimir("comentario");
		 * imprimir("comentario" & variableNombre);
		 * imprimir("comentario" & variableNombre & NuevaLinea);
		 * imprimir(posicionActual);
		 * imprimir(posicionActual.x);
		 * imprimir(posicionActual.y);
		 * 
		 * esperar(0.5); la medida es en segundos
		 * 
		 * clicDerecho(posicion x,posicion y,numero de clics);
		 * clicDerecho(posicionActual, numero de clics);
		 * clicDerecho(posicionActual.x, y, numero de clics);
		 * clicDerecho(x, posicionActual.y, numero de clics);
		 * 
		 * clicIzquierdo(posicion x,posicion y,numero de clics);
		 * clicIzquierdo(posicionActual, numero de clics);
		 * clicIzquierdo(posicionActual.x, y, numero de clics);
		 * clicIzquierdo(x, posicionActual.y, numero de clics);
		 * 
		 * clicScroll(posicion x,posicion y,numero de clics);
		 * clicScroll(posicionActual, numero de clics);
		 * clicScroll(posicionActual.x, y, numero de clics);
		 * clicScroll(x, posicionActual.y, numero de clics);
		 * 
		 * 
		 * */
		
		int vector_tamano = lineasScript.size();
		for(int i = 0 ; i < vector_tamano ; i++){
			 
			}
		return 0;
	};

int RunTime::executeScript(std::string route_file){
	
	
		RunTime::loadScript(route_file);
		return 0;
	}
