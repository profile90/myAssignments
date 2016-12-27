#ifndef SBIB_H_INCLUDED
#define SBIB_H_INCLUDED



/********************************************/
/******** OVERLOADING print_out_menu ********/
/********************************************/

void print_out_menu(std::string title, std::string information, int size);
void print_out_menu(std::string title[], std::string * information, int size, int halt[]);
void print_out_menu(std::string title[], std::string information, int size, int halt[]);
/********************************************/
/******** OVERLOADING randomizeArray ********/
/********************************************/

void randomizeArray(int * arr, int index);
void randomizeArray(char * arr, int index);
void randomizeArray(bool * arr, int index);
void randomizeArray(short * arr, int index);

/********************************************/
/******** OVERLOADING printOutDynArray ******/
/********************************************/

void printOutDynArray(short * arr, int index);
void printOutDynArray(char * arr, int index);
void printOutDynArray(int * arr, int index);
void printOutDynArray(float * arr, int index);
void printOutDynArray(double * arr, int index);
void printOutDynArray(bool * arr, int index);

#endif // SBIB_H_INCLUDED


