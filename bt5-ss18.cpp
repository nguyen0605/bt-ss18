#include <stdio.h>

struct sv {
    int ID;
    char name[20];
    int age;
    char phoneNumber[10];
};
int main() {
    int size = 5;
    struct sv student[50];
    for (int i = 0; i < size; i++) {
        student[i].ID = i + 1;
        printf("Nhap ho va ten sinh vien thu %d: ", i + 1);
        scanf("%s", student[i].name);
        printf("Nhap tuoi sinh vien thu %d: ", i + 1);
        scanf("%d", &student[i].age);
        printf("Nhap sdt sinh vien thu %d: ", i + 1);
        scanf("%s", student[i].phoneNumber);
    }
int searchID;
    printf("\nNhap ID sinh vien can sua: ");
    scanf("%d", &searchID);
    int found = 0;
    for(int i = 0; i < size; i++){
        if(student[i].ID == searchID){
            found = 1;
            printf("Da tim thay ID sinh vien\n");
            
            printf("Nhap ten moi cho sinh vien: ");
            scanf("%s", student[i].name);
            
            printf("Nhap tuoi moi cho sinh vien: ");
            scanf("%d", &student[i].age);
            
            printf("Thong tin sinh vien da duoc cap nhat!!!\n");
            break;
        }
    }
    if(found){
        printf("Khong tim thay id sinh vien!!!");
    }
    printf("\nDanh sach sinh vien sau khi cap nhat\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d\n", student[i].ID);
        printf("Ten: %s\n", student[i].name);
        printf("Tuoi: %d\n", student[i].age);
        printf("SDT: %s\n", student[i].phoneNumber);
    }

    return 0;
}
