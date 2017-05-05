# Bot

Bot para el control programado de ubicaciones en pantalla usando el puntero
del mouse.

Requiere: xdotool

Adicion para la compilación: -lX11


		  # Estructura del script
		  #	Comentarios
		  
		  #	Variables Globales
		  
		  posicionActual
		  posicionActual.x
		  posicionActual.y
		  
		  #	Definición de variables
		  
		  $texto variableNombre;
		  $numero variableNombre2;
		  
		  variableNombre = variableNombre + variableNombre2;
		  
		  centrar();
		  imprimir("comentario");
		  imprimir("comentario" & variableNombre);
		  imprimir("comentario" & variableNombre & NuevaLinea);
		  imprimir(posicionActual);
		  imprimir(posicionActual.x);
		  imprimir(posicionActual.y);
		  
		  esperar(0.5); la medida es en segundos
		  
		  clicDerecho(posicion x,posicion y,numero de clics);
		  clicDerecho(posicionActual, numero de clics);
		  clicDerecho(posicionActual.x, y, numero de clics);
		  clicDerecho(x, posicionActual.y, numero de clics);
		  
		  clicIzquierdo(posicion x,posicion y,numero de clics);
		  clicIzquierdo(posicionActual, numero de clics);
		  clicIzquierdo(posicionActual.x, y, numero de clics);
		  clicIzquierdo(x, posicionActual.y, numero de clics);
		  
		  clicScroll(posicion x,posicion y,numero de clics);
		  clicScroll(posicionActual, numero de clics);
		  clicScroll(posicionActual.x, y, numero de clics);
		  clicScroll(x, posicionActual.y, numero de clics);
		  
