#include "MouseController.hpp"

MouseController::MouseController(){}
MouseController::~MouseController(){}

void MouseController::mouseClick(int button)
{
	Display *display = XOpenDisplay(NULL);

	XEvent event;
	
	if(display == NULL)
	{
		fprintf(stderr, "Errore nell'apertura del Display !!!\n");
		exit(EXIT_FAILURE);
	}
	
	memset(&event, 0x00, sizeof(event));
	
	event.type = ButtonPress;
	event.xbutton.button = button;
	event.xbutton.same_screen = True;
	
	XQueryPointer(display, RootWindow(display, DefaultScreen(display)), &event.xbutton.root, &event.xbutton.window, &event.xbutton.x_root, &event.xbutton.y_root, &event.xbutton.x, &event.xbutton.y, &event.xbutton.state);
	
	event.xbutton.subwindow = event.xbutton.window;
	
	while(event.xbutton.subwindow)
	{
		event.xbutton.window = event.xbutton.subwindow;
		
		XQueryPointer(display, event.xbutton.window, &event.xbutton.root, &event.xbutton.subwindow, &event.xbutton.x_root, &event.xbutton.y_root, &event.xbutton.x, &event.xbutton.y, &event.xbutton.state);
	}
	
	if(XSendEvent(display, PointerWindow, True, 0xfff, &event) == 0) fprintf(stderr, "Error\n");
	
	XFlush(display);
	
	usleep(100000);
	
	event.type = ButtonRelease;
	event.xbutton.state = 0x100;
	
	if(XSendEvent(display, PointerWindow, True, 0xfff, &event) == 0) fprintf(stderr, "Error\n");
	
	XFlush(display);
	
	XCloseDisplay(display);
};

void MouseController::mouseMove(int x, int y)
{
    Display *displayMain = XOpenDisplay(NULL);

    if(displayMain == NULL)
    {
        fprintf(stderr, "Errore nell'apertura del Display !!!\n");
        exit(EXIT_FAILURE);
    }

    XWarpPointer(displayMain, None, None, 0, 0, 0, 0, x, y);

    XCloseDisplay(displayMain);
};

PositionXY MouseController::getMousePosition(void){
	
		PositionXY result;
		system("xdotool getmouselocation > pos.txt");
		std::ifstream myReadFile;
		myReadFile.open("pos.txt");
		char output[100];
		if (myReadFile.is_open()) {
		
			myReadFile.getline(output, 100);
			std::string tmp =output;
			int output_size = tmp.length();
			std::string XY = "";
			for (int i = 0 ; i < output_size; i++)
			{
				
				if(tmp[i] == 's'){
					
						break;
					
					}
				
				XY += tmp[i];
				
				}
				
				
			
			int XY_size = XY.length();
			std::string x_tmp = "";
			std::string y_tmp = "";
			bool flag_X=false;
			bool flag_Y=false;
			for (int i = 0 ; i < XY_size; i++)
			{
				
				if(XY[i] == ':'){
						i++;
						flag_X=true;
					
					}
				
				if(XY[i] == ' '){
						
						for (; i < XY_size; i++)
						{
				
							if(XY[i] == ':'){
									i++;
									flag_Y=true;				
								}
								
							if(flag_Y){
					
									y_tmp += XY[i];
					
								}						
							}
						
						break;				
					}
					
				 if(flag_X){
					
						x_tmp += XY[i];
					
					}
						
				}
				
				double x,y;
				x = atof(x_tmp.c_str());
				y = atof(y_tmp.c_str());
				result.setX(x);
				result.setY(y);

		}
		
		myReadFile.close();
		system("rm pos.txt");
		
		return result;
	};
	
PositionXY MouseController::getScreenResolution(void){
	
		PositionXY result;
		Display* disp = XOpenDisplay(NULL);
		Screen*  scrn = DefaultScreenOfDisplay(disp);
		int height = scrn->height; //Y
		int width  = scrn->width;  //X
		result.setX(width);
		result.setY(height);
		return result;
		
	};
	
void MouseController::setMouseCenterScreen(void){
	
		PositionXY mousePosition = MouseController::getMousePosition();
		MouseController::mouseMove(-mousePosition.getX(), -mousePosition.getY());
		PositionXY ScreenResolution = MouseController::getScreenResolution();
		MouseController::mouseMove(ScreenResolution.getX()/2, ScreenResolution.getY()/2);
	
	};
	
void MouseController::mouseMoveSpecificArea(int x, int y){
	
		PositionXY mousePosition = MouseController::getMousePosition();
		MouseController::mouseMove(-mousePosition.getX(), -mousePosition.getY());
		MouseController::mouseMove(x,y);
	
	};
