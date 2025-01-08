#include <stdio.h>
#include <string.h>

struct student {
    char tensv[25];
    int age;
    char sdt[11];
};
int main() {
    struct student student;

    printf("Nhap thong tin sinh vien:\n");

    printf("Name: ");
    gets(student.tensv);

    printf("Age: ");
    scanf("%d", &student.age);

    printf("Phone Number: ");
    scanf("%s", student.sdt);

    printf("\nThong tin sinh vien vua nhap:\n");
    printf("Name: %s\n", student.tensv);
    printf("Age: %d\n", student.age);
    printf("Phone Number: %s\n", student.sdt);

    return 0;
}

