#include "nesneCalisma.h"
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip> //Time classý için
using namespace std;
//fonkasiriyukleme::fonkasiriyukleme() {
//	a = 5;
//	b = 5.5;
//}
//int fonkasiriyukleme::sayininkaresi(int x) {
//	return x * x;
//}
//double fonkasiriyukleme::sayininkaresi(double y) {
//	return y * y;
//}
//void fonkasiriyukleme::printsayininkaresi(){
//	cout << "Cagrilan fonksiyon sayininkaresi()\n";
//	cout<< "Int "<<a<<" sayinin karesi:" << sayininkaresi(a)<< "\n"<< "Double "<<b<<" sayinin karesi: " << sayininkaresi(b);
//
//}

//TEMPLATE MAINDE DEVAM EDIYOR.


//void setget::setsayi(int a) {
//	sayi = a;
//}
//
//int setget::getsayi() {
//	return sayi;
//}

//void GradeBook::SetCourseName(string name) {
//	courseName = name;
//}
//
//string GradeBook::GetCourseName() {
//	return courseName;
//}
//
//void GradeBook::printCourseName() {
//	cout << "CourseName: " << GetCourseName();
//}

//GradeBookConstructor::GradeBookConstructor(string name) {
//	setCourseName(name);
//	printCourseName();
//}
//
//void GradeBookConstructor::setCourseName(string name) {
//	courseName = name;
//}
//string GradeBookConstructor::getCourseName() {
//	return courseName;
//}
//
//void GradeBookConstructor::printCourseName() {
//	cout << "CourseName is: " << " " << courseName;
//}

//Time::Time() {
//	hour = minute = second = 0;
//}
//
//void Time::setTime(int h, int m, int s) {
//	hour = (h >=0 && h < 24) ? h : 0;
//	minute = (m >= 0 && m < 60) ? m : 0;
//	second = (s >= 0 && s < 60) ? s : 0;
//}
//void Time::printStandart() {
//	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? " AM" : " PM");
//}
//void Time::printUniversal() {
//	cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
//}

//void Count::setX(int value) {
//	x = value;
//}
//
//void Count::print() {
//	cout << x << endl;
//}

//SalesPerson::SalesPerson() {
//	for (int i = 0; i < 12; i++) {
//		sales[i] = 0.0;
//	}
//}
//void SalesPerson::getSalesFromUser() {
//	double salesFigure;
//	for (int i = 1; i <= monthsPerYear; i++) {
//		cout << "Enter Sales amount for month " << i << ":";
//		cin >> salesFigure;
//		setSales(i, salesFigure);
//	}
//}
//void SalesPerson::setSales(int month, double amount) {
//	if (month >= 1 && month <= monthsPerYear && amount > 0) {
//		sales[month - 1] = amount;
//	}
//	else {
//		cout << "invalid month or salesFigure\n";
//	}
//}
//void SalesPerson::printAnnualSales() {
//	cout << setprecision(2) << fixed
//	<< "\n The total annual Sales are: $" << totalAnnualSales();
//}
//
//double SalesPerson::totalAnnualSales() {
//	double total=0.0;
//	for (int i = 0; i < monthsPerYear; i++) {
//		total += sales[i];
//	}
//	return total;
//}


//Time2::Time2(int hour, int minute, int second) {
//setTime(hour, minute, second);
//}
//void Time2::setTime(int hour, int minute, int second) {
//	setHour(hour);
//	setMinute(minute);
//	setSecond(second);
//}
//void Time2::setHour(int h) {
//	hour = (h >= 0 && h < 24) ? h : 0;
//}
//void Time2::setMinute(int m){
//	minute = (m >= 0 && m < 60) ? m : 0;
//}
//void Time2::setSecond(int s){
//	second = (s >= 0 && s < 60) ? s : 0;
//}
//int Time2::getHour() {
//	return hour;
//}
//int Time2::getMinute() {
//	return minute;
//}
//int Time2::getSecond() {
//	return second;
//}
//void Time2::printUniversal() {
//	cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond();
//}
//void Time2::printStandart() {
//	cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM");
//}

//CreateAndDestroy::CreateAndDestroy(int ID,string messageString) {
//	objectID = ID;
//	message = messageString;
//	cout << "Object" << objectID << "      Constructor runs     " << message << endl;
//	cout << "--------------------------------------------------" << endl;
//}
//CreateAndDestroy::~CreateAndDestroy() {
//	cout << (objectID == 1 || objectID == 6 ?  "\n" : "");
//	cout << "Object " << objectID << "          Destructor   runs    " << message << endl;
//	cout << "--------------------------------------------------" << endl;
//}

//badTime::badTime(int h, int m, int s) {
//	setTime(h, m, s);
//}
//void badTime::setTime(int h, int m, int s) {
//	hour = (h >= 0 && h < 24) ? h : 0;
//	minute = (m >= 0 && m < 60) ? m : 0;
//	second = (s >= 0 && s < 60) ? s : 0;
//}
//int badTime::getHour() {
//	return hour;
//}
//int& badTime::badSetHour(int hh) {
//	hour = (hh >= 0 && hh < 24) ? hh : 0;
//	return hour;
//}

//constTime::constTime(int hour, int minute, int second) {
//	setTime(hour, minute, second);
//}
//void constTime::setTime(int h, int m, int s) {
//	setHour(h);
//	setMinute(m);
//	setSecond(s);
//}
//void constTime::setHour(int hh) {
//	hour = (hh >= 0 && hh < 24) ? hh : 0;
//}
//void constTime::setMinute(int mn) {
//	minute = (mn >= 0 && mn < 60) ? mn : 0;
//}
//void constTime::setSecond(int ss) {
//	second = (ss >= 0 && ss < 60) ? ss : 0;
//}
//
//int constTime::getHour() const {
//	return hour;
//}
//int constTime::getMinute() const {
//	return minute;
//}
//int constTime::getSecond() const {
//	return second;
//}
//
//void constTime::printUniversal() const{
//	cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":" <<setw(2)<< getSecond();
//}
//void constTime::printStandart() {
//	cout << ((getHour() == 0 || getHour()) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM");
//}

//Increment::Increment(int c = 0, int i = 1)
//	:increment(i)
//{
//	count = c;
//}
//
//void Increment::print() const {
//	cout << "count = " << count << ", increment = " << increment << endl;
//}
//
//void Increment::addIncrement() {
//	count += increment;
//}

//	COMPOSITION-----------------------------------------------------------------------------------
 
//constDate::constDate(int mn,int dy,int yr ) {
//	if (mn > 0 && mn <= monthsPerYear)
//		month = mn;
//	else {
//		month = 1;
//		cout << "Invalid month (" << mn << ") set to 1";
//	}
//	year = yr;
//	day = checkDay(dy);
//	cout << "Date object constructor for date: ";
//	print();
//	cout << endl;
//}
//constDate::~constDate() {
//	cout << "Date object destructor for date";
//	print();
//	cout << endl;
//}
//void constDate::print() const {
//	cout << month << '/' << day << "/" << year;
//}
//int constDate::checkDay(int testDay) const {
//	static const int daysPerMonths[monthsPerYear + 1] = { 0,31,28,31,30,31,30,31,30,31,31,30,31 };
//	if (testDay > 0 && testDay <= daysPerMonths[month])
//		return testDay;
//	if (month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
//		return testDay;
//	cout << "Invalid Day(" << testDay << ") set to 1.\n";
//	return 1;
//}
//
//Employee::Employee(const string& first, const string& last, const constDate& dateOfBirth, const constDate& dateOfHire)
//	:firstname(first), lastname(last), birthDate(dateOfBirth), hireDate(dateOfHire)
//{
//	cout << "Employee object constructor: " << firstname << ' ' << lastname << endl;
//}
//
//Employee::~Employee() {
//	cout << "Employee object destructor: " << firstname << " " << lastname << endl;
//}
//
//void Employee::print() const {
//	cout << "FirstName: " << firstname << " " << "LastName: " << lastname << " " << "Hired:"; hireDate.print();
//	cout << "Birthday: ";
//	birthDate.print();
//	cout << endl;
//}
//
//Count::Count()
//	:x(0)
//{}
//
//void Count::print() const{
//	cout << x << endl;
//}
//
//void setX(Count& a, int val) {
//	a.x = val;
//}

//Test::Test(int value) 
//	:x(value)
//{}
//
//void Test::print() const {
//	cout << "          x=" << x;
//	cout << "\n this->x=" << this->x;
//	cout << "\n(*this).x="<<(*this).x;
//}


/*CASCADE KULLANIM-----------------------------------------------------*/
//CascadethisTime::CascadethisTime(int hr, int min, int sec) {
//	setTime(hr, min, sec);
//}
//CascadethisTime& CascadethisTime::setTime(int h, int m, int s) {
//	setHour(h);
//	setMinute(m);
//	setSecond(s);
//	return *this;
//}
//CascadethisTime& CascadethisTime::setHour(int h) {
//	hour = (h >= 0 && h < 24) ? h : 0;
//	return *this;
//}
//CascadethisTime& CascadethisTime::setMinute(int m) {
//	minute = (m >= 0 && m < 60) ? m : 0;
//	return *this;
//}
//CascadethisTime& CascadethisTime::setSecond(int s) {
//	second = (s >= 0 && s < 60) ? s : 0;
//	return *this;
//}
//
//int CascadethisTime::getHour() const {
//	return hour;
//}
//int CascadethisTime::getMinute() const {
//	return minute;
//}
//int CascadethisTime::getSecond() const {
//	return second;
//}
//void CascadethisTime::printUniversal() const {
//	cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2)<<second;
//}
//void CascadethisTime::printStandart() const {
//	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? " AM" : " PM");
//}


//int staticornekEmployee::count = 0; //direkt deðer atamasý yapýldý
//
//staticornekEmployee::staticornekEmployee(const string& first, const string& last)
//	:firstName(first),lastName(last)
//{
//	++count;
//	cout << "staticornekEmployee constructor for " << firstName << " " << lastName << " called." << endl;
//}
//staticornekEmployee::~staticornekEmployee() {
//	cout << "~staticornekEmployee destructor for " << firstName << " " << lastName << " called" << endl;
//	--count;
//}
//string staticornekEmployee::getFirstName() const {
//	return firstName;
//}
//string staticornekEmployee::getLastName() const {
//	return lastName;
//}
//int staticornekEmployee::getCount() { //baþýna static yazýlmadý
//	return count;
//}

//Miras Son hafta ------------------------------------------------------------------------------------------------

//date.cpp
//datecomposition::datecomposition(int d, int m, int y) {
//	setDate(d, m, y);
//}
//void datecomposition::setDate(int dd, int mm, int yy) {
//	day = (dd >= 0 && dd <= 31) ? dd : 0;
//	month = (mm >= 0 && mm <= 12) ? mm : 0;
//	year = (yy >= 0 && yy <= 9999) ? yy : 0;
//}
//int datecomposition::getDay() {
//	return day;
//}
//int datecomposition::getMonth() {
//	return month;
//}
//int datecomposition::getYear() {
//	return year;
//}
//void datecomposition::printDate() {
//	cout << setfill('0') << setw(2) << day << "/" << setw(2) << month << "/" << setw(4) << year << endl;
//}

//personel.cpp

//personelcomposition::personelcomposition(string first, string last) {
//	setPersonel(first, last);
//}
//void personelcomposition::setPersonel(string first, string last) {
//	firstName = first;
//	lastName = last;
//}
//
//void personelcomposition::print() {
//	cout << firstName << " "<<lastName << endl;
//}
//string personelcomposition::getFirst() {
//	return firstName;
//}
//string personelcomposition::getLast() {
//	return lastName;
//}

//1.Composition
//ogrenci.cpp

//ogrencicomposition::ogrencicomposition(string first, string last, int day, int month, int year, int pid)
//:name(first, last),tarih(day,month,year)
//{
//	OgrNo = pid;
//}
//
//void ogrencicomposition::Ogrenciprint() {
//	name.print();
//	tarih.printDate();
//	cout << OgrNo << endl;
//}

//2.Composition
//ogrenci.cpp

//ogrencicomposition::ogrencicomposition(const personelcomposition&isim, const datecomposition&d_tarih, int pid ) 
//	:name(isim),tarih(d_tarih)
//{
//	OgrNo = pid;
//}
//void ogrencicomposition::Ogrenciprint() {
//	name.print();
//	tarih.printDate();
//	cout << OgrNo;
//}

//*************************************VÝZELERDEN SONRAKÝ KISIM*************************************************
//POINTER MANTIÐI

//void PointerClassExample_1::setX(int a) {
//	x = a;
//}
//
//void PointerClassExample_1::print() const{
//	cout << "Girdiginiz deger setlendi ve ekrana bastiriliyor.: " << x<<endl;
//}

//Copy Constructor
//pointerDataClass::~pointerDataClass() {
//	//delete[] p;
//}

//void copyConstructor::print() const {
//	cout << "x= " << x << endl;
//	cout << "p= " << p << endl;
//	for (int i = 0; i < lenP; i++)
//		cout << p[i] <<" ";
//	cout << endl;
//}
//
//void copyConstructor::setData() {
//	cout << "Enter an integer for x:";
//	cin >> x;
//	cout << endl;
//	cout << "Enter" << lenP << " numbers: ";
//	for (int i = 0; i < lenP; i++)
//		cin >> p[i];
//	cout << endl;
//}
//
//void copyConstructor::destroyP() {
//	lenP = 0;
//	delete[] p;
//	p = NULL;
//}
//
//copyConstructor::copyConstructor(int sizeP) {
//	x = 0;
//	if (sizeP <= 0) {
//		cout << "Array size  pozitif deger olmali!" << endl;
//		lenP = 10;
//	}
//	else {
//		lenP = sizeP;
//	}
//	p = new int[lenP];
//}
//
//copyConstructor::~copyConstructor() {
//	delete [] p;
//}
//
//copyConstructor::copyConstructor(const copyConstructor& object) {
//	x = object.x;
//	lenP = object.lenP;
//	p = new int[lenP];
//	for (int i = 0; i < lenP; i++)
//		p[i] = object.p[i];
//}

//OPERATOR ASIRI YUKLEME

ostream& operator<<(ostream& output, const operatorOverLoading& number) {
	output << "(" << number.areaCode << ")" << number.exchange << "-" << number.line;
	return output;
}

istream& operator>>(istream& input, operatorOverLoading& number) {
	input.ignore();
	input >> setw(3) >> number.areaCode;
	input.ignore(2);
	input >> setw(3) >> number.exchange;
	input.ignore();
	input >> setw(5) >> number.line;
	return input;
}

//OPERATOR ASIRI YUKLEME KAPSAMLI ORNEK


//Constructor
//Array::Array(int arraySize) {
//	size = (arraySize > 0 ? arraySize : 10);
//	ptr = new int[size];
//	for (int i = 0; i < size; i++) {
//		ptr[i] = 0;
//	}
//}
////CopyConstructor
//Array::Array(const Array &arrayToCopy) 
//	:size(arrayToCopy.size)
//{
//	ptr = new int[size];
//	for (int i = 0; i < size; i++) {
//		ptr[i] = arrayToCopy.ptr[i];
//	}
//}
////Destructor
//Array::~Array() {
//	delete[] ptr;
//}
////Getsize
//int Array::getSize() const {
//	return size;
//}
////= aþýrý yükleme
//const Array &Array::operator=(const Array& right) { A=B
//	if (&right != this) {
//		if (size != right.size) {
//			delete[] ptr;
//			size = right.size;
//			ptr = new int[size];
//		}
//		for (int i = 0; i < size; i++)
//			ptr[i] = right.ptr[i];
//	}
//	return *this; //cascade caðýrým için
//}
////== aþýrý yükleme
//bool Array::operator==(const Array&right) const {
//	if (size != right.size)
//		return false;
//	for (int i = 0; i < size; i++)
//		if (ptr[i] != right.ptr[i]) {
//			return false;
//		}
//	return true;
//}
////[] aþýrý yükleme
//int &Array::operator[](int subscript) {
//	if (subscript < 0 || subscript >= size) {
//		cerr << "\n Error: Subscript" << subscript << "Out of range" << endl;
//		exit(1);
//	}
//	return ptr[subscript];
//}
////!= aþýrý yükleme
//bool Array::operator!=(const Array& right) const {
//	return !(*this == right);
//}
////>> aþýrý yükleme
//istream& operator>>(istream& input, Array& a) {
//	for (int i = 0; i < a.size; i++) {
//		input >> a.ptr[i];
//	}
//	return input;
//}
////<< aþýrý yükleme
//ostream& operator<<(ostream& output, const Array& a) {
//for (int i = 0; i < a.size; i++) {
//	output << setw(12) << a.ptr[i];
//	if ((i + 1) % 4 == 0) {
//		output << endl;
//	}
//	if (i % 4 != 0)
//		output << endl;
//	}
//return output;
//}

////////////////////////////////////////////////////////////////-----------ONEMLI-----------////////////////////////////////////////////////////////////////
//bos::bos(int x,int y) {
//	a = x;
//	b = y;
//	cout << "a: " << a << "\nb:" << b << endl;
//}
////////////////////////////////////////////////////////////////-----------ONEMLI BITTI-----------////////////////////////////////////////////////////////////

//Prefix ve Postfix aþrý yükleme( prefix onceden artým, postfix sonradan artým oluyor.)

//bool Date::endOfMonth(int testDay)const {A++ ++A
//	if (month == 2 && leapYear(year))
//		return testDay == 29;
//	else
//		return testDay == days[month];
//}
//void Date::helpIncrement() {
//	if (!endOfMonth(day))
//		day++;
//	else if (month < 12) {
//		month++; day = 1;
//	}
//	else {
//		year++;
//		month = 1;
//		day = 1;
//	}
//}
//const int Date::days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
//Date::Date(int m, int d, int y) {
//	setDate(m, d, y);
//}
//void Date::setDate(int mm, int dd, int yy) {
//	month = (mm >= 1 && mm <= 12) ? mm : 1;
//	year = (yy >= 1900 && yy <= 2100) ? yy : 1900;
//	if (month == 2 && leapYear(year))
//		day = (dd >= 1 && dd <= 29) ? dd : 1;
//	else {
//		day = (dd >= 1 && dd <= days[month]) ? dd : 1;
//	}
//}
//Date& Date::operator++(){ //prefix
//	helpIncrement();
//	return *this;
//}
//Date Date::operator++(int){ //postfix
//	Date temp = *this;
//	helpIncrement();
//	return temp;
//}
//const Date& Date::operator+=(int additionalDays) {
//	for (int i = 0; i < additionalDays; i++) {
//		helpIncrement();
//	}
//	return *this;//enable cascade
//}
// bool Date::leapYear(int testYear) {
//	 if (testYear % 400 == 0 || (testYear % 100 != 0 && testYear % 4 == 0))
//		 return true;
//	 else 
//		 return false;
//}
//
// ostream& operator<<(ostream& output, const Date& d) {
//	 static string monthName[13] = { "","Ocak","Subat","Mart","Nisan","Mayis","Haziran","Temmuz","Agustos","Eylul","Ekim","Kasim","Aralik" };
//	 output << d.day<<" "<< monthName[d.month] << " " << d.year;
//	 return output;
// }

//RationalNumber::RationalNumber(int  n, int d) {
//	numerator = n;
//	denominator = (d > 0) ? d : 1;
//	reduction();
//}
//RationalNumber RationalNumber::operator+(const RationalNumber &a) {
//	return RationalNumber(numerator * a.denominator + denominator * a.numerator, denominator * a.denominator);
//}
//RationalNumber RationalNumber::operator-(const RationalNumber&b){
//	return RationalNumber(numerator * b.denominator - denominator * b.numerator, denominator * b.denominator);
//}
//RationalNumber RationalNumber::operator*(const RationalNumber&x) {
//	return RationalNumber(numerator * x.numerator, denominator * x.denominator);
//}
//RationalNumber RationalNumber::operator/(const RationalNumber&y) {
//	if (y.numerator !=0) {
//		return RationalNumber(numerator * y.denominator, denominator * y.numerator);
//	}
//	else { cout << "Payda 0 hatasi!" << endl; }
//}
//void RationalNumber::printRational() const {
//	if (numerator == 0) {
//		cout << numerator;
//	}
//	else if (denominator == 1)
//		cout << numerator;
//	else {cout<<numerator << "/" << denominator; }
//}
//
//bool RationalNumber::operator<(const RationalNumber&b) {
//	double thisval = static_cast<double>(numerator / denominator);
//	double bVal = static_cast<double>(b.numerator / b.denominator);
//	if (thisval < bVal) {
//		return true;
//	}
//	else return false;
//}
//
//void RationalNumber::reduction() {
//	int largest, gcd = 1;
//	largest = (numerator > denominator) ? numerator : denominator;
//	for (int loop = 2; loop <= largest; loop++) {
//		if (numerator % loop == 0 && denominator % loop == 0)
//			gcd = loop;
//	}
//	numerator /= gcd;
//	denominator /= gcd;
//	
//}

//Polymorphism(Cok biçimlilik, çoklu benzeþim)
//Base sýnýfýn nesneleri ile türetilmiþ sýnýfýn nesnelerini iþaret edip, base class aracýlýðý ile türetilmiþ sýnýfa yaptýrmak istediklerimizi yani üye fonksiyonlarýný kullanmýþ olacaðýz
//Bu iþaret etme virtual fonksiyonlarý aracýlýðý ile olmaktadýr. Base sýnýf iþaretçisi veya referansý aracýlýðý ile virtual fonksiyonlarý çaðýrýrsak burada polymorphism yapmýþ oluyoruz.
//Base sýnýf türetilmiþ sýnýfýn üye fonksiyonlarýný dinamik olarak kullanmakta.
//NOT: Base sýnýfýn nesnesi türetilmiþ sýnýfýn da bir nesnesidir. Türetilmiþ bir sýnýfýn nesnesi ise Base sýnýfýnýn nesnesi olamaz.Çünkü türetilmiþ sýnýfa yeni özellikler eklemiþ olabiliriz.

//CommissionEmployee::CommissionEmployee(const string& first, const string& last, const string& ssn, double sales, double rate) 
//	:firstName(first), lastName(last), ssnNumber(ssn)
//{
//	setGrossSales(sales);
//	setCommissionRate(rate);
//}
//void CommissionEmployee::setFirstName(const string& first) {
//	firstName = first;
//}
//string CommissionEmployee::getFirstName() const {
//	return firstName;
//}
//void CommissionEmployee::setLastName(const string&last) {
//	lastName = last;
//}
//string CommissionEmployee::getLastName() const {
//	return lastName;
//}
//void CommissionEmployee::setSSN(const string& ssn) {
//	ssnNumber = ssn;
//}
//string CommissionEmployee::getSSN() const {
//	return ssnNumber;
//}
//void CommissionEmployee::setGrossSales(double sales) {
//	grossSales = (sales < 0.0) ? 0.0 : sales;
//}
//double CommissionEmployee::getGrossSales()const {
//	return grossSales;
//}
//void CommissionEmployee::setCommissionRate(double rate) {
//	commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
//}
//double CommissionEmployee::getCommissionRate() const{
//	return commissionRate;
//}
//double CommissionEmployee::earnings() const {
//	return getCommissionRate() * getGrossSales();
//}
//
//void CommissionEmployee::print() const {
//	cout << "Commission Employee: " << getFirstName() << " " << getLastName() << "\n ssn number: " << getSSN() <<"\n Gross Sales: "<<getGrossSales() <<"\n commission rate: " << getCommissionRate();
//}

//////////////////////////////////////////////////////////////////////////////////

//BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first, const string& last, const string& ssn, double sales, double rate, double salary)
//	:CommissionEmployee(first, last, ssn, sales, rate)
//{
//	setBaseSalary(salary);
//}
//void BasePlusCommissionEmployee::setBaseSalary(double salary) {
//	baseSalary = (salary < 0.0) ? 0.0 : salary;
//}
//double BasePlusCommissionEmployee::getBaseSalary()const {
//	return baseSalary;
//}
//double BasePlusCommissionEmployee::earnings() const {
//	return getBaseSalary() + CommissionEmployee::earnings();
//}
//void BasePlusCommissionEmployee::print() const {
//	cout << "Turetilmis Nesne ";
//	
//	CommissionEmployee::print();
//	cout << "\n base Salary: " << getBaseSalary();
//
//}

//---------------------------------------------------------------------------------------------------------------------------------
//Bir uygulama yapacaðýz bu uygulamada Employee abstract sýnýfýndan ,Salaried-Employee, Hourly-Employee, Commission-Employee, BasePlus-Commission-Employee sýnýflarý oluþturulup
//farklý hesaplamalar yapacaðýz.

//ABSTRACT EMPLOYEE SINIFI
//Employee::Employee(const string& first, const string& last, const string& ssn) 
//	:firstName(first),lastName(last),ssnNumber(ssn)
//{
//}
//void Employee::setFirstName(const string& first) {
//	firstName = first;
//}
//string Employee::getFirstName() const {
//	return firstName;
//}
//void Employee::setLastName(const string&last) {
//	lastName = last;
//}
//string Employee::getLastName() const {
//	return lastName;
//}
//void Employee::setSSN(const string& ssn) {
//	ssnNumber = ssn;
//}
//string Employee::getSSN() const {
//	return ssnNumber;
//}
//void Employee::print()const {
//	cout << getFirstName() << " " << getLastName() << "\n SSN: " << getSSN();
//}
////NORMAL SalariedEmployee sýnýfý
//SalariedEmployee::SalariedEmployee(const string& first, const string& last, const string& ssn, double salary) 
//	:Employee(first,last,ssn)
//{
//	setWeeklySalary(salary);
//}
//void SalariedEmployee::setWeeklySalary(double salary) {
//	weeklySalary = (salary < 0.0) ? 0.0 : salary;
//}
//double SalariedEmployee::getWeeklySalary()const {
//	return weeklySalary;
//}
//void SalariedEmployee::print()const {
//	cout << "Salaried Employee: ";
//	Employee::print();
//	cout << "\n weekly salary: " << getWeeklySalary();
//}
//double SalariedEmployee::earnings() const {
//	return getWeeklySalary();
//}
//
////NORMAL HourlyEmployee sýnýfý
//
//HourlyEmployee::HourlyEmployee(const string&first, const string&last, const string&ssn, double wage,double hours) 
//:Employee(first, last, ssn)
//{
//	setWage(wage);
//	setHours(hours);
//}
//void HourlyEmployee::setWage(double hourlyWage) {
//	wage = (hourlyWage < 0.0) ? 0.0 : hourlyWage;
//}
//double HourlyEmployee::getWage()const {
//	return wage;
//}
//void HourlyEmployee::setHours(double hour) {
//	hours = (((hour >= 0.0) && hour <= hoursPerWeek)) ? hour : 0.0;
//}
//double HourlyEmployee::getHours()const {
//	return hours;
//}
//double HourlyEmployee::earnings() const {
//	if (getHours() <= 40)
//		return getWage() * getHours();
//	else
//		return 40 * getWage() + ((getHours() - 40) * getWage() * 1.5);
//}
//void HourlyEmployee::print() const {
//	cout << "Hourly Employee: ";
//	Employee::print();
//	cout << "\n Hourly Wage: " << getWage() << ";\nhours worked" <<getHours()<<endl;
//}
//
////NORMAL CommissionEmployee sýnýfý
//
//CommissionEmployee::CommissionEmployee(const string& first, const string&last, const string&ssn, double Sales, double Rate)
//:Employee(first, last, ssn)
//{
//	setGrossSales(Sales);
//	setCommissionRate(Rate);
//}
//void CommissionEmployee::setCommissionRate(double rate) {
//	commissionRate = ((rate > 0.0 && rate < 1.0) ? rate : 0.0);
//}
//double CommissionEmployee::getCommissionRate() const {
//	return commissionRate;
//}
//void CommissionEmployee::setGrossSales(double sales) {
//	grossSales = (sales < 0.0) ? 0.0 : sales;
//}
//double CommissionEmployee::getGrossSales() const {
//	return grossSales;
//}
//double CommissionEmployee::earnings()const {
//	return getCommissionRate() * getGrossSales();
//}
//void CommissionEmployee::print() const {
//	cout << "Commission Employee: ";
//	Employee::print();
//	cout << "\nGross Sales: " << getGrossSales() << "; \ncommission rate: " << getCommissionRate();
//}
//
////NORMAL BASEPLUSCOMMISSION EMPLOYEE SINIFI (INDIRECT OLARAK EMPLOYEE'I MIRAS ALIYOR)
//BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string&first, const string&last, const string&ssn, double sales, double rate, double salary)
//	:CommissionEmployee(first,last,ssn,sales,rate)
//{
//	setBaseSalary(salary);
//}
//void BasePlusCommissionEmployee::setBaseSalary(double salary) {
//	baseSalary = (salary < 0.0) ? 0.0 : salary;
//}
//double BasePlusCommissionEmployee::getBaseSalary() const {
//	return baseSalary;
//}
//double BasePlusCommissionEmployee::earnings() const {
//	return getBaseSalary() + CommissionEmployee::earnings();
//}
//void BasePlusCommissionEmployee::print() const {
//	cout << "BasePlusCommissionEmployee: ";
//	CommissionEmployee::print();
//	cout << "; \nbaseSalary: " << getBaseSalary();
//}

///////////////////////////////////////////////////////////////////////////
//Shape-TwoDimentionalShape-ThreeDimentionalShape-Circle-Cube Ornegi

//Shape Sýnýfý Fonksiyonlar
//Shape::Shape(double x, double y) {
//	xCenter = x;
//	yCenter = y;
//}
//double Shape::getCenterX() const {
//	return xCenter;
//}
//double Shape::getCenterY()const {
//	return yCenter;
//}
//
//ostream& operator<<(ostream& out, Shape& sekil) {
//	sekil.print();
//	return out;
//}
//
////Circle Sýnýfý Fonksiyonlar
//
//Circle::Circle(double x, double y, double r) :TwoDimentionalShape(x, y)
//{
//	radius = r;
//}
//
//double Circle::getRadius()const {
//	return radius;
//}
//double Circle::getArea()const {
//	return (3.14) * radius * radius;
//}
//
//void Circle::print() const {
//	cout << "Circle with radius: " << radius << "," << "center: " << "(" << xCenter << "," << yCenter << ")";
//}
//
////Cube Sýnýfý Fonksiyonlar
//
//Cube::Cube(double s, double x, double y) :ThreeDimentionalShape(x, y) {
//	sideLength = s;
//}
//double Cube::getSideLength()const {
//	return sideLength;
//}
//void Cube::print() const {
//	cout<<"Cube with sideLength:"<<sideLength<< "," << "center: " << "(" << xCenter << "," << yCenter << ")";
//}
//double Cube::getArea()const {
//	return 6 * sideLength * sideLength;
//}
//double Cube::getVolume()const {
//	return sideLength * sideLength * sideLength;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//CLASS TEMPLATES

//Genel bir stack class'ý yapmak istiyoruz. Template Class yaparak örneði çalýþtýracaðýz. int char farketmeksizin deðerleri alacak ve stack'e itecek veya çekecek boþ olup olmadýðýný kontrol edecek.


