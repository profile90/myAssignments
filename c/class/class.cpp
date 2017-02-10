#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::string;


// E -> C

class rect {
private:
	float width ;
	float height;
	float depth; //to handle the 2d case, where only width and height are initilized
public:
	rect(float, float, float);
	rect(float, float);
	rect();
	void assign_values(float, float);
	void assign_values(float, float, float);
	float scale(int);
	float calc();
	bool ifsquare() { return (depth == height) && (depth == width);}
};
rect::rect() { //standard constructor
	width = 1;
	height = 1;
	depth = 1;
}
rect::rect(float w, float h, float d) { //for 3d case with volume
	width = w;
	height = h;
	depth = d;
}
rect::rect(float w, float h) { //for 2d case
	width = w;
	height = w;
}
void rect::assign_values(float w, float h) {
	width = w;
	height = h;
}
void rect::assign_values(float w, float h, float d) {
	width = w;
	height = h;
	depth = d;
}
float rect::calc() {
	if(depth != 0 && depth != 1) {
		return width * height * depth;
	}
	else {
		return width * height;
	}
}
float rect::scale(int scale) {
	width  *= scale;
	height *= scale;
	depth  *= scale;
	return calc();
}
void EToD() {
	float w, h, d;
	rect polygon;
		cout << "\n Enter dimensions (widht, height, dept), for area set depth to either 0 or 1\n\t Enter:";
		cin >> w >> h >> d;

		polygon.assign_values(w, h, d);

		if (polygon.ifsquare())
		{
			if (d > 1)
			{
				cout << "The volume of the square is " << polygon.calc() << " units";
			}
			else
			{
				cout << "The area of the square is " << polygon.calc() << " units";
			}

			cout << endl;
			cout << "Square scaled by (2 factors): " << polygon.scale(2) << " units" << endl;
		}
		else {
			if (d > 1)
			{
				cout << "The volume of the rectangle is " << polygon.calc() << " units";
			}
			else
			{
				cout << "The area of the rectangle is " << polygon.calc() << " units";
			}

			cout << endl << "Rectangle scaled by (2 factors): " << polygon.scale(2) << " units" << endl;
		}
		cout << endl;

}




// C -> B

class Person {
private:
	string firstname;
	string surname;
	string socialsecnumb;
	string adress;

public:
	Person(); //default constructor
	Person(string, string, string, string); //full ini constructor

	void set_name(string, string);
	void set_social_sec(string);
	void set_creds(string, string, string);
	void set_adress(string);
	string ret_firstname() { return firstname; }
	string ret_surname() { return surname; }
	string ret_social_sec() { return socialsecnumb; }
	string ret_adress() { return adress; }

};
Person::Person() {
	firstname = "";
	surname = "";
	socialsecnumb = "";
	adress = "";
}
Person::Person(string firstname_in, string surname_in, string socialsecnumb_in, string adress_in) {
	firstname = firstname_in;
	surname = surname_in;
	socialsecnumb = socialsecnumb_in;
	adress = adress_in;
}
void Person::set_name(string firstname_in, string surname_in) {
	firstname = firstname_in;
	surname = surname_in;
}
void Person::set_social_sec(string socialsecnumb_in) {
	socialsecnumb = socialsecnumb_in;
}
void Person::set_creds(string firstname_in, string surname_in, string socialsecnumb_in) {
	firstname = firstname_in;
	surname = surname_in;
	socialsecnumb = socialsecnumb_in;
}
void Person::set_adress(string adress_in) {
	adress = adress_in;
}


class BankAccount: public Person {

private:
	int accnumb;
	int balance;
public:
	BankAccount(); //default constructor, ini to 0
	BankAccount(int, int); //both accnumb and balance
	using Person::Person;
	void set_balance(int);
	void set_accnumb(int);
	int ret_balance();
	int ret_accnumb();


};
BankAccount::BankAccount() {
	balance = 0;
	accnumb = 0;
}
BankAccount::BankAccount(int accnumb_in, int balance_in){
	balance = balance_in;
	accnumb = accnumb_in;
}
void BankAccount::set_balance(int balance_in) {
	balance = balance_in;
}
void BankAccount::set_accnumb(int acc_in) {
	accnumb = acc_in;
}
int BankAccount::ret_accnumb() {
	return accnumb;
}
int BankAccount::ret_balance() {
	return balance;
}


class Employee: public BankAccount {
private:
	int prev_salary;
	int salary;
	int raise;

public:
	Employee();
	Employee(int, int);

	void set_salary(int);
	void set_raise(int);
	int ret_prev_salary() { return prev_salary;}
	int ret_salary() { return salary;}
	int ret_raise() { return raise;}
	using BankAccount::BankAccount;

};

Employee::Employee(){
	raise = 0;
	salary = 0;
	prev_salary = 0;
}

Employee::Employee(int salary_in, int raise_in){
	salary = salary_in;
	raise = raise_in;
}
void Employee::set_salary(int salary_in){
		salary = salary_in;
}
void Employee::set_raise(int raise_in) {
		raise = raise_in;
		salary = prev_salary;
		salary += raise;
}



void CToB() {

	string name, surname, socialnumb, adress;
	int balance, accnumb, salary, raise;
	cout << "Please enter your name, last name, soical Security Number and finally your adress.\n\t";
	cout << "Name: ";
	getline(cin, name);
	cout << "\n\t" << "Surname: ";
	getline(cin, surname);
	cout << "\n\t" << "Social Security number: ";
	getline(cin, socialnumb);
	cout << "\n\t" << "Adress: ";
	getline(cin, adress);


	//BankAccount acc1{ "Samuel", "Green Cheadle", "19991101-0479", "Lumagatan 11" };
	Employee acc1{ name, surname, socialnumb, adress};

	cout << endl << "Name: " << acc1.ret_firstname() << " " << acc1.ret_surname()
	<< "\nSocial Security Number: " << acc1.ret_social_sec() << "\nAdress: " << acc1.ret_adress() << endl;

	cout << "\tAccount number: ";
	cin >> accnumb;
	acc1.set_accnumb(accnumb);

	cout << "\tBalance: ";
	cin >> balance;
	acc1.set_balance(balance);

	cout << "Enter your monthly salary: ";
	cin >> salary;
	acc1.set_salary(salary);
	cout << "Enter your raise: ";
	cin >> raise;
	acc1.set_raise(raise);

	cout << "Account number: " << acc1.ret_accnumb() << "\nAccount Balance: " << acc1.ret_balance() << endl;
	cout << "Salary: " << acc1.ret_prev_salary() << "\nRaise: " << acc1.ret_raise() << "\nSalary after raise:" << acc1.ret_salary() << endl;


}

int main() {
	CToB();
	EToD();
	return 0;
}
