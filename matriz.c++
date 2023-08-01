#include <iostream>
using namespace std;
int main(){
int v[5]={9,6,5,2,3};
int i, *p;

p = v;
for(i=0;i<5;i++){
  cout << v[i] << " " << &v[i] << endl;
}


for(i=0;i<5;i++){
  cout << *p << " " << p << endl;
  p++;
}


p=&v[4];
for(i=0;i<5;i++){
  cout << *p << " " << p << endl;
  p--;
}


/*
p = v;
for(i=0;i<5;i++){
  cout << *p << " " << p << endl;
  p+=2;
}
*/

}
