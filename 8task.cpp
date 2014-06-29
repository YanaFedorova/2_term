#include <iostream>
#include <conio.h>

using namespace std;

class S
{
public:
void Merge(int *A, int first, int last)
{
int middle, start, final, j;
int *mas=new int[100];
middle=(first+last)/2; 
start=first; 
final=middle+1; 
for(j=first; j<=last; j++) 
{
if ((start<=middle) && ((final>last) || (A[start]<A[final])))
{
mas[j]=A[start];
start++;
}
else
{
mas[j]=A[final];
final++;
}
}

for (j=first; j<=last; j++)
{
A[j]=mas[j];
}
delete[]mas;
};

void Sort(int *A, int first, int last)
{
if (first<last)
{
Sort(A, first, (first+last)/2); 
Sort(A, (first+last)/2+1, last); 
Merge(A, first, last); 

}
};
};

void main()
{
S obj;
setlocale(LC_ALL, "Rus");
int i, n;
int *A=new int[100];
cout<<"Введите количество символов в массиве"; 
cin>>n;
cout<<"Заполненый массив: ";
for (i=1; i<=n; i++)
{
A[i]=0+rand()%100;
cout<<A[i]<<" ";
}
cout<<"\n";
obj.Sort(A, 1, n); 
cout<<"Отсортированный массив: "; 
for (i=1; i<=n; i++)
{
cout<<A[i]<<" ";
}
getch();
}
