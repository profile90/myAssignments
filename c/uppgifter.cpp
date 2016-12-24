#include <iostream>
using namespace std;

int const MAX = 16;
float const pi = 3.14159;



void print_out_menu(){
    //printing out the choice menu, with Week xx as prefix.
    cout << "V.40: ";
    for(int i = 1; i <= 11; i++)
        cout << "\tUppgift [" << i << "]\n";}

//v.40 homework
void upp1_v40(){
    //prints out the 2^n until the frst value. Since the incremented value i is printed
    //it will only print out 2, 4, 8 and 16, without an index, since i is the index.
    for(int i = 1; i <= MAX; i *= 2)
    {
        cout << i << endl;
    }}

void upp2_v40(){ //declare 0 summed, array with 4 values, to avoid adding to undeclared variables
    float decimal[4] =  {0, 0, 0, 0};
        for(int i = 0; i < 2; i++)
        {
            cout << "["<<i + 1<<"]:";
            cin >> decimal[i];
            cout << endl;
            decimal[3] += decimal[i];
        }
        cout <<"Sum :\t"<< decimal[3] << "\nMean:\t" << decimal[3] / 3 << endl;}
void upp3_v40(){
    //declaring array of 4
    int integer[4];
        //Reversing the input order, from 1, 2, 3, 4 to 4, 3, 2, 1.
        for(int i = 3; i > -1; i--)
        {
            cout << "Enter: ";
            cin >> integer[i];
        }
         //When printed from 1-4 it'll be shown as 4-1
        for(int i = 0; i < 4; i++)
        {
            cout << "[" << i + 1 << "]: " << integer[i] << endl;
        }}
void upp4_v40(){
    int frst, sec;
    cin >> frst;
    cin >> sec;
    //checks if first is larger than second
    //prints them out from either second, or first depending on which
    //is bigger or smaller.
    if( frst > sec )
    {
        cout << "\n\tfirst:" << frst;
        for(int i = frst; i >= sec; i-- )
            cout << "\n\tcounter:" << i;
        cout << "\n\tsecond:" << sec;
    }
    else
    {
        cout << "\n\tfirst:" << frst;
        for(int i = frst; i <= sec; i++)
             cout << "\n\tcounter:" << i;
        cout << "\n\tsecond:" << sec;
    }}
void upp5_v40(){
    //uses modulus to check if divisible by 3 and 7, between 0 and 30.
    for(int i = 1; i <= 30; i++)
    {
        if( (i%3 == 0) && (i%7 == 0) )
            cout << endl << "Number: "<< i << endl;
    }}
void upp6_v40(){
    cout << "Gör ett program som finner alla heltalslösningar till ekvationen  då -50<=x=>50 och -20<=y=>20.";
    cout << "\nNot enough information to work off. There is no \"equation\"";}
void upp7_v40(){
int choice;
    float r, s, h;
    cout << "\n\tCylinder [1]\n\tKub [2]\n\tKon [3]\n\tKlot[4]";
    bool abort = false;
   
   while(abort == false) {

        cout <<"\nPick: ";
        cin >> choice;
        switch(choice)
        {
    case 1:
        cout << "\n\tRadiant: ";
        cin >> r;
        cout << "\n\tHeight: ";
        cin >> h;
        cout << "\n\tVolume: " << pi * (r * r) * h <<" m^3" << endl;
        abort = true;
            break;
    case 2:
        cout << "Side: ";
        cin >> s;
        cout << "\n\tVolume: " << (s * s * s) << " m^3" <<endl;
        abort = true;
            break;
    case 3:
        cout << "\n\tRadiant: ";
        cin >> r;
        cout << "\n\tHeight: ";
        cin >> h;
        cout << "\n\tVolume: " << (pi * (r * r) * h) / 3 << " m^3" <<endl;
        abort = true;
            break;
    case 4:
        cout << "\n\tRadiant: ";
        cin >> r;
        cout << "\n\tHeight: ";
        cin >> h;
        cout << "\n\tVolume: " << (pi * (r * r) * h) / 4 << " m^3" <<endl;
        abort = true;
            break;
    default:
        cout << "\n\tPick something valid.";
        abort = false;
        break;
        }

        }
    }

void upp8_v40(){
    float tot_year = 78, year = 365.25, day = 24, seconds_minutes = 60, heartBeat_bpm = 60;
    cout << "\n\t1 heart beat per second, gives us 60 bpm, over a 78 year period\n\t78 years times 365.25 days times 24 hours times 60 minutes times 60 seconds: ";
    cout << tot_year * (heartBeat_bpm/60) * (year * day * seconds_minutes * seconds_minutes) << endl;
    cout << "Enter the BPM: ";
    cin  >> heartBeat_bpm;
    cout << "Enter the years: ";
    cin  >> tot_year;
    cout <<"Heart beats over " << tot_year << " years: " << tot_year * (heartBeat_bpm/60) * (year * day * seconds_minutes * seconds_minutes) << endl;
    //1 heart beat per second, gives us 60 bpm, over a 78 year period\n\t78 years times 365.25 days times 24 hours times 60 minutes times 60 seconds
    //  = 31,577,600 heart beats * 78 years
    // 75 beats per minutes gives us 1.25 beats per second, which times
    // one year in seconds gives us 1.25 heart beats per second * 31,577,600 seconds * 78 years.
    }
void upp9_v40(){
    float tot_year = 78, year = 365.25, day = 24, seconds_minutes = 60, heartBeat_bpm = 60;
    cout << "\n\t1 heart beat per second, gives us 60 bpm, over a 78 year period\n\t78 years times 365.25 days times 24 hours times 60 minutes times 60 seconds: ";
    cout << tot_year * (heartBeat_bpm/60) * (year * day * seconds_minutes * seconds_minutes) << endl;
    cout << "Enter the BPM: ";
    cin  >> heartBeat_bpm;
    cout << "Enter the years: ";
    cin  >> tot_year;
    cout <<"Heart beats over " << tot_year << " years: " << tot_year * (heartBeat_bpm/60) * (year * day * seconds_minutes * seconds_minutes) << endl;
    //1 heart beat per second, gives us 60 bpm, over a 78 year period\n\t78 years times 365.25 days times 24 hours times 60 minutes times 60 seconds
    //  = 31,577,600 heart beats * 78 years
    // 75 beats per minutes gives us 1.25 beats per second, which times
    // one year in seconds gives us 1.25 heart beats per second * 31,577,600 seconds * 78 years.

    }
void upp10_v40(){
    //to avoid arbitrary numbers.
    double const ten_thousand = 10000, fifty_thousand = 50000, hundred_thousand = 100000, base_tax_use_multiply = 0.50, tax_reduction_add= 5000, tax_reduction2_multiply = 0.8;
    unsigned long int salary;
    unsigned long int salary_beforetax;
    unsigned long int temp = 0;
    cout << "Enter you salary: ";
    cin >> salary;
    //stores salary, so the program can operate on it
    salary_beforetax = salary;
    //checks if the salary is over ten thousand
    if(salary >= ten_thousand){
        //checks if the salary over hundred thousand, because then some operations have to be done
        //one some of the salary. Which means you can't apply base tax, yet.
        if(salary >= hundred_thousand)
            {
            //issues 20% tax on everything > 100 000
            cout << "over hundredthousand\n";
            temp = salary - hundred_thousand;
            cout << "\nIssuing tax increase on "<< temp << "...\n";
            temp *= tax_reduction2_multiply;
            //holds off on adding temp to main salary, until base tax
            }

        cout << "\nIssuing base tax...\n";
        //sets salary to half, and adds temp.
        salary *= base_tax_use_multiply;
        //if salary not over 100 000, this operation is essentially salary = salary + 0, which doesn't change anything.
        salary += temp;


    }    if( salary <= fifty_thousand )
        {
            cout << "\nIssuing tax reduction...\n";
            salary += tax_reduction_add;
        }

    //if it's over ten thousand, you add (after the fact) a 5000 tax reduction to the salary.
    if( salary <= fifty_thousand )
        {
            cout << "\nIssuing tax reduction...\n";
            salary += tax_reduction_add;
        }
        //prints the two salaries.
    cout << "\n\tBefore taxes:" << salary_beforetax << "\n\t After taxes:" << salary;}
void upp11_v40() {
        int _size, counter = 0;
        cout << "Enter the size of your array: ";
        cin >> _size;
        int *input = new int[_size];
        int *input_2 = new int[_size];
        for(int i = 0; i < _size; i++)
        {
            cin >> input[i];
        }

         for(int i = 0; i < _size; i++)
         {
            for(int j = i + 1; j < _size; j++)
            {
                if(input[i] == input[j])
                {
                   if((counter > 0) == false)
                    {
                        input[i] = input_2[counter];
                        cout << input[i];
                    }
                    input[i] = 0;
                    counter ++;
                }
                counter = 0;
            }

        }
        for(int i = 0; i <= counter; i++)
            cout << input_2[i] << endl;}
void switch_v40(int choice) {
    switch(choice)
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
    default:
        cout << "Exiting\n";
        break;
    }}
int main() {

    //variable declaration for the switch
    int choice;
    //prints out the menu
    print_out_menu();

    //take input from user
    cout << "Pick: ";
    cin >> choice;
    cout << endl;

    switch_v40(choice);

    return 0;
}
