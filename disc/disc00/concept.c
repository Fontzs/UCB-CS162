#include <stdio.h>

int testtt = 0; // 存储.data区

void func();

int main() {
    char* a = "162 is the best";
    char b[] = "162 is the best";

    int test = 0; // 存储在stack上
    
    func();
    func();
    func();
    func();

//    b[11] = 'B';
//    ok

//    b[11] = "B";  //return an adress
//    junk value

//    java 自动回收

//    b[11] = "B"[0];
//    ok

//    a[11] = 'B';
//    segmentation fault

    printf("%x", "B");
    return 0;
}

void func() {
    int a = 100;
    printf("%d", a);
}