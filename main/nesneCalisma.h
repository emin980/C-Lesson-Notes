#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;

//class fonkasiriyukleme {
//public:
//	fonkasiriyukleme();
//	int sayininkaresi(int x);
//	double sayininkaresi(double x);
//	void printsayininkaresi();
//private:
//	int a;
//	double b;
//};

//template <class T>
//	T maximum(T value1,T value2,T value3){
//		T maximumValue = value1;
//		if (value2 > maximumValue) {
//			maximumValue = value2;
//		}
//
//		if (value3 > maximumValue) {
//			maximumValue = value3;
//		}
//		return maximumValue;
//	}
	

//class setget {
//	int sayi;
//public:
//	void setsayi(int a);
//	int getsayi();
//};

//class GradeBook {
//public:
//	void SetCourseName(string);
//	string GetCourseName();
//	void printCourseName();
//private:
//	string courseName;
//};

//class GradeBookConstructor {
//public:
//	GradeBookConstructor(string name);
//	void setCourseName(string name);
//	string getCourseName();
//	void printCourseName();
//private:
//	string courseName;
//};

//class Time {
//public:
//	Time();
//	void printStandart();
//	void printUniversal();
//	void setTime(int,int,int);
//private:
//	int hour;
//	int minute;
//	int second;
//};

//class Count {
//public:
//	void setX(int value);
//	void print();
//private:
//	int x;
//};

//class SalesPerson {
//public:
//	static const int monthsPerYear = 12;
//	SalesPerson();
//	void getSalesFromUser();
//	void setSales(int, double);
//	void printAnnualSales();
//private:
//	double totalAnnualSales();
//	double sales[monthsPerYear];
//};

//class Time2 {
//public:
//	Time2(int = 0, int = 0, int = 0);
//	void setTime(int, int, int);
//	void setHour(int);
//	void setMinute(int);
//	void setSecond(int);
//	int getHour();
//	int getMinute();
//	int getSecond();
//	void printUniversal();
//	void printStandart();
//private:
//	int hour;
//	int minute;
//	int second;
//};

//class CreateAndDestroy {
//public:
//	CreateAndDestroy(int,string);
//	~CreateAndDestroy();
//private:
//	int objectID;
//	string message;
//};

//class badTime {
//public:
//	badTime(int = 0, int = 0, int = 0);
//	void setTime(int, int, int);
//	int getHour();
//	int& badSetHour(int);
//private:
//	int hour;
//	int minute;
//	int second;
//};

//class constTime {
//public:
//	constTime(int = 0, int = 0,int=0);
//	void setTime(int, int, int);
//	void setHour(int);
//	void setMinute(int);
//	void setSecond(int);
//	int getHour() const;
//	int getMinute() const;
//	int getSecond() const;
//	void printUniversal() const;
//	void printStandart();
//private:
//	int hour, minute, second;
//};

//class Increment {
//public:
//	Increment(int,int);
//	void print() const;
//	void addIncrement();
//private:
//	int count;
//	const int increment;
//};

/*	COMPOSITION-----------------------------------------------------------------------------------*/
//class constDate {
//public:
//	static const int monthsPerYear = 12;
//	constDate(int=1,int=1,int=1900);
//	void print() const;
//	~constDate();
//private:
//	int month, day, year;
//	int checkDay(int) const;
//};
//
//class Employee {
//public:
//	Employee(const string &,const string &,const constDate &,const constDate &);
//	void print() const;
//	~Employee();
//private:
//	string firstname;
//	string lastname;
//	const constDate birthDate;
//	const constDate hireDate;
//};
//
//class Count {
//	friend void setX(Count&, int);
//public:
//	Count();
//	void print() const;
//private:
//	int x;
//};

//class Test {
//public:
//	Test(int = 0);
//	void print() const;
//private:
//	int x;
//};

//CASCADE KULLANIM-----------------------------------------------------
//class CascadethisTime{
//public:
//	CascadethisTime(int=0,int=0,int=0);
//	CascadethisTime& setTime(int, int, int);
//	CascadethisTime& setHour(int);
//	CascadethisTime& setMinute(int);
//	CascadethisTime& setSecond(int);
//	
//	int getHour() const;
//	int getMinute() const;
//	int getSecond() const;
//	void printUniversal() const;
//	void printStandart() const;
//private:
//	int hour, minute, second;
//};

//class staticornekEmployee {
//public:
//	staticornekEmployee(const string&,const string&);
//	~staticornekEmployee();
//	string getFirstName() const;
//	string getLastName() const;
//	static  int getCount();
//private:
//	string firstName;
//	string lastName;
//	static int count;
//};

//Miras Son hafta ------------------------------------------------------------------------------------------------


//date.h
//class datecomposition {
//public:
//	datecomposition(int = 1, int = 1, int = 1900);
//	void setDate(int, int, int);
//	int getDay();
//	int getMonth();
//	int getYear();
//	void printDate();
//private:
//	int day, month, year;
//};

//personel.h
//class personelcomposition {
//public:
//	personelcomposition(string f=" ",string l=" ");
//	void setPersonel(string first, string last);
//	string getFirst();
//	string getLast();
//	void print();
//private:
//	string firstName, lastName;
//};

//ogrenci.h
//class ogrencicomposition {
//public:
//	ogrencicomposition(string first = " ", string last = " ", int day = 1, int month = 1, int year = 1900, int pid = 100);
//	void setOgrenci(string first, string last, int day, int month, int year, int pid);
//	void Ogrenciprint();
//private:
//	personelcomposition name;
//	datecomposition tarih;
//	int OgrNo;
//
//};

//class ogrencicomposition {
//public:
//	ogrencicomposition(const personelcomposition &, const datecomposition &, int pid = 100);
//	void Ogrenciprint();
//private:
//	personelcomposition name;
//	datecomposition tarih;
//	int OgrNo;
//
//};

//*************************************V�ZELERDEN SONRAK� KISIM*************************************************
//POINTER MANTI�I

//class PointerStudent {
//public:
//	char name;
//	double gpa;
//	int ssn;
//	char grade;
//};

//class PointerClassExample_1{
//public:
//	void setX(int);
//	void print() const;
//private:
//	int x;
//};

//Dinamik degiskenler giris(Onemli) 
//NOT:Degiskenler program�n ko�umu esnas�nda yarat�l�yor.Sabitte ise program ko�madan �nce yarat�l�yor.

//Copy Constructor

//class pointerDataClass {
//public:
//	~pointerDataClass();
//	pointerDataClass(const pointerDataClass& otherObject);//Copy constructor
//	int x;
//	int lenP;
//	int* p;
//};

//class copyConstructor {
//public:
//	void print() const;
//	void setData();
//	void destroyP();
//	~copyConstructor();
//	copyConstructor(int sizeP = 10);
//	copyConstructor(const copyConstructor &Object);
//private:
//	int x;
//	int lenP;
//	int* p;
//};

//Operator Overloading Kavram�

class operatorOverLoading {
	friend ostream& operator<<(ostream&, const operatorOverLoading &);
	friend istream& operator>>(istream&, operatorOverLoading &);
private:
	string areaCode;
	string exchange;
	string line;
};

//OPERATOR ASIRI YUKLEME KAPSAMLI ORNEK

//class Array {
//	friend ostream& operator<<(ostream&, const Array&);
//	friend istream& operator>>(istream&, Array&);
//public:
//	Array(int = 10);
//	Array(const Array&);
//	~Array();
//	int getSize() const;
//	const Array& operator=(const Array&);
//	bool operator==(const Array&) const;
//	bool operator!=(const Array&) const;
//	int& operator[](int);
//private:
//	int size;
//	int* ptr;
//};

//ORNEK 2
//class Complex {
//private:
//	int real, imag;
//public:
//	Complex(int r = 0, int i = 0) { real = r;   imag = i; }
//
//	// This is automatically called when '+' is used with
//	// between two Complex objects c2(10,5) c1(2-4)
//	Complex operator + (Complex const& obj) { //c3=c2+c1
//		Complex res;
//		res.real = real + obj.real;
//		res.imag = imag + obj.imag;
//		return res;
//	}
//	void print() { cout << real << " + i" << imag << endl; }
//};

////////////////////////////////////////////////////////////////-----------ONEMLI-----------////////////////////////////////////////////////////////////////
//class bos {
//public:
//	bos(int,int);
//private:
//	int a, b;
//};
////////////////////////////////////////////////////////////////-----------ONEMLI BITTI-----------////////////////////////////////////////////////////////////

//Prefix ve Postfix a�r� y�kleme( prefix onceden art�m, postfix sonradan art�m oluyor.)
//Onceden art�m sonradan art�m i�in operatorlar ayr� ayr� a��r� y�klenen bir Date class'� tan�mlanacak bu g�n� 1 artt�racak ve 1 azaltacak bir class.
//Onceden art�mda parametre alm�yor ��nk� direkt nesne, fonksiyonu �a��r�yor.Date t�r�nden nesne1 nesnesi tan�mlans�n.
//prototip �u �ekilde Date& operator++(); Bu fonksiyonu derleyici �a��r�rken nesne1.operator++() ; �eklinde �a��racak.
//E�er global'de tan�mlasayd�k nesne parametre alacakt�.Nesne �zerinden �a��r�m yapmad���m�z i�in. Date& operator++(nesne1); derleyici de �a��r�rken operator++(nesne1); �eklinde �a��racak.
//Prefix ve Postfix fark�nda Derleyicinin anlamas� a��s�ndan Postfix ek anlams�z bir int parametre al�yor. Buna g�re prototip Date& operator++(int); oldu. derleyici �u �ekilde �a��racakt�.nesne1.operator++(0)
//E�er Postfix'i global'de �a��rsayd�k Date operator++(Date&,int) �eklinde prototipi olacakt�. operator++(nesne1,0); �eklinde �a��r�m olacakt�.
//Yukar�da farkedildi�i �zere & ile �a��rmad�k ��nk� sonradan art�m yapaca��m�z i�in nesnenin ilk de�erinin d�nmesi gerekiyor. ��eride ge�ici bir nesne olu�turup,
//Bu nesneye bizim nesnenin ilk halini at�yoruz.Amac�m�z nesnenin art�r�lm�� halini tutmak. Ayn� zamanda de�er ile d�nd�rd���m�z i�in bu art�rmadan �nceki de�eri silinecek.�rnekte g�rece�iz. 

//class Date {
//	friend ostream& operator<<(ostream&, const Date&);
//public:
//	Date(int m = 1, int d = 1, int y = 1900);
//	void setDate(int, int, int);
//	Date& operator++();
//	Date operator++(int);
//	const Date& operator+=(int);
//	static bool leapYear(int);
//	bool endOfMonth(int)const;
//private:
//	int month, day, year;
//	static const int days[];
//	void helpIncrement();
//};

//Rational Number(Rasyonel Say�)
//class RationalNumber {
//public:
//	RationalNumber(int=0,int= 1);
//	RationalNumber operator+(const RationalNumber&);
//	RationalNumber operator-(const RationalNumber&);
//	RationalNumber operator*(const RationalNumber&);
//	RationalNumber operator/(const RationalNumber&);
//	bool operator<(const RationalNumber&);
//	void printRational() const;
//
//private:
//	int numerator;
//	int denominator;
//	void reduction();
//};

//Polymorphism(Cok bi�imlilik, �oklu benze�im)
//Base s�n�f�n nesneleri ile t�retilmi� s�n�f�n nesnelerini i�aret edip, base class arac�l��� ile t�retilmi� s�n�fa yapt�rmak istediklerimizi yani �ye fonksiyonlar�n� kullanm�� olaca��z
//Bu i�aret etme virtual fonksiyonlar� arac�l��� ile olmaktad�r. Base s�n�f i�aret�isi veya referans� arac�l��� ile virtual fonksiyonlar� �a��r�rsak burada polymorphism yapm�� oluyoruz.
//Base s�n�f t�retilmi� s�n�f�n �ye fonksiyonlar�n� dinamik olarak kullanmakta.
//NOT: Base s�n�f�n nesnesi t�retilmi� s�n�f�n da bir nesnesidir. T�retilmi� bir s�n�f�n nesnesi ise Base s�n�f�n�n nesnesi olamaz.��nk� t�retilmi� s�n�fa yeni �zellikler eklemi� olabiliriz.

//class CommissionEmployee {
//public:
//	CommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);
//	void setFirstName(const string&);
//	string getFirstName() const;
//	void setLastName(const string&);
//	string getLastName() const;
//	void setSSN(const string&);
//	string getSSN() const;
//	void setGrossSales(double);
//	double getGrossSales() const;
//	void setCommissionRate(double);
//	double getCommissionRate() const;
//	//double earnings() const;
//	//void print()const;
//	virtual double earnings() const;
//	virtual void print()const;
//private:
//	string firstName, lastName, ssnNumber;
//	double grossSales;
//	double commissionRate;
//};
//
//class BasePlusCommissionEmployee:public CommissionEmployee {
//public:
//	BasePlusCommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);
//	void setBaseSalary(double);
//	double getBaseSalary()const;
//	double earnings() const; //Bunlara virtual koymuyorum ��nk�, zaten miras al�n�yor. 
//	void print() const;
//private:
//	double baseSalary;
//};

//---------------------------------------------------------------------------------------------------------------------------------
//Bir uygulama yapaca��z bu uygulamada Employee abstract s�n�f�ndan ,Salaried-Employee, Hourly-Employee, Commission-Employee, BasePlus-Commission-Employee s�n�flar� olu�turulup
//farkl� hesaplamalar yapaca��z.

//class Employee { //Abstract s�n�f
//public:
//	Employee(const string&, const string&, const string&);
//	void setFirstName(const string&);
//	string getFirstName() const;
//	void setLastName(const string&);
//	string getLastName() const;
//	void setSSN(const string&);
//	string getSSN() const;
//	virtual void print()const;
//	virtual double earnings() const = 0;
//private:
//	string firstName, lastName, ssnNumber;
//};
//
//class SalariedEmployee :public Employee { //Normal s�n�f
//public:
//	SalariedEmployee(const string&, const string&, const string&, double=0.0);
//	void setWeeklySalary(double);
//	double getWeeklySalary()const;
//	virtual void print()const;
//	virtual double earnings() const; //Normal s�n�f oldu�u i�in =0 yap�lmaz.
//private:
//	double weeklySalary;
//};
//
////NORMAL HourlyEmployee s�n�f�
//
//class HourlyEmployee :public Employee {
//public:
//	static const int hoursPerWeek = 168;
//	HourlyEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);
//	void setWage(double);
//	double getWage()const;
//	void setHours(double);
//	double getHours()const;
//	virtual double earnings() const;
//	virtual void print() const;
//private:
//	double wage, hours;
//};
//
////NORMAL CommissionEmployee s�n�f�
//
//class CommissionEmployee :public Employee {
//public:
//	CommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);
//	void setCommissionRate(double);
//	double getCommissionRate() const;
//	void setGrossSales(double);
//	double getGrossSales() const;
//	virtual double earnings()const;
//	virtual void print() const;
//private:
//	double grossSales;
//	double commissionRate;
//
//};
//
////NORMAL BASEPLUSCOMMISSION EMPLOYEE SINIFI (INDIRECT OLARAK EMPLOYEE'I MIRAS ALIYOR)
//
//class BasePlusCommissionEmployee :public CommissionEmployee {
//public:
//	BasePlusCommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);
//	void setBaseSalary(double);
//	double getBaseSalary() const;
//	virtual double earnings() const;
//	virtual void print() const;
//private:
//	double baseSalary;
//};

///////////////////////////////////////////////////////////////////////////
//Shape-TwoDimentionalShape-ThreeDimentionalShape-Circle-Cube Ornegi

//Shape S�n�f� Tan�m�
//class Shape {
//	friend ostream& operator<< (ostream&, Shape &);
//public:
//	Shape(double=0.0, double =0.0);
//	double getCenterX() const;
//	double getCenterY()const;
//	virtual void print() const = 0;
//protected:
//	double xCenter, yCenter;
//};
//
////TwoDimentionalShape S�n�f� Tan�m�
//
//class TwoDimentionalShape :public Shape { //cpp dosyas�na gerek yok-abstract s�n�f
//public:
//	TwoDimentionalShape(double x, double y):Shape(x,y){}
//	virtual double getArea()const = 0;
//};
//
////ThreeDimentionalShape S�n�f� Tan�m�
//
//class ThreeDimentionalShape :public Shape {//cpp dosyas�na gerek yok-abstract s�n�f
//public:
//	ThreeDimentionalShape(double x, double y) :Shape(x, y) {}
//	virtual double getArea()const = 0;
//	virtual double getVolume()const = 0;
//};
//
////Circle S�n�f� Tan�m�
//
//class Circle :public TwoDimentionalShape {
//public:
//	Circle(double=0.0, double = 0.0, double = 0.0);
//	virtual double getArea()const;
//	virtual double getRadius()const;
//	virtual void print() const;
//private:
//	double radius;
//};
//
////Cube S�n�f� Tan�m�
//
//class Cube :public ThreeDimentionalShape {
//public:
//	Cube(double = 0.0, double = 0.0, double = 0.0);
//	virtual void print() const;
//	virtual double getArea()const;
//	virtual double getVolume()const;
//	double getSideLength()const;
//private:
//	double sideLength;
//};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//CLASS TEMPLATES


//Genel bir stack class'� yapmak istiyoruz. Template Class yaparak �rne�i �al��t�raca��z. int char farketmeksizin de�erleri alacak ve stack'e itecek veya �ekecek bo� olup olmad���n� kontrol edecek.
//GENELLE�T�R�LMEM�� HAL�

//template<typename T>
//class Stack {
//public:
//	Stack(int = 10);
//	~Stack() {
//		delete[] stackPtr;
//	}
//	bool push(const T&);
//	bool pop(T&);
//	bool isEmpty()const {
//		return top == -1;
//	}
//	bool isFull()const {
//		return top == size - 1;
//	}
//private:
//	int size, top;
//	T* stackPtr;
//};
//
//template<typename T>
//Stack<T>::Stack(int s)
//	:size(s > 0 ? s : 10), top(-1), stackPtr(new T[size])
//{}
//
//template<typename T>
//bool Stack<T>::push(const T& pushValue) {
//	if (!isFull()) {
//		stackPtr[++top] = pushValue;
//		return true;
//	}
//	return false;
//}
//
//template<typename T>
//bool Stack<T>::pop(T& popValue) {
//	if (!isEmpty()) {
//		popValue = stackPtr[top--];
//		return true;
//	}
//	return false;
//}
//
////GENELLE�T�R�LM�� HAL� �STTEK� KODLARA EK
//
//template<typename T>
//void testStack(Stack<T>& theStack, T value, T increment, const string stackName) {
//	cout << "\n Pushing elements onto " << stackName << "\n";
//	while (theStack.push(value)) {
//		cout << value << " ";
//		value += increment;
//	}
//	cout << "\nStack is full. Cannot push " << value << "\n\nPopping elements from " << stackName << "\n";
//	while (theStack.pop(value)) {
//		cout << value << " ";
//	}
//	cout << "\n Stack is empty. Cannot pop " << endl;
//}