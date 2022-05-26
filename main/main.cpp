#include "nesneCalisma.h"
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <typeinfo>
#include <ctime>
#pragma warning(disable : 4996)
using namespace std;
//NOT!!!!!!!
////üye fonksiyonlar ortak kullanılır diğer üye değişkenlerin kopyası oluşturulur.
/*-------------------------*/
//void create(void);
//void create(void) {
//	cout << "Create FUNCTION: EXECUTION BEGINS" << endl;
//	CreateAndDestroy fifth(5, "local automatic in create");
//	static CreateAndDestroy sixth(6, "local static in create");
//	CreateAndDestroy seventh(7, "local automatic in create");
//	cout << "\n CREATE FUNCTION: EXECUTION ENDS" << endl;
//}
//CreateAndDestroy first(1, "(global before main)");
/*-------------------------*/

/*-------------------------*/
//void bellekEsitMi(int* a, int* b) {
//	if (a == b) {
//		cout << " a ile b ayni bellek alanini gosteriyor." << endl;
//	}
//	else { cout << "a ile b farkli bellek alanini gosteriyor." << endl; }
//}
/*-------------------------*/

//Abstract ve miras ilişkisi main öncesi fonksiyon prototipleri.
//void virtualViaPointer(const Employee* const);
//void virtualViaReference(const Employee&);
////Abstract ve miras ilişkisi main öncesi fonksiyon tanımlamaları.
//void virtualViaPointer(const Employee* const baseClassPtr) {
//	baseClassPtr->print();
//	cout << "\nearded $" << baseClassPtr->earnings() << "\n\n";
//}
//void virtualViaReference(const Employee& baseClassRef) {
//	baseClassRef.print();
//	cout << "\nearded $" << baseClassRef.earnings() << "\n\n";
//}

//CLASS TEMPLATE
//void printArray(const T* const array, int count) {
//	for (int i = 0; i < count; i++) {
//		cout << "[" << array[i] << "]" << " ";
//	}
//}




int main()
{


	
	
	//fonkasiriyukleme kare1;
	//kare1.printsayininkaresi();

	//int int1, int2, int3;
	//double double1, double2, double3;
	//char char1, char2, char3;

	//cout << "Sirasiyla 3 tane Int deger girin(Aralarda bosluk birakabilirsiniz): ";
	//cin >> int1 >> int2 >> int3;
	//cout << "Sirasiyla 3 tane Double deger girin(Aralarda bosluk birakabilirsiniz): ";
	//cin >> double1 >> double2 >> double3;
	//cout << "Sirasiyla 3 tane Char deger girin(Aralarda bosluk birakabilirsiniz): ";
	//cin >> char1 >> char2 >> char3;
	//cout << "Sirasiyla Int,Double,Char degerlerinin maksimum degerleri template yapisi ile hesaplaniyor...\n";
	//cout<<maximum(int1, int2, int3);
	//cout << "\n";
	//cout << maximum(double1, double2, double3);
	//cout << "\n";
	//cout << maximum(char1, char2, char3);
	//cout << "\n";



	//setget sayi1, sayi2;
	//sayi1.setsayi(4);
	//sayi2.setsayi(6);
	//cout<<sayi1.getsayi();
	//cout<<sayi2.getsayi();

	//GradeBook myGradeBook;
	//string nameOfCourse;
	//cout << "Enter the name: ";
	//getline(cin, nameOfCourse);
	//myGradeBook.SetCourseName(nameOfCourse);
	//myGradeBook.printCourseName();
	//GradeBookConstructor myGradeBook("Emin"),myGradeBook2("Fatma")

	//Time t;
	//cout << "Constructor Universal:\n";
	//t.printUniversal();
	//cout << "\n";
	//cout << "Constructor Standart:\n";
	//t.printStandart();
	//cout << "\n";
	//cout << "Setlenmis Universal:\n";
	//t.setTime(13, 40, 30);
	//t.printUniversal();
	//cout << "\n";
	//cout << "Setlenmis Standart:\n";
	//t.printStandart();
	//cout << "\n";


	//Count counter;
	//Count* counterPtr = &counter;
	//Count& counterRef = counter;

	//cout << "X'i 1 e setledim:\n";
	//counter.setX(1);
	//counter.print();
	//cout << "X'i pointer ile 2 e setledim:\n";
	//counterPtr->setX(2);
	//counterPtr->print();
	//cout << "X'i referans ile 3 e setledim:\n";
	//counterRef.setX(3);
	//counterRef.print();

	//SalesPerson s;
	//s.getSalesFromUser();
	//s.printAnnualSales();

	//Time2 t1;
	//Time2 t2(2);
	//Time2 t3(21, 34);
	//Time2 t4(12, 25, 42);
	//Time2 t5(27, 74, 99);

	//cout << "Constructed with:\n\nt1:all arguments defaulted\n ";
	//t1.printUniversal();
	//cout << "\n";
	//t1.printStandart();

	//cout << "\n\nt2:hour specified; minute and second defaulted\n ";
	//t2.printUniversal();
	//cout << "\n";
	//t2.printStandart();

	//cout << "\n\nt3:hour specified minute specified; second defaulted\n ";
	//t3.printUniversal();
	//cout << "\n";
	//t3.printStandart();

	//cout << "\n\nt2:hour specified minute and second specified\n ";
	//t4.printUniversal();
	//cout << "\n";
	//t4.printStandart();

	//cout << "\n\nt2:all invalid values specified\n ";
	//t5.printUniversal();
	//cout << "\n";
	//t5.printStandart();
	//cout << endl;


	//cout << "\n MAIN FUNCTION: EXECUTION BEGINS" << endl;
	//cout << "--------------------------------------------------" << endl;
	//CreateAndDestroy second(2, "local automatic in main");
	//static CreateAndDestroy third(3, "local static in main");

	//create();
	//cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;
	//CreateAndDestroy fourth(4, "Local automatic in main");
	//cout << "\n MAIN FUNCTION:EXECUTION ENDS" << endl;

	//badTime t_bad;
	//int& hourRef = t_bad.badSetHour(20);
	//cout << "Valid hour before modification: " << hourRef;
	//hourRef = 30;
	//cout << "\n Invalid hour after modification: " << hourRef;
	//cout << "\nbadSetHour(12) cagrildi: " << t_bad.badSetHour(12) << endl;
	//t_bad.badSetHour(12) = 72;
	//cout << "\n\nPOOR PROGRAMMING PRACTICE!!!!\n\n" << "t_bad.badSethour(12)=72 yapildi ve t_bad.getHour() cagrildi:" << t_bad.getHour() << endl;

	//constTime wakeUp(6, 45, 0);
	//const constTime noon(12, 0, 0);

	//wakeUp.setHour(18);
	////noon.setHour(12); const bir nesne const olan bir fonksiyonu cagirabilir. Non-const bir nesne const ve non-const fonksiyonu cagirabilir.
	//wakeUp.getHour();
	//noon.getMinute();
	//noon.printUniversal();
	//cout << "\n";
	//wakeUp.printStandart();

//Increment value1(10, 5);
//cout << "Before incrementing: ";
//value1.print();
//for (int j=1; j <= 3; j++)
//{
//	value1.addIncrement();
//	cout << "After increment " << j << ":";
//	value1.print();
//}

/*	COMPOSITION-----------------------------------------------------------------------------------*/
// 
//constDate birth(7, 24, 1949);
//constDate hire(3, 12, 1988);
//Employee manager("Bob", "Blue", birth, hire);
//cout << endl;
//manager.print();
//cout << "\nTest Date Constructor with invalid values:\n";
//constDate lastDayOff(14, 35, 1994);
//cout << endl;

//Count counter;
//cout << "counter.x after instantiation: ";
//counter.print();
//setX(counter, 8);
//cout << "counter.x  after call to SetX friend Function: ";
//counter.print();
//

//Test thistest(12);
//thistest.print();

/*CASCADE KULLANIM-----------------------------------------------------*/
//CascadethisTime t;
//t.setHour(18).setMinute(45).setSecond(34);
//t.printStandart();
//cout << "\n";
//t.printUniversal();
//cout << "\n";
//cout << "Yeni deger:";
//t.setTime(14, 25, 34).printUniversal();


//cout << "Number of employees before instantiation of any object is " << staticornekEmployee::getCount() << endl;
//
//{
//	staticornekEmployee e1("Emin", "XYZ");
//	staticornekEmployee e2("Mert", "abc");
//cout << "Number of employees after objects are instantiated is " << staticornekEmployee::getCount();
//cout << "\n\nEmployee1: " << e1.getFirstName() << " " << e1.getLastName() << endl;
//cout << "Employee2: " << e2.getFirstName() <<" "<<e2.getLastName() << endl;
//}
//cout << "\n Number of employees after objects are deleted is " << staticornekEmployee::getCount() << endl;


//Miras Son hafta ------------------------------------------------------------------------------------------------

//1.Composition
//ogrencicomposition ogrenci1("emin", "XYZ", 20, 6, 1998, 101);
//ogrenci1.Ogrenciprint();

//2.Composition

//datecomposition d_tarihi(20, 06, 1998);
//personelcomposition isim_soyisim("Emin", "XYZ");
//ogrencicomposition emin(isim_soyisim, d_tarihi, 333333);
//emin.Ogrenciprint();


//*************************************VİZELERDEN SONRAKİ KISIM*************************************************
//POINTER MANTIĞI

//int* p;
//int x = 37;
//cout << "x degeri yani 'x': " << x<<endl;
//p = &x;
//cout << "p pointer'inin icerigine x'in adresi atandi." << endl;
//cout << "*p=" << *p << " " << "x degeri=" << x<<endl;
//*p = 58;
//cout << "*p=58 yapildi..." << endl;
//cout << "*p=" << *p << " " << "x degeri=" << x<<endl;
//cout << "p'nin adresi yani '&p': " << &p << endl;
//cout << "p'nin tuttugu adres &x yani 'p': " << p << endl;
//cout << "p'nin icerigi yani '*p': " << *p << endl;
//cout << "x'in adresi yani '&x': " << &x << endl;
//cout << "x'in degeri yani 'x': " << x << endl;
//*****************************************

//PointerStudent student;
//PointerStudent* StudentPtr;
//StudentPtr = &student;
////Uc farkli sekilde atama yapabiliriz.
//student.gpa = 3.9;
//(*StudentPtr).gpa = 3.9;
//StudentPtr->gpa = 3.9;

//PointerClassExample_1* nesnePtr;
//PointerClassExample_1 nesne;
//nesnePtr = &nesne;
//(*nesnePtr).setX(5);
//(*nesnePtr).print();
////veya
//nesnePtr->setX(6);
//nesnePtr->print();

//Dinamik degiskenler giris(Onemli)

//int* p;
//char* q;
//int x;
//p = &x;
//cout << "p pointerinin tuttugu adres: " << p << endl;
//cout << "x'in adresi: " << &x << endl;
//p = new int;
//cout << "Yeni bellek alani olusturulduktan sonra p pointerinin tuttugu yeni adres: " << p << endl;
//q = new char[15]; //15 elemanlı char dizisinin baslangic adresi atanir

//********************************************************

//Dinamik bellek tahsisinden sonra delete islemi gerekiyor.

//int* p;
//char* name;
//string* str;
//p = new int;
//*p = 28;
//
//name = new char[10];
//strcpy(name, "Emin");
//str = new string;
//*str = "Karadeniz Teknik Universitesi";
//cout << "*name: " << *name << " " << "*str: " << *str << endl;
//
//delete p;
//delete[] name;
//Hata verir cout << "*name: " << *name << " " << "*str: " << *str << endl;

//int* a, * b;
//int x = 5;
//int y = 6;
//a = &x;
//b = &y;
//bellekEsitMi(a, b);
//cout << "a=b yapildiktan sonra a ve b'nin adres kiyasi." << endl;
//a = b;
//bellekEsitMi(a, b);

//int* p;
//int arraySize;
//cout << "Dizi boyutunu giriniz: " << endl;
//cin >> arraySize;
//cout << "New int[arraySize] ile bellek alani veriliyor." << endl;
//p = new int[arraySize];
//Beklendigi gibi calismadi hep dizinin ilk indisine deger ataniyor. O yüzden satir 359'deki for dongülerini kullanacağız.
//cout << "Olusturulan dizinin ilk indisine 25 degeri ataniyor" << endl;
//*p = 25;
//cout << "p'nin ilk indisi:" << p[0]<<endl;
//cout << "p++ yapılarak diger bloga geciyoruz" << endl;
//p++;
//cout << "Olusturulan dizinin ikinci indisine 35 degeri ataniyor" << endl;
//*p = 35;
//cout <<"p'nin ikinci indisi:" << p[1]<<endl;
//
//for (int i = 0; i < arraySize; i++) { p[i] = 0; }
//cout << "p gostericisinin icerigi: " << endl;
//for (int i = 0; i < arraySize; i++) { cout << "["<<p[i]<<"]"<<" "; }

//Simdi ise dinamik olmayan bellek alanına erismeyi gorecegiz
int* q,*p;
int list[10];
q = list;
p = list;
//for (int i = 0; i < 10; i++) {
//	q[i] = 0;
//}
//cout << "\nq[i]=0 atama sonucu:" << endl;
//for (int i = 0; i < 10; i++) {
//	cout << q[i] <<" ";
//}


/////////////////////////////////////////////////////////////

/*
cout << "\n";
for (int i = 0; i < 10; i++) {
	list[i] = 1;
}
cout << "list[i]=1 atama sonucu:" << endl;
for (int i = 0; i < 10; i++) {
	cout << list[i] << " ";
}
*/
/////////////////////////////////////////////////////////////

//cout << "\n";
//for (int i = 0; i < 10; i++) {
//	*(p+i)=2;
//}
//
//cout << "*(p+i)=2 atama sonucu:" << endl;
//for (int i = 0; i < 10; i++) {
//	cout << *(p + i) << " ";
//}


/////////////////////////////////////////////////////////////
/*
cout << "\n";
for (p=list; p <list+10; p++) {
	*p = 3;
}
cout << "*(p+i)=3 atama sonucu:" << endl;
for (p=list; p <list+10; p++) {
	cout << *p << " ";
}
*/

//Shallow Copy

//int* dizi1, * dizi2,*dizi3,*dizi4;
//dizi1 = new int[10];
//dizi3 = new int[10];
//for (int i = 0; i < 10; i++) { dizi1[i] = i * 2; }
//cout << "Dizi1 pointer'inin gosterdigi yeni adresin icerigi: " << endl;
//for (int i = 0; i < 10; i++) { cout << dizi1[i] << " "; }
//cout << "\n";
//
//for (int i = 0; i < 10; i++) { dizi3[i] = i * 3; }
//cout << "Dizi3 pointer'inin gosterdigi yeni adresin icerigi: " << endl;
//for (int i = 0; i < 10; i++) { cout << dizi3[i] << " "; }
//cout << "\n";
//
//cout << "Dizi1 Dizi2'ye ataniyor ve ayni adresi(veriyi gosteriyor).Dizi2 ekrana bastiriliyor: " << endl;
//dizi2 = dizi1;
//for (int i = 0; i < 10; i++) { cout << dizi2[i] << " "; }
//
//cout << "dizi2 siliniyor..:" << endl;
//delete [] dizi2;
//
//cout << "Dizi1 ekrana bastirilmaya calisiliyor..." << endl;
//for (int i = 0; i < 10; i++) { cout << dizi1[i] << " "; }
//cout << "\n";
//
//
//cout << "(Sadece Dizi2'yi silmeye calisirken Dizi1'de silindi, aynı bellek alanlarini gosterdigi icin)\n Bunu onlemek icin dizi4'e (dizi2) ayri bellek alani acilmali ve dizi3(dizi1)'un butun icerikleri tek tek kopyalanmali. Ya da DeepCopy yapilmali."<<endl;
//dizi4 = new int[10];
//for (int i = 0; i < 10; i++) { dizi4[i] = dizi3[i]; }
//cout << "\n";
//cout << "Dizi3 siliniyor." << endl;
//delete[] dizi3;
//cout << "Dizi3 icerigi: " << endl;
////for (int i = 0; i < 10; i++) { cout << dizi3[i] << " "; } Hata verdi
//cout << "\n";
//cout << "Dizi4 icerigi: " << endl;
//for (int i = 0; i < 10; i++) { cout << dizi4[i] << " "; }


//Copy Constructor

//pointerDataClass nesne1, nesne2; //üye fonksiyonlar ortak kullanılır diğer üye değişkenlerin kopyası oluşturulur.
//nesne1.p = new int[10];//yer tahsis edildi.
//nesne2.p = new int[10];
//for (int i = 0; i < 10; i++) {
//	nesne1.p[i] = i * 3;
//}
//
//nesne2 = nesne1;
//cout << "nesne1 nesne 2'ye atandi.\nNesne2'nin p icerigi:";
//for(int i=0;i<10;i++){
//	cout << nesne2.p[i]<<" ";
//}
////Copy Constructor giris
//pointerDataClass nesne3(nesne1);
//cout << "\nNesne3 olusturuldu ve parametre olarak nesne1 aldi. Nesne3'un p icerigi:";
//for (int i = 0; i < 10; i++) {
//	cout << nesne3.p[i] << " ";
//}
//
//cout << "\nNesne1.p'nin adresi:" << &nesne1.p << "\nNesne2.p'nin adresi: " << &nesne2.p;
//

//copyConstructor one(5);
//one.setData();
//one.print();
//
//copyConstructor two(one);
//two.print();	
//two.destroyP();

//eger değer ile bir fonksiyon içerisinde print ve setdata çağırılırsa fonksiyondan çıktıktan sonra kullanılan değerler önceki haline gelir.


operatorOverLoading telNo;
cout << "Tel No girin, (123) 456-7890 seklinde." << endl;
cin >> telNo;
cout << "Girdigin tel no:";
cout << telNo << endl;


//OPERATOR ASIRI YUKLEME KAPSAMLI ORNEK

//Array integers1(7);
//Array integers2;
//cout << "Integers1'in size'i: " << integers1.getSize() << "\nArray after initialization:\n" << integers1;
//cout << "\nIntegers2'in size'i: " << integers2.getSize() << "\nArray after initialization:\n" << integers2;
//cout << "\Enter 17 integers: " << endl;
//cin >> integers1 >> integers2;	
//cout << "Integers1'in yeni icerigi: \n" << integers1;
//cout << "\nIntegers2'in yeni icerigi: \n" << integers2;
//cout << "Integers1 Integers2'ye esit mi?\n" << endl;
//if (integers1 != integers2) {
//	cout << "integers1 and integers2 are not equal\n" << endl;
//}
//
//Array integers3(integers1);
//cout << "Integers3'un size'i " << integers3.getSize() << "Array after initialization:\n" << integers3;
//cout << "Integers1 Integer2'ye esitleniyor\n" << endl;
//integers1 = integers2;
//cout << "Integers1'in yeni icerigi: \n" << integers1;
//cout << "\nIntegers2'in yeni icerigi: \n" << integers2;
//
//cout << "\nintegers1[5] is" << integers1[5]<<endl;
//cout << "Integers1.ptr'in 5.indisine 1000 degeri atandi \n" << endl;
//integers1[5] = 1000;
//cout << "Integers1[5]: " << integers1[5];
//

//Complex c2(10, 5);
//Complex c1(2, 4);
//Complex c3 = c2 + c1; // An example call to "operator+"
//c3.print();

////////////////////////////////////////////////////////////////-----------ONEMLI-----------////////////////////////////////////////////////////////////////

//bos bs(3, 5);
// Conversion operator!
//bos::operator char* () const; bos sınıfına ait bir nesneyi geçiçi olarak char * nesnesine dönüştürmek için kullandığımız fonksiyon prototipi.
//Cast operator fonksiyon.
//bos bs1(4, 5);
//static_cast<char*>(bs1); Compiler bunu gördüğünde bs1.operator char *() çağrımı yapar. bs1 nesnesinin operator fonksiyonunu çağır ve char* 'a dönüşümü gerçekleştir.

//BUILDING STRING CLASS KAVRAMI
//Bizim normalde string kütüphanemiz vardı, bunun içerisinde constructor destructor çeşitli fonksiyonlar vardır.
//String class'ı bize conversion constructor sağlıyor. Yani const char* argumanını alıyor ve başlangıç olarak string nesnesi veriyor.
//Ornegin myString="hello" attığımızda myString nesnesi çağrılıyor ve arka planda geçici olarak bir string nesnesi oluşturup, 
//bu nesnenin içerisine string atabilmek için overloaded assigment kullanıyor. 
//Veya string class'ından oluşturulan s1 nesnesinin constructor'ına bir karakter dizisi atarsın. s1("happy") gibi.Asagıda ornekler mevcut.
//string myString = "Hello";
//cout << myString << endl;
//string s1("Happy");
//cout << s1 << endl;
//negation operator string türünden nesnenin boş olup olmadığını kontrol ediyor.
// !s1 //'i derleyici gorunce s1.operator!()'u çağırıyor. 
//s1(2,3) // Boyle bir tanımlamada 2 tane int parametre alıyor ve 2 baslangıc indisi olurken 3 uzunluk olmuş oluyor. Bu çağrım sonucu derleyici s1.operator()(2,3) sonucu "ppy" dondurur.

////////////////////////////////////////////////////////////////-----------ONEMLI BITTI-----------////////////////////////////////////////////////////////////

//Prefix ve Postfix aşrı yükleme( prefix onceden artım, postfix sonradan artım oluyor.)

//Date d1, d2(6, 20, 1998), d3(0, 99, 8030);
//cout << "d1 is:" << d1 << "\nd2 is:" << d2 << "\nd3 is:" << d3 << endl;
//cout << "d2+=7 is:" << (d2 += 7)<<endl;
//Date d4(7, 13, 2000);
//cout << "Prefix Operatoru test ediliyor: \n" << "d4 is " << d4 << endl;
//cout << "++d4 is: " << ++d4 << endl;
//cout << "d4 is: " << d4<<endl;
//
//cout << "Postfix Operatoru test ediliyor: \n" << "d4 is " << d4 << endl;
//cout << "d4++ is: " << d4++ << endl;
//cout << "d4 is: " << d4 << endl;

//RationalNumber c(7, 3), d(3, 9), x;
//c.printRational();
//cout << "+";
//d.printRational();
//cout << "=";
//x = c + d; //c.operator+(d)
//x.printRational();
//
//cout << endl;
//
//c.printRational();
//cout << "-";
//d.printRational();
//cout << "=";
//x = c - d;
//x.printRational();
//
//cout << endl;
//
//c.printRational();
//cout << "*";
//d.printRational();
//cout << "=";
//x = x * d;
//x.printRational();
//
//cout << endl;
//
//c.printRational();
//cout << "/";
//d.printRational();
//cout << "=";
//x = x / d;
//x.printRational();
//
//cout << endl;
//
//if (d < c) {
//	cout << "thisval: ";
//	c.printRational();
//	cout << " " << "bVal: "; 
//	d.printRational();
//	cout << "thisval<bVal is true." << endl;
//}
//else {
//	cout << "c>d'dir. ";
//}


//Polymorphism(Cok biçimlilik, çoklu benzeşim)
//Base sınıfın nesneleri ile türetilmiş sınıfın nesnelerini işaret edip, base class aracılığı ile türetilmiş sınıfa yaptırmak istediklerimizi yani üye fonksiyonlarını kullanmış olacağız
//Bu işaret etme virtual fonksiyonları aracılığı ile olmaktadır. Base sınıf işaretçisi veya referansı aracılığı ile virtual fonksiyonları çağırırsak burada polymorphism yapmış oluyoruz.
//Base sınıf türetilmiş sınıfın üye fonksiyonlarını dinamik olarak kullanmakta.
//NOT: Base sınıfın nesnesi türetilmiş sınıfın da bir nesnesidir. Türetilmiş bir sınıfın nesnesi ise Base sınıfının nesnesi olamaz.Çünkü türetilmiş sınıfa yeni özellikler eklemiş olabiliriz.

//CommissionEmployee baseNesne("Emin","XYZ","555-555-5555",10000,.06);
//
//CommissionEmployee* baseNesnePtr=0;
//
//BasePlusCommissionEmployee turetilmisNesne("Busra", "XYZ", "000-000-0000", 1000000000, .04, 300);
//
//BasePlusCommissionEmployee* turetilmisNesnePtr = 0;
//
//cout << fixed << setprecision(2);
//cout << "Base sinif ve turetilmis sinifin nesneleri ekrana yaziliyor.." << endl;
//baseNesne.print();
//cout << "\n\n";
//turetilmisNesne.print();
//
//baseNesnePtr = &baseNesne;
//cout << "\n\n\n Base sinifin pointeri baseNesne'yi cagiriyor.\n\n";
//baseNesnePtr->print();
//
//turetilmisNesnePtr = &turetilmisNesne;
//cout << "\n\n\n Turetilmis sinifin pointeri turetilmisNesne'yi cagiriyor.\n\n";
//turetilmisNesnePtr->print();
//
//cout << "\nPointer turu base sinif ama isaret ettigi turetilmis sinifin nesnesi yaparsak\n ";
//baseNesnePtr = &turetilmisNesne;
//cout << "\nBase sinifin pointeri ile print cagirdigimizda turetilmis sinifin print fonksiyonu cagrilmasi gerekiyordu ancak virtual tanimlamadigimiz icin yine base sinifin print fonksinu cagrilacak.Pointer turu neyse onun fonksiyonunu cagiracak\n";
//baseNesnePtr->print();
//Hiçbir şey değiştirilmeden,base sinifta virtual tanımlaması yapılarak
//polymorphism yani bir sınıfın pointerı aracılığı ile türetilmiş sınıfın 
//fonksiyonuna erişmek ana temel amacımız.
//Eger turetilmis sinifin pointeri base sinifin nesnesini gosterseydi bu hata olacakti.
//Bu durumda türetilmiş sınıfın member fonksiyonunu base classın pointeri ile bir şekilde çağırmamız gerekiyor.
//NOT:. operatoru ile yaparsan static binding, -> ile yaparsan dinamic binding olmuş oluyor.

//Deneme
//string firstName = baseNesnePtr->getFirstName();
//string lastName = baseNesnePtr->getLastName();
//string ssn = baseNesnePtr->getSSN();

//double baseSalary = baseNesnePtr->getBaseSalary(); //erişemez hata verir.

//Abstract Sınıf(soyut sınıf):Diğer sınıflar için kök sınıf sağlamak. 
//Gerçek bir sınıf tanımlaması olmayacak.

//Pure Virtual Fonksiyon: Virtual olarak tanımladığımız fonksiyonu 0'a eşitleyeceğiz bu sınıflara verilen ad.Pure virtual fonksiyon tanımlayarak ve 0'a eşitleyerek
//soyut sınıf elde ediyoruz aslında. Bir önceki normal virtual fonksiyonlardan farklı olarak 0'a eşitleme söz konusu. Abstract sınıf tanımladığımızda bunlarda tanımlanan
//pure virtual fonksiyonlarını ve abstract sınıflardan türetilmiş sınıflara da aynı pure virtual fonksiyon override yapılır. Farklı özellikler tanımlıyorsak, farklı data member'lar vs.
//pure virtual fonksiyonları oluştururuz.(Ornegin:earnings fonksiyonu) Benzer şeyler yapıyorsak, ek bazı hesaplamalar oluyor ise virtual fonksiyon tanımlayabiliriz.(Ornegin:print())

//---------------------------------------------------------------------------------------------------------------------------------

//Bir uygulama yapacağız bu uygulamada Employee abstract sınıfından ,Salaried-Employee, Hourly-Employee, Commission-Employee, BasePlus-Commission-Employee sınıfları oluşturulup
//farklı hesaplamalar yapacağız.
// //Bir sınıf sanal bir fonksiyona sahipse onun bir sanal fonksiyon tablosu vardır.Bu tablo uygun fonksiyonu gösterecek işaretçiye sahiptir.
//Employee'den herhangi bir nesne oluşturmadık sadece pointer vs oluşturduk
//cout << fixed << setprecision(2);
//SalariedEmployee salariedNesne("Emin", "XYZ", "111-111-1111", 800);
//HourlyEmployee hourlyNesne("Busra", "XYZ", "222-222-2222", 16.75, 61);
//CommissionEmployee commissionNesne("Umut", "XYZ", "333-333-3333", 10000, .061);
//BasePlusCommissionEmployee baseplusNesne("Elif", "XYZ", "444-444-4444", 5000, .04, 6161);
//
//cout << "Calisanların bilgileri static binding ile cagiriliyor: "<<"\n\n";
//salariedNesne.print();
//cout << "\nearded $" << salariedNesne.earnings() << "\n\n";
//hourlyNesne.print();
//cout << "\nearded $" << hourlyNesne.earnings() << "\n\n";
//commissionNesne.print();
//cout << "\nearded $" << commissionNesne.earnings() << "\n\n";
//baseplusNesne.print();
//cout << "\nearded $" << baseplusNesne.earnings() << "\n\n";
//
//vector <Employee*> nesneler(4);
//nesneler[0] = &salariedNesne;
//nesneler[1] = &hourlyNesne;
//nesneler[2] = &commissionNesne;
//nesneler[3] = &baseplusNesne;
//cout << "Nesneler polymorphik olarak dinamik şekilde cagirildi\n\n";
//cout << "Virtual function calls made off base-class pointers:\n\n";
//for (size_t i = 0; i < nesneler.size(); i++) {
//	virtualViaPointer(nesneler[i]);
//}
//cout << "Virtual function calls made off base-class references:\n\n";
//for (size_t i = 0; i < nesneler.size(); i++) {
//	virtualViaReference(*nesneler[i]);
//}


//cout << "\n\n****************DYNAMIC CAST VE TYPEID KAVRAMI******************\n" << endl;

//cout << fixed << setprecision(2);
//
//vector<Employee*> nesneler2(4);
//nesneler2[0] = new SalariedEmployee("Emin", "XYZ", "111-111-1111", 900);
//nesneler2[1] = new HourlyEmployee("Busra", "XYZ", "222-222-2222", 16.75, 61);
//nesneler2[2] = new CommissionEmployee("Umut", "XYZ", "333-333-3333", 10000, .061);
//nesneler2[3] = new BasePlusCommissionEmployee("Elif", "XYZ", "444-444-4444", 5000, .04, 6161);
//
//for (size_t i = 0; i < nesneler2.size(); i++) {
//	nesneler2[i]->print();
//	cout << endl;
//	BasePlusCommissionEmployee* turetilmisNesnePtr = dynamic_cast<BasePlusCommissionEmployee*> (nesneler2[i]); //dynamic_cast<sorguladığımız tür>(hangi türden dönüşüm yapılacak)
//	//nesneler2 vektorunun içeriğinde yer alan Employee sınıfını  BasePlusCommissionEmployee* 'ye dönüştürdüğümde başarılı olursa NULLDAN farklı değer olmazsa 0 dönecek.
//	if (turetilmisNesnePtr != 0) {
//		double oldBaseSalary = turetilmisNesnePtr->getBaseSalary();
//		cout << "Old base salary: $" << oldBaseSalary << endl;
//		turetilmisNesnePtr->setBaseSalary(1.10 * oldBaseSalary);
//		cout << "new base salary: width %10 up $" << turetilmisNesnePtr->getBaseSalary()<<endl;
//	}
//	cout << "earned $ " << nesneler2[i]->earnings() << "\n\n";
//}
//
////TYPEID nesnenin tipini döndürür.
//for (size_t j = 0; j < nesneler2.size(); j++) {
//	cout << "deleting objects of" << typeid(*nesneler2[j]).name() << endl;
//	delete nesneler2[j];
//}
//

///////////////////////////////////////////////////////////////////////////
//Shape-TwoDimentionalShape-ThreeDimentionalShape-Circle-Cube Ornegi

//vector<Shape*> shapes(2);
//shapes[0] = new Circle(1,4,3);
//shapes[1] = new Cube(5,2,3);
//for (int i = 0; i < 2; i++) {
//	
//	TwoDimentionalShape* twoPtr = dynamic_cast<TwoDimentionalShape*>(shapes[i]);
//	if (twoPtr != 0) {
//		cout << "Area:" << twoPtr->getArea() << "\n" << *shapes[i]<<"\n\n";
//	}
//	ThreeDimentionalShape* threePtr = dynamic_cast<ThreeDimentionalShape*>(shapes[i]);
//	if (threePtr != 0) {
//		cout << "\nAlan: " << threePtr->getArea() << "," << "Hacim: " << threePtr->getArea() << "\n" << *shapes[i];
//	}
//}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//CLASS TEMPLATES
//Örnekler ile anlatıma geçelim. Bir printArray dizisi tanımlanacak tipine göre int,double,char gibi dizileri ekrana bastıracak.

//const int aCount = 5;
//const int bCount = 7;
//const int cCount = 6;
//int a[aCount] = { 1,2,3,4,5 };
//double b[bCount] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7 };
//char c[cCount] = "HELLO";
//cout << "a Dizisinin icerigi: " << endl;
//printArray(a, aCount);
//cout << "\nb Dizisinin icerigi: " << endl;
//printArray(b, bCount);
//cout << "\nc Dizisinin icerigi: " << endl;
//printArray(c, cCount);

//Genel bir stack class'ı yapmak istiyoruz. Template Class yaparak örneği çalıştıracağız. int char farketmeksizin değerleri alacak ve stack'e itecek veya çekecek boş olup olmadığını kontrol edecek.
//GENELLEŞTİRİLMEMİŞ HALİ

//Stack< double > doubleStack(5);
//double doubleValue = 1.1;
//cout << "Pushing elements onto doubleStack: " << endl;
//
//while (doubleStack.push(doubleValue)) {
//	cout << doubleValue << " " ;
//	doubleValue += 1.1;
//}
//cout << "\n Stack is full. cannot push " << doubleValue << "\n\n Popping Elements from doubleStack\n";
//
//while (doubleStack.pop(doubleValue)) {
//	cout << doubleValue << " ";
//}
//cout << "\nStack is empty. Cannot pop.";
//
//
//Stack <int> intStack;
//int intValue = 1;
//
//while (intStack.push(intValue)) {
//	cout << intValue++ << " ";
//}
//cout << "\n Stack is full. cannot push " << intValue << "\n\n Popping Elements from intStack\n";
//
//while (intStack.pop(intValue)) {
//	cout << intValue << " ";
//}
//cout << "\n Stack is empty. Cannot pop" << endl;
//

//GENELLEŞTİRİLMİŞ HALİ

//Stack<double> doubleStack(5);
//Stack<int> intStack;
//testStack(doubleStack, 1.1, 1.1, "doubleStack");
//testStack(intStack, 1, 1, "intStack");


}