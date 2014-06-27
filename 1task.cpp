	
#include "conio.h"
#include "iostream"
#include "stack"

using namespace std;
class ST
{
	public:
	stack<int> mainarray;
	stack<int> auxiliary;
	int i;
	int m;
	void set( int x )
	{
		for( i = 0; i < x; i++ ) 
		{
			mainarray.push(rand()%100);
			cout << mainarray.top() << " ";
		}
		
		cout << endl;
	};
	void sort( int x )
	{
		for( i = 0; i < x; i++)
		{
			m=mainarray.top();
			mainarray.pop();
			while( !mainarray.empty() )
			{
			if( m <= mainarray.top() )
			{
			auxiliary.push( m );
			m=mainarray.top();
			mainarray.pop();
			}
			else
			{
			auxiliary.push( mainarray.top() );
			mainarray.pop();
			}
			}
			mainarray.push( m );
			while( !auxiliary.empty() )
			{
			mainarray.push( auxiliary.top() );
			auxiliary.pop();
			}
		}
		while( !mainarray.empty() ) 
		{
		cout << mainarray.top() << " ";
		mainarray.pop();
		}
	};
	};
int main()
{
	setlocale( LC_ALL, "Russian" );
	ST obj;
	cout << "Введите значение х (количество элементов в первом массиве): " << endl;
	int x;
	cin >> x;
	if(x <= 0)
	{
	cout << "х должен быть положительным числом! " << endl;
	}
	else
	{
	cout << endl;
	cout << "Начальный массив: " << endl;
	obj.set(x);
	cout << "Массив после сортировки: " << endl;
	obj.sort(x);
	}
	getch();
	return 0;
	
}
