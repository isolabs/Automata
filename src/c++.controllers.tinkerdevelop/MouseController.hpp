#ifndef MouseController_hpp_
#define MouseController_hpp_

#include "../c++.atomic.tinkerdevelop/PositionXY.cpp"

#include <fstream>
#include <string.h>
#include <iostream>

#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>

#include <X11/Xlib.h>
#include <X11/Xutil.h>

class MouseController{
	
	private:
	
	public:
		
		MouseController();
		~MouseController();
		void mouseMove(int x, int y);
		void mouseMoveSpecificArea(int x, int y);
		void mouseClick(int button);
		void setMouseCenterScreen(void);
		PositionXY getMousePosition(void);
		PositionXY getScreenResolution(void);
		void hacerClicIzquierdoPosicion(int x, int y, int numero_clics);
	
	};

#endif
