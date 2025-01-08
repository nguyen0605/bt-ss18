#include <stdio.h>

struct student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct student students[50];
    int numStudents = 5;

    for (int i = 0; i < numStudents; i++) {
        students[i].id = i + 1;
        printf("Nhap thong tin sinh vien thu %d:\n", students[i].id);

        printf("Ho va ten: ");
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Tuoi: ");
        scanf("%d", &students[i].age);

        printf("So dien thoai: ");
        scanf("%s", students[i].phoneNumber);
    }

    printf("\nThong tin cua cac sinh vien:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nSinh vien thu %d:\n", students[i].id);
        printf("ID: %d\n", students[i].id);
        printf("Ho va ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s", students[i].phoneNumber);
    }

    return 0;
}
