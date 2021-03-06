﻿#include <iostream>
#include <cstdlib>
#include <climits>
#include <stdio.h>
#include "sbib.h"
#include <string>
#include <unistd.h>
using std::cin;using std::cout;using std::endl;using std::string;


int const MAX = 16;
double const pi = 3.14159;

void
upp1_v40() {
  //prints out the 2^n until the first value. Since the incremented value i is printed 
  //it will only print out 2, 4, 8 and 16, without an index, since i is the index. 
  for (int i = 1; i <= MAX; i *= 2)
    {
      cout << i << endl;
    }
}
void
upp2_v40() {
  //declare 0 summed, array with 4 values, to avoid adding to undeclared variables 
  float decimal[4] = { 0, 0, 0, 0 };
  //	 0  1  2  3
  for (int i = 0; i < 2; i++)
    {
      cout << "[" << i + 1 << "]:";
      cin >> decimal[i];
      cout << endl;
      decimal[3] += decimal[i];
    }
  cout << "Sum :\t" << decimal[3] << "\nMean:\t" << decimal[3] / 3 << endl;
}
void upp3_v40() {
  //declaring array of 4 
  int integer[4];
  //Reversing the input order, from 1, 2, 3, 4 to 4, 3, 2, 1. 
  for (int i = 3; i > -1; i--)
    {
      cout << "Enter: ";
      cin >> integer[i];
    }
  //When printed from 1-4 it'll be shown as 4-1 
  for (int i = 0; i < 4; i++)
    {
      cout << "[" << i + 1 << "]: " << integer[i] << endl;
    }
}
void upp4_v40() {
  int frst, sec;
  cin >> frst;
  cin >> sec;
  //checks if first is larger than second 
  //prints them out from either second, or first depending on which 
  //is bigger or smaller. 
  if (frst > sec)
    {
      cout << "\n\tfirst:" << frst;
      for (int i = frst; i >= sec; i--)
	cout << "\n\tcounter:" << i;
      cout << "\n\tsecond:" << sec;
    }
  else{
    cout << "\n\tfirst:" << frst;
    for (int i = frst; i <= sec; i++)
      cout << "\n\tcounter:" << i;
    cout << "\n\tsecond:" << sec;
  }
}
void upp5_v40() {
  //uses modulus to check if divisible by 3 and 7, between 0 and 30. 
  for (int i = 1; i <= 30; i++)
    {
      if ((i % 3 == 0) && (i % 7 == 0))
	cout << endl << "Number: " << i << endl;
    }
}

void upp6_v40() {
  cout << "G\u00F6r ett program som finner alla heltalsl\u00F6sningar till ekvationen  d\u00E5 -50<=x=>50 och -20<=y=>20.";
  cout << "\nNot enough information to work off. There is no \"equation\"";
  
}

void upp7_v40() {
  int choice;
  float r, s, h;

  cout << "\n\tCylinder [1]\n\tKub [2]\n\tKon [3]\n\tKlot[4]";
  bool abort = false;
  while (abort == false) {
    
    cout << "\nPick: ";
    cin >> choice;
    switch (choice)
      {
      case 1:
	cout << "\n\tRadiant: ";
	cin >> r;
	cout << "\n\tHeight: ";
	cin >> h;
	cout << "\n\tVolume: " << pi * (r * r) * h << " m^3" << endl;
	abort = true;
	break;

      case 2:
	cout << "Side: ";
	cin >> s;
	cout << "\n\tVolume: " << (s * s * s) << " m^3" << endl;
	abort = true;
	break;

      case 3:
	cout << "\n\tRadiant: ";
	cin >> r;
	cout << "\n\tHeight: ";
	cin >> h;
	cout << "\n\tVolume: " << (pi * (r * r) * h) / 3 << " m^3" << endl;
	abort = true;
	break;

      case 4:
	cout << "\n\tRadiant: ";
	cin >> r;
	cout << "\n\tHeight: ";
	cin >> h;
	cout << "\n\tVolume: " << (pi * (r * r) * h) / 4 << " m^3" << endl;
	abort = true;
	break;

      default:
	cout << "\n\tPick something valid.";
	abort = false;
	break;
      }

  }
}
void upp8_v40() {
  float tot_year = 78, year = 365.25, day = 24, seconds_minutes = 60, heartBeat_bpm = 60;

  cout << "\n\t1 heart beat per second, gives us 60 bpm, over a 78 year period\n\t78 years times 365.25 days times 24 hours times 60 minutes times 60 seconds: ";
  cout << tot_year * (heartBeat_bpm / 60) * (year * day * seconds_minutes * seconds_minutes) << endl;

  cout << "Enter the BPM: ";
  cin >> heartBeat_bpm;

  cout << "Enter the years: ";
  cin >> tot_year;
 
  cout << "Heart beats over " << tot_year << " years: " << tot_year * (heartBeat_bpm / 60) * (year * day * seconds_minutes * seconds_minutes) << endl;
  //1 heart beat per second, gives us 60 bpm, over a 78 year period\n\t78 years times 365.25 days times 24 hours times 60 minutes times 60 seconds 
  //  = 31,577,600 heart beats * 78 years 
  // 75 beats per minutes gives us 1.25 beats per second, which times 
  // one year in seconds gives us 1.25 heart beats per second * 31,577,600 seconds * 78 years. 
}
void upp9_v40() {
  float tot_year = 78, year = 365.25, day = 24, seconds_minutes = 60, heartBeat_bpm = 60;
  cout << "\n\t1 heart beat per second, gives us 60 bpm, over a 78 year period\n\t78 years times 365.25 days times 24 hours times 60 minutes times 60 seconds: ";
  cout << tot_year * (heartBeat_bpm / 60) * (year * day * seconds_minutes * seconds_minutes) << endl;
  cout << "Enter the BPM: ";
  cin >> heartBeat_bpm;
  cout << "Enter the years: ";
  cin >> tot_year;
  cout << "Heart beats over " << tot_year << " years: " << tot_year * (heartBeat_bpm / 60) * (year * day * seconds_minutes * seconds_minutes) << endl;
  //1 heart beat per second, gives us 60 bpm, over a 78 year period\n\t78 years times 365.25 days times 24 hours times 60 minutes times 60 seconds 
  //  = 31,577,600 heart beats * 78 years 
  // 75 beats per minutes gives us 1.25 beats per second, which times 
  // one year in seconds gives us 1.25 heart beats per second * 31,577,600 seconds * 78 years. 
  
}
void upp10_v40() {
  //to avoid arbitrary numbers. 
  double const ten_thousand = 10000,
    fifty_thousand = 50000,
    hundred_thousand = 100000,
    base_tax_use_multiply = 0.50,
    tax_reduction_add = 5000,
    tax_reduction2_multiply = 0.8;

  double salary,
    salary_beforetax,
    temp = 0;
  
  cout << "Enter you salary: ";
  cin >> salary;
  
  //stores salary, so the program can operate on it 
  salary_beforetax = salary;
  //checks if the salary is over ten thousand 
  if (salary >= ten_thousand) {
    //checks if the salary over hundred thousand, because then some operations have to be done 
    //one some of the salary. Which means you can't apply base tax, yet. 
    if (salary >= hundred_thousand){
      
      //issues 20% tax on everything > 100 000 
      cout << "over hundredthousand\n";
      temp = salary - hundred_thousand;
	
      cout << "\nIssuing tax increase on " << temp << "...\n";
      temp *= tax_reduction2_multiply;
      //holds off on adding temp to main salary, until base tax 
    }
    
    salary -= temp;
    cout << "\nIssuing base tax...\n";
    
    //sets salary to half, and adds temp. 
    salary *= base_tax_use_multiply;
    
    //if salary not over 100 000, this operation is essentially salary = salary + 0, which doesn't change anything. 
    
    

    //if it's over ten thousand, you add (after the fact) a 5000 tax reduction to the salary. 
    if ( salary_beforetax <= fifty_thousand){
      cout << "\nIssuing tax reduction...\n";
      salary += tax_reduction_add;
    }
  }
  //prints the two salaries. 
  cout << "\n\tBefore taxes: " << salary_beforetax << " kr \n\tAfter taxes: " << salary << " kr\n\n";
  
}
void upp11_v40() {
  
  bool randomize = true;	
  int _size, choice;
  bool c = true;
  
  cout << "Enter the size of your array: ";
  cin >> _size;
  //declare one value array, with size '_size'
  int *input = new int[_size];

  //declare one boolean array, for keeping the index of the duplicates, of size '_size'
  bool *_not_ = new bool[_size];

  randomizeArray(input, _size);
  
  for(int i = 0; i < _size; i++){
    printf("input: %d\t_not_: %s\n",
	   input[i],
	   _not_[i] ? "true" : "false"); 
    
    for(int j = i; j < _size; j++){
     
      if(input[i] == input[j]){

	if(!c) {
	  cout << "input[i] == input[j]" << endl; 
	  _not_[j] = true;
	  c = false;
	  
	}
	
    printf("input: %d\tduplicate: %s\n",
	   input[i],
	   _not_[i] ? "true" : "false");
      }
      
    } 
  }
}	
void upp12_v42_v43() {
  int temp = 0;
  int i = 0;
  for (int i = 0; i < 10; i++)
    {
      cout << endl;
      temp++;
      //cin >> temp;
      cout << temp;
    }
  
  i = 0;

  do 
    {
      cout << endl;
      cin >> temp;
      cout << temp;
      i++;
    } while (i < 10);
  i = 0;
  
  while (i < 10)
    {
      cout << endl;
      
      cin >> temp;
      cout << temp;
      i++;
    }
  
}


void upp13_v42_v43() {
  int numerator, denominator;
  cout << "Enter the numerator number:";
  cin >> numerator;
  cout << "\nEnter the denominator number:";
  cin >> denominator;
  //casts the two int variables to double
  cout << "\nResult: " << ((double)numerator) / ((double)denominator) << "\n";
  
}

void upp14_v42_v43() {
  
  
  struct credentials {
    string name;
    string lastname;
    string socialSecNum;
    
  };
  
  
  credentials person;
  //string list[3] = { "Name ", "Lastname ", "Social Security Number " };
  int choice;
  
  
  cout << "Enter your first name: ";
  getline(cin, person.name);
  cout <<"Enter your last name: ";
  getline(cin, person.lastname);
  cout << "Enter your social security number: ";
  getline(cin, person.socialSecNum);
  
  cout << endl << "[1] Sort after lastname" << endl << "[2] Sort after social security number" << endl << "Choice: ";
  cin >> choice;
  cout << endl;
  switch (choice) {
  case 1:
    // last name, name,  social security number, 
    cout << person.lastname << " " << person.name << " " << person.socialSecNum << endl;
    break;
  case 2:
    // social security number,  name, lastname
    cout << person.socialSecNum << ", " << person.name << " " << person.lastname << endl;
    break;
  default:
    // name, lastname, social security
    cout << person.name << " " << person.lastname << ", " << person.socialSecNum << endl;
    break;
  }
}

void upp15_v42_v43() {

  int decimal_ = 0, base = 2, limit = 32, c = 0;
  unsigned int decimal = 0;
  cout << "Enter your number:";
  cin >> decimal_;
  bool negative = decimal_ < 0;
  
  //handles negative values
  // _decimal = - 3
  // (unsigned int) _decimal => 2^32 - 3
  // 2^32 - (2^32 - 3)
  // 2^32 - 2^32 + 3
  //  => (maximum value of int - cast operation result) = (positive value of input) 
  
  if (negative) {
    //does the conversion above, using two's compliment
    decimal = ULONG_MAX - ((unsigned int)decimal_ - 1);
  } else {
    
    decimal = decimal_;
  }
  
  
  // makes sure the array isn't bigger than it needs to be, to save memory.

  if (decimal < 256) {
    limit = 8;
  }
  else if (decimal < 65536) {
    limit = 16;
  }
  else
    {
      //default value
      limit = 32;
    }
  
  cout << endl;
  bool * converter = new bool [limit];
  // a boolean sheet for for the conversion, e.g. the 1 & 0's, eg. the binary number.
	
  for (int i = 0; i < limit; i++) {
    converter[i] = false;
    //resets all the values to false, in converter array
	  
    //if even 
    if (decimal % base == 0)
      {
	//divide by base, and set converter[i] to false.
	decimal = decimal / base;
	converter[i] = false;
      }
    else
      {
	//divide by base, and set converter[i] to true
	decimal = decimal / base;
	converter[i] = true;
      }
  }
	
  // print if true, e.g. if the inputed decimal number is negative.
  if (negative)
    cout << "-";
	
  for (int i = limit - 1; i >= 0; i--)
    {
      if (c > 0)
	{
	  //contiunes printing after c > 0, regardless of 1 or 0
	  cout << converter[i];
	}
      else if (converter[i]) 
	{
	  //print the first encountered 1, then increments c
	  cout << converter[i];
	  //to make sure 000 000 000 1111 >> to 1111 converrsion doesn't occur after the first encountered 1
	  c++;
	}
      else
	{
	  //goes from 000 000 000 1111 >> to 1111, doesn't print unless c > 0, which is the case when the first one is encountered
	  continue;
	}
    }
	
  cout << endl;
}

void upp16_v43()
{
  cout << endl;

  for(int i = 1; i < 255; i++)
    {
      cout << i << "->"<< (char) i << endl;
    }	
}


void switch_v40(int choice) {

  switch (choice)
    {
    case 1:
      cout << "You chose homework 1\n";
      upp1_v40();
      break;
    case 2:
      cout << "You chose homework 2\n";
      upp2_v40();
      break;
    case 3:
      cout << "You chose homework 3\n";
      upp3_v40();
      break;
    case 4:
      cout << "You chose homework 4\n";
      upp4_v40();
      break;
    case 5:
      cout << "You chose homework 5\n";
      upp5_v40();
      break;
    case 6:
      cout << "You chose homework 6\n";
      upp6_v40();
      break;
    case 7:
      cout << "You chose homework 7\n";
      upp7_v40();
      break;
    case 8:
      cout << "You chose homework 8, which is the same as 9\n";
      upp8_v40();
      break;
    case 9:
      cout << "You chose homework 9, which is the same as 8\n";
      upp9_v40();
      break;
    case 10:
      cout << "You chose homework 10\n";
      upp10_v40();
      break;
    case 11:
      cout << "You chose homework 11\n";
      upp11_v40();
      break;
    case 12:
      cout << "You chose homework 12\n";
      upp12_v42_v43();
      break;
    case 13:
      cout << "You chose homework 13\n";
      upp13_v42_v43();
      break;
    case 14:
      cout << "You chose homework 14\n";
      upp14_v42_v43();
      break;
    case 15:
      cout << "You chose homework 15\n";
      upp15_v42_v43();
      break;
    case 16:
      cout << "You chose homework 16\n";
      upp15_v42_v43();
      break;
    case 17:
      cout << "You chose homework 17\n";
      //upp15_v42_v43();
      break;
    default:
      cout << "Exiting\n";
      break;
    }

}
int main() {

  //variable declaration for the switch 
  int choice;
  bool running = true;
  //prints out the menu

  string title[] = {"V.40", "V.42", "V.43"};
  int  halt[] = {11, 14, 18};


  do {
    cout << "\n\tC^c to exit the program at any time.\n\n";
    //take input from user 

    terminal_print_out_menu(title, "Uppgifter", 20, halt);

    cout << "Pick: ";
    cin >> choice;
    cout << endl;
    switch_v40(choice);
    cout << "\n\tWaiting 5 seconds..." << endl;
    sleep(5);
  } while(running);
	
  return 0;
}
