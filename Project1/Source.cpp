
//template <typename T>
//T ReciverFun(T a, T b) {
//	T result = a + b;
//	return result;
//}
// tpum e erknishner@
#include <iostream>
//int* call(int* arr, int& size) {
//	std::cout << "Enter arr size" << std::endl;
//	std::cin >> size;
//
//	int result = 0;
//	arr = new int[size] {};
//	int* arr1 = nullptr;
//	arr1 = new int[size] {};
//
//	for (int i = 0; i < size; i++) {
//		std::cin >> arr[i];
//		if (arr[i] <= -10 && arr[i] >= -99 || arr[i] >= 10 && arr[i] <= 99) {
//			arr1[result] = arr[i];
//			result++;
//
//		}
//	}
//	size = result;
//	return arr1;
//}
//void foo() {
//	int size = 0;
//	int* x = nullptr;
//	int* t = call(x, size);
//	std::cout << "arr = ";
//	for (int i = 0; i < size; i++) {
//		std::cout << t[i] << " ";
//	}
//	delete[] t;
//}
//int main() {
//	foo();
//
//}
//int* ReciverFunction(int*, int &);
//void GiverFunction();
//template <typename T>
//T Size(const char* text) {
//	T size = 0;
//	while (text[size] != '\0') {
//		size++;
//	}
//	return size;
//}
//int* ReciverFunction(int * arr, int & size) {
//	std::cout << "Enter array size" << std::endl;
//	std::cin >> size;
//	arr = new int [size] {};
//	for (int i = 0; i < size; i++) 
//	{
//		std::cin >> arr[i];
//	}
//        std:: cout << "array = ";
//	for (int j = 0; j < size; j++)
//	{
//		std::cout << arr[j] << " ";
//	}
//	std::cout << std::endl;
//	return arr;
//}
//
//void GiverFunction() {
//	int size = 0;
//	int* array = nullptr;
//	int* recierarray = ReciverFunction(array, size);
//	int text = Size<int>("mcs");
//	std::cout << text;
//	delete[] recierarray;
//}
//int main() {
//	GiverFunction();
//	return 0;
//}
//void ShortenArray(int*&, int&, int);
//void GiverArray();
//void ShortenArray(int* &arr, int& size, int five) {
//	std::cout << "Enter arr size: ";
//	std::cin >> size;
//	int count = 0;
//	arr = new int [size] {};
//	for (int i = 0; i < size; i++) {
//		std::cin >> arr[i];
//		if (arr[i] % five != 0) {
//			count++;
//		}
//	}
//	int* arr1 = new int [count] {};
//	int size1 = 0;
//	for (int j = 0; j < size; j++) {
//		if (arr[j] % five != 0) {
//			arr1[size1] = arr[j];
//			size1++;
//		}
//	}
//	size = size1;
//	delete[] arr;
//	arr = arr1;
//}
//void GiverArray() {
//	int size = 0;
//	int* x = nullptr;
//	int five = 5;
//	ShortenArray(x, size, five);
//	for (int i = 0; i < size; i++) {
//		std::cout << x[i] << " ";
//	}
//	delete[] x;
//}
//int main() {
//	GiverArray();
//	return 0;
//}
#include <string>

#include <iostream>
#include <string>
#include <cstddef> // For offsetof macro

#include <iostream>
using namespace std;
//class CRectangle {
//	int age;
//	string name;
//public:
//	CRectangle() { cout << "default ctor "; }
//	~CRectangle() {}
//	CRectangle(const CRectangle& other) { cout << "copy ctor "; }
//	
//	CRectangle& operator =(const CRectangle& other) { cout << "operator ctor ";
//	if (this != &other) {
//		name = other.name;
//		age = other.age;
//	}
//	return *this;
//	}
//	
//	
//
//
//	void set_values(int, string);
//	int get_age(void) { return (age  ); }
//	string get_name() const { return name; }
//};
//void CRectangle::set_values(int a, string b) {
//	age = a;
//	name = b;
//
//}
//int main() {
//	CRectangle ob;
//	ob.set_values(4, "xcx");
//	CRectangle obj;
//	obj = ob;
//	
//	cout << "obj age: " << obj.get_age() << endl;
//	cout << "obj age: " << obj.get_name() << endl;
//
//	
//	//cout << "rect area: " << set_values(4,"xcx") << endl;
//	//cout << "rectb area: " << rectb.area() << endl;
//	//rectb.set_values(5, 6);
//	//rect.set_values(3, 4);
//	//cout << "rect area: " << rect.area() << endl;
//}
class Person
{
    int age = 0;
    string name;
public:
    Person(int a) { age = a; }
   
    Person(string s) { name = s; }
    void call()
    {
        cout << "name " << name << endl;
        
    }  
    void call1()
    {
       
        cout <<"age " << age << endl;
    }

};
int main()
{
    Person ob("Tyom");
    Person obj(26);
    ob.call();
    obj.call1();
  
    return 0;
  
}

