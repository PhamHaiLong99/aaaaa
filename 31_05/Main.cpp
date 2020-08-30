#include <stdio.h>
#include <malloc.h>

class Line {
public:
    int getLength(void);
    Line(int len);
    Line( Line& obj);
    ~Line();

private:
    int* ptr;
};
Line::Line(int len) {
    printf("Normal constructor allocating ptr\r\n");
    ptr = new int;
    *ptr = len;
}
Line::Line( Line& obj) {
    printf("Copy constructor allocating ptr.\r\n");
    ptr = new int;
    *ptr = *obj.ptr;
}
Line::~Line(void) {
    printf("Freeing memory!\r\n");
    delete ptr;
}
int Line::getLength(void) {
    return *ptr;
}
void display(Line obj) {
    printf("Length of line : %d\r\n", obj.getLength());
}//xong dau nay no se huy obj.

int main() {

    Line line1(10);
    display(line1);

    Line line2 = line1;// line2=line2.Line(line1).// C=A.operator+(B) <=> C=A+B.
    display(line2);

    //Line line3 = 3;
    return 0;
}// xong cai nay no se giai phong line1 va line2.

