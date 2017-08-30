#include <iostream>

//region jetbrains template
int helloWorld();

int helloWorld() {
  std::cout << "Hello, World!" << std::endl;
  char s[] = "";
  std::cout << sizeof(s);
  return 0;
}
//endregion jetbrains template


//region garena sandbox
int garena201708_q01();

int garena201708_q02();

int garena201708_q01() {
  char p1[] = "Hello";
  char* p2 = "Hi";
  char* p3 = (char*)malloc(100);
  char p4[10][10];

  std::cout << sizeof(p1) << std::endl;
  std::cout << sizeof(p2) << std::endl;
  std::cout << sizeof(p3) << std::endl;
  std::cout << sizeof(p4) << std::endl;

  /*
  #expected output
  6
  8
  8
  100
  */

}

int garena201708_q02() {
  int n = 0x12345678;
  char* p;
  p = (char*)&n;
  for (int i=0; i<=3; i++) {
    printf("%02x ", (unsigned char)p[i]);
  }

  /*
  expected output
  78 56 34 12
  */
}
//endregion garena sandbox


int main() {
  //return helloWorld();
  //return garena201708_q01();
  return garena201708_q02();
}
