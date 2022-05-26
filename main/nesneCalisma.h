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

//*************************************VÝZELERDEN SONRAKÝ KISIM*************************************************
//POINTER MANTIÐI

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
//NOT:Degiskenler programýn koþumu esnasýnda yaratýlýyor.Sabitte ise program koþmadan önce yaratýlýyor.

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

//Operator Overloading Kavramý

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

//Prefix ve Postfix aþrý yükleme( prefix onceden artým, postfix sonradan artým oluyor.)
//Onceden artým sonradan artým için operatorlar ayrý ayrý aþýrý yüklenen bir Date class'ý tanýmlanacak bu günü 1 arttýracak ve 1 azaltacak bir class.
//Onceden artýmda parametre almýyor çünkü direkt nesne, fonksiyonu çaðýrýyor.Date türünden nesne1 nesnesi tanýmlansýn.
//prototip þu þekilde Date& operator++(); Bu fonksiyonu derleyici çaðýrýrken nesne1.operator++() ; þeklinde çaðýracak.
//Eðer global'de tanýmlasaydýk nesne parametre alacaktý.Nesne üzerinden çaðýrým yapmadýðýmýz için. Date& operator++(nesne1); derleyici de çaðýrýrken operator++(nesne1); þeklinde çaðýracak.
//Prefix ve Postfix farkýnda Derleyicinin anlamasý açýsýndan Postfix ek anlamsýz bir int parametre alýyor. Buna göre prototip Date& operator++(int); oldu. derleyici þu þekilde çaðýracaktý.nesne1.operator++(0)
//Eðer Postfix'i global'de çaðýrsaydýk Date operator++(Date&,int) þeklinde prototipi olacaktý. operator++(nesne1,0); þeklinde çaðýrým olacaktý.
//Yukarýda farkedildiði üzere & ile çaðýrmadýk çünkü sonradan artým yapacaðýmýz için nesnenin ilk deðerinin dönmesi gerekiyor. Ýçeride geçici bir nesne oluþturup,
//Bu nesneye bizim nesnenin ilk halini atýyoruz.Amacýmýz nesnenin artýrýlmýþ halini tutmak. Ayný zamanda deðer ile döndürdüðümüz için bu artýrmadan önceki deðeri silinecek.Örnekte göreceðiz. 

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

//Rational Number(Rasyonel Sayý)
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

//Polymorphism(Cok biçimlilik, çoklu benzeþim)
//Base sýnýfýn nesneleri ile türetilmiþ sýnýfýn nesnelerini iþaret edip, base class aracýlýðý ile türetilmiþ sýnýfa yaptýrmak istediklerimizi yani üye fonksiyonlarýný kullanmýþ olacaðýz
//Bu iþaret etme virtual fonksiyonlarý aracýlýðý ile olmaktadýr. Base sýnýf iþaretçisi veya referansý aracýlýðý ile virtual fonksiyonlarý çaðýrýrsak burada polymorphism yapmýþ oluyoruz.
//Base sýnýf türetilmiþ sýnýfýn üye fonksiyonlarýný dinamik olarak kullanmakta.
//NOT: Base sýnýfýn nesnesi türetilmiþ sýnýfýn da bir nesnesidir. Türetilmiþ bir sýnýfýn nesnesi ise Base sýnýfýnýn nesnesi olamaz.Çünkü türetilmiþ sýnýfa yeni özellikler eklemiþ olabiliriz.

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
//	double earnings() const; //Bunlara virtual koymuyorum çünkü, zaten miras alýnýyor. 
//	void print() const;
//private:
//	double baseSalary;
//};

//---------------------------------------------------------------------------------------------------------------------------------
//Bir uygulama yapacaðýz bu uygulamada Employee abstract sýnýfýndan ,Salaried-Employee, Hourly-Employee, Commission-Employee, BasePlus-Commission-Employee sýnýflarý oluþturulup
//farklý hesaplamalar yapacaðýz.

//class Employee { //Abstract sýnýf
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
//class SalariedEmployee :public Employee { //Normal sýnýf
//public:
//	SalariedEmployee(const string&, const string&, const string&, double=0.0);
//	void setWeeklySalary(double);
//	double getWeeklySalary()const;
//	virtual void print()const;
//	virtual double earnings() const; //Normal sýnýf olduðu için =0 yapýlmaz.
//private:
//	double weeklySalary;
//};
//
////NORMAL HourlyEmployee sýnýfý
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
////NORMAL CommissionEmployee sýnýfý
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

//Shape Sýnýfý Tanýmý
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
////TwoDimentionalShape Sýnýfý Tanýmý
//
//class TwoDimentionalShape :public Shape { //cpp dosyasýna gerek yok-abstract sýnýf
//public:
//	TwoDimentionalShape(double x, double y):Shape(x,y){}
//	virtual double getArea()const = 0;
//};
//
////ThreeDimentionalShape Sýnýfý Tanýmý
//
//class ThreeDimentionalShape :public Shape {//cpp dosyasýna gerek yok-abstract sýnýf
//public:
//	ThreeDimentionalShape(double x, double y) :Shape(x, y) {}
//	virtual double getArea()const = 0;
//	virtual double getVolume()const = 0;
//};
//
////Circle Sýnýfý Tanýmý
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
////Cube Sýnýfý Tanýmý
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


//Genel bir stack class'ý yapmak istiyoruz. Template Class yaparak örneði çalýþtýracaðýz. int char farketmeksizin deðerleri alacak ve stack'e itecek veya çekecek boþ olup olmadýðýný kontrol edecek.
//GENELLEÞTÝRÝLMEMÝÞ HALÝ

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
////GENELLEÞTÝRÝLMÝÞ HALÝ ÜSTTEKÝ KODLARA EK
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