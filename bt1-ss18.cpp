#include <stdio.h>
#include <string.h>
struct student {
    char tensv[25];   
    int age;         
    char sdt[11];     
};
int main() {
    struct student student;
    strcpy(student.tensv, "Vu Dang Nguyen"); 
    student.age = 19;                      
    strcpy(student.sdt, "0999999999");   
    printf("Thong tin sinh vien:\n");
    printf("Name: %s\n", student.tensv);
    printf("Age: %d\n", student.age);
    printf("Phone Number: %s\n", student.sdt);

    return 0;
}
