#include <stdio.h>
#include <string.h>

struct student{
	int id;
	char name[25];
	int age;
	char phoneNumber[11];
};

void addStudent(struct student *dssv, int *size){
	if(*size>=50){
		printf("Mang da day, khong the them!");
		return;
	}
	
	printf("\nNhap thong tin sinh vien moi:\n");
	
	dssv[*size].id=*size+1;
	getchar();
	
	printf("Nhap ho va ten: ");
    fgets(dssv[*size].name, sizeof(dssv[*size].name), stdin);
    dssv[*size].name[strcspn(dssv[*size].name, "\n")] = '\0';

    printf("Nhap tuoi: ");
    scanf("%d", &dssv[*size].age);

    printf("Nhap so dien thoai: ");
    scanf("%s", dssv[*size].phoneNumber);
    
    (*size)++;
    printf("Them thanh cong!");
}

void displayStudents(struct student *dssv, int size) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d\n", dssv[i].id);
        printf("Ho va ten: %s\n", dssv[i].name);
        printf("Tuoi: %d\n", dssv[i].age);
        printf("So dien thoai: %s\n", dssv[i].phoneNumber);
        printf("--------------------------\n");
    }
}

int main(){
	struct student dssv[50];
	int size=5;
	
	for(int i=0;i<size;i++){
		dssv[i].id=i+1;
		printf("\nNhap thong tin sinh vien thu %d",dssv[i].id);
		
		printf("\nNhap ho va ten: ");
		getchar();
		fgets(dssv[i].name,sizeof(dssv[i].name),stdin);
		dssv[i].name[strcspn(dssv[i].name,"\n")]='\0';
		
		printf("Nhap tuoi: ");
		scanf("%d",&dssv[i].age);
		
		printf("Nhap so dien thoai: ");
		scanf("%s",dssv[i].phoneNumber);
	}
	
	displayStudents(dssv, size);
	addStudent(dssv, &size);
	displayStudents(dssv, size);
	
	return 0;
}
