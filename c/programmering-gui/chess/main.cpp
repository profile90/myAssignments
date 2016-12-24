
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xos.h>
#include <X11/Xcms.h>
#include <iostream>
#include <cstring>
#include <stdio.h>

using std::cout; using std::cin; using std::endl;

unsigned long black, white;
Display * display;
int screen;
Window window;
GC gc;

class piece {
  
  int x, y;
  int pre_x, pre_y;
public:
  
  int move(int x, int y);
  int drawPos(int x, int y);
  
  
};


int
piece::drawPos(int x, int y) {return 0;}

//TODO(samuel): Make function  that draws the position of the
  //              chess piece, on the board (which is on the window).

  //TODO(samuel): check how to do this with XLib


int
piece::move(int x, int y) {return 0;}
//TODO(samuel): make a move function
/*
 1 
 2 
 3 
 4 
 5
 6 
 7 
 8 
  a b c d e f g h
  //chess board

rows 1 + 8 go from a to c-> rook[a][h] , knight [b][g], bishop [c][f]
nummerical                      [1][8]          [2][7]         [3][6]

rows 2 + 7  are only pawns

rows 3 to 6 are empty.

*/




void
closeWindow() {
  XFreeGC(display, gc);
  XDestroyWindow(display, window);
  XCloseDisplay(display);
}

bool
keyPress(XEvent event, char buffer[255], KeySym key)
{
 
  if(event.type == KeyPress &&
     XLookupString(&event.xkey, buffer, 255, &key, 0) == 1){
    return true;
  }
  else {
    return false; 
  }
}



void drawBoard(int win_width,  int win_height) {
  XSetLineAttributes(display, gc, 10, LineSolid, 0, 0);
  XDrawLine(display, window, gc,
	    0, win_width,
	    win_width, win_width);
  
}
  

void
makeWindow (int selectInput) {
  int standardBorder = 1;
  //event handling
  XEvent window_event;
  //key strokes
  KeySym key;
  //buffer for input
  char buffer[255];
  //    int speed = 5;
  display = XOpenDisplay((char *) 0);
  screen  = DefaultScreen( display );
  black   = BlackPixel( display, screen );
  white   = WhitePixel( display, screen );
      
  int display_width = DisplayWidth(display, screen);
  int display_height = DisplayHeight(display, screen);
  int win_width = (display_width / 3);
  int win_height = (display_height / 3);

  window = XCreateSimpleWindow(display,
			       DefaultRootWindow( display ), // parent
			       0, 0, // x, y
			       win_width, win_height, standardBorder,
			       BlackPixel( display, screen),
			       WhitePixel( display, screen)); //background, foreground  
  XSetStandardProperties(display, window,"Chess!", "",
			 None, NULL, 0, NULL);
  XSelectInput( display, window, selectInput ); // input type
  gc = XCreateGC( display, window, 0, 0); //creates graphical context
  XSetForeground( display, gc, black); //forground color
  XSetBackground( display, gc, white); //background color
  XClearWindow( display, window); //clears the window, before mapping to the display
  XMapRaised(display, window); //maps (shows) the window on the display
  int move = 35;
  
  //Handles the window events, and keeps it open
  while(true)
    {
      XNextEvent(display, &window_event);
      
      if(keyPress(window_event, buffer, key))
	{
	  drawBoard(win_width, win_height);
	  if(buffer[0] == 'q')
	    {
	      closeWindow();
	    }
	  
	}
      
      
    }
}





int
main() {
  makeWindow( ExposureMask|ButtonPressMask|KeyPressMask);
  return 0;
}
