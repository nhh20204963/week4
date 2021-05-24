#include <stdio.h>

int main(){
	int gio;
	printf("So gio lam trong tuan la %d", gio);
	scanf("%d", &gio);
	printf("Luong cua nhan vien la %d", 40 * 25000 + (gio - 40) * 40000);
}
