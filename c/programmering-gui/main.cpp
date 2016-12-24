#include <X11/Xlib.h>1
#include <X11/Xutil.h>
#include <X11/Xos.h>
#include <stdio.h>
#include <iostream>

 using std::cout; using std::cin; using std::endl; 
 Display * dis;
 int screen;
 Window win;
 GC gc;

 int standardWidth = 700; 
 int standardHeight = 700;
 int standardBorder = 5;

void close_x_gui() {
  XFreeGC(dis, gc);
  XDestroyWindow(dis, win);
  XCloseDisplay(dis);
 
}




/*
   * - - - w - - *
*    0 1 2 3 4 5
|  0 - - - - - -
|  1 - 
|  2 -       x (4, 2)
h  3 -
|  4 -
|  5 -

*/

void init_x_gui()
{
  unsigned long black, white;

  dis     = XOpenDisplay((char *) 0);
  screen  = DefaultScreen( dis );
  black   = BlackPixel( dis, screen);
  white   = WhitePixel( dis, screen);

  win = XCreateSimpleWindow(dis,
			    DefaultRootWindow( dis ), //parent
			    0, //x
			    0, //y
			    standardWidth,
			    standardHeight,
			    standardBorder,
			    white,
			    black);
  
  
  XSetStandardProperties(dis, win, "My Window", "Hi!",
			         None, NULL, 0, NULL);
  XSelectInput(dis, win,
	       ExposureMask|ButtonPressMask|KeyPressMask);

  gc = XCreateGC( dis, win, 0, 0);


  XSetBackground(dis, gc, black);
  XSetForeground(dis, gc, white);
  
  XClearWindow(dis, win);
  XMapRaised(dis, win);
  
  XEvent event;
  KeySym key;
  char text[255];
  int x, y;
  int _x = 0;
  int _y = 0;
  
while(true) {

XNextEvent(dis, &event);

   if(event.type == ButtonPress) {
      _x = event.xbutton.x;
      _y = event.xbutton.y;
      
      cout << "You picked" << x << " and " << y << endl;
      cout << "You picked" << _x << " and " << _y << endl;
      
      XDrawLine(dis, win, gc, x, y, _x, _y);

      x = event.xbutton.x;
      y = event.xbutton.y;         
      
      }

   if(event.type == KeyPress &&
        XLookupString(&event.xkey, text, 255, &key, 0) == 1) {


	int DisWidth = DisplayWidth(dis, screen);
	int DisHeight = DisplayHeight(dis, screen);
	
	XDrawRectangle(dis, win, gc,
			 DisWidth/4,
			 DisHeight/4,
		         200, 200); // size of rect.

       if(text[0] == 'q') {
        
           close_x_gui();
        }

       if(text[0] == 'c') {
	 XClearWindow(dis, win);
       }
       
       if(text[0] == 'r') {	  
           x = event.xbutton.x;
           y = event.xbutton.y;          
        }

    }
  }
}

int main() {

  init_x_gui();
  return 0;
}
