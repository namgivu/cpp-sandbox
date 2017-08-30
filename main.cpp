#include <iostream>

int helloWorld();
int garena201708_q01();

int main() {
  //return helloWorld();
  return garena201708_q01();
}

int garena201708_q01() {
  char p1[] = "Hello";
  char* p2 = "Hi";
  char* p3 = (char*)malloc(100);
  char p4[10][10];
}

int helloWorld() {
  std::cout << "Hello, World!" << std::endl;
  char s[] = "";
  std::cout << sizeof(s);
  return 0;
}