#include <iostream>
using namespace std;

class queue
{
public:
void init()
{
start=0;
end=0;
}//инициализировать
void put( int m )
{
if ( 501==start )
{
cout<<"Очередь полная!";
return;
} 
a[n] = n;
cout«a[n]<<" "; 
}
//положить
void get()
{
if ( start==end )
{
cout«"Очередь пуста!";
return;
}
cout«"Считать элемент ";
for(int i=1; i<=500; i++)
{
cout<<a[i]<<" "; 
}
end++;
}//взять
int a[501];//очередь
int start,end;//начало и конец очереди
};
int main()
{
setlocale(LC_ALL,"Russian");
queue q;
q.init();
cout«"Положить элемент ";
for(int n=0; n<=502; n++)//вызов функции происходит 502 разa, чтобы заполнить очередь. Очередь заполняется по 1 элементу
{
q.put(n);
}
cout<<"\n";
q.get();//из очереди считывается сразу 500 элементов
getch();
}
