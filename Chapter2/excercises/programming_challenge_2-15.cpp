//triangle pattern
#include <iostream>
#include<iomanip>

using namespace std;
/*
int main(){
    char symbol;

    symbol = 42;

    //top triangle of stars
                    cout<<"   "<<symbol<<"   "<<endl;
             cout<<"  "<<symbol<<symbol<<symbol<<"  "<<endl;
      cout<<" "<<symbol<<symbol<<symbol<<symbol<<symbol<<" "<<endl;
    //middle row of stars
    cout<<symbol<<symbol<<symbol<<symbol<<symbol<<symbol<<symbol<<endl;
}
int main(){
  char s = 42;
  std::cout << std::setw(6);
  std::cout << s;
  std::cout << std::endl;

  std::cout << std::setw(5);
  std::cout << s << s << s;
  std::cout << std::endl;

  std::cout << std::setw(4);
  std::cout << s << s << s << s << s;
  std::cout << std::endl;

  std::cout << std::setw(3);
  std::cout << s << s << s << s << s << s << s;
  std::cout << std::endl;
}*/

int main(){
  int a = 0, b =2;
  while(a < 20){
    a = a + b;
    b= 2*b;
  }
  a = 3 + a;

  cout << a << endl;
}