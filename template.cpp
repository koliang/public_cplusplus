#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2=int, int i = 100>      //添加默认参数类型和默认参数
class A
{
public:
	A(T1 x, T2 y);
	T1 Sum();
	~A();
private:
	T1 a;
	T2 b;
	int j;
};

template <typename T1, typename T2, int i>      //类模板方法写法
A<T1,T2, i>::A(T1 x, T2 y):a(x), b(y), j(i)
{
}

template <typename T1, typename T2, int i>
A<T1, T2, i>::~A()
{
}

template <typename T1, typename T2, int i>
T1 A<T1, T2, i>::Sum()
{
	return a + b + j;
}


int main()
{
	A<double, int> cl(1, 2);        //类模板实例化，默认参数类型可加可不加，默认参数不加
	int c = cl.Sum();

	cout << "c: " << c << endl;
	
	A<int>* c2 = new A<int>(2, 3);    //类模板实例化，默认参数类型可加可不加，默认参数不加
	int d = c2->Sum();
	cout << "d: " << d << endl;
	delete c2;

	/*
	A<float, float> c3(1.2, 3.5);
	float e = c3.Sum();
	cout << "e: " << e << endl;
	*/

	return 0;
}
