#include<stdio.h>
int main () {
	int semuaarray[100], cariarray[100], a, b, semua, cari, flag;
	
	// Memasukkan banyak array
	scanf("%d", &semua);
	// Memasukkan nilai array
	for (a = 0; a < semua; a++) {
		scanf("%d", &semuaarray[a]);
	}
	
	// Memasukkan banyak array
	scanf("%d", &cari);
	// Input searched array values
	for (b = 0; b < cari; b++) {
		scanf("%d", &cariarray[b]);
	}
	
	// hasil
	b = 0; 

	do {
	
		for (a = 0; a < semua; a++) {
			if (cariarray[b] == semuaarray[a]) {
				flag = 1;
			
				break;
			} else {
				flag = 0;
			}
		}
		
	
		if (flag == 1) {
			printf("Ditemukan\n");
		} else {
			printf("Tidak Ditemukan\n");
		}
		// Increment j
		b++;
	} while (b <= cari);

	return 0;
}
