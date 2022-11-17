#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RUS");
	char k, kom[8][12] = {
		{"Спортклубы|"},
		{"МРСК-Волги|"},
		{"Мехзавод  |"},
		{"Промсинтез|"},
		{"ЧХТГ      |"},
		{"11 ОФПС   |"},
		{"Здоровье  |"},
		{"ДОСААФ    |"}
	};
	int array[8][4] = {
	{3,2,1,8},
	{1,3,-2,5},
	{5,0,8,13},
	{0,5,-10,0},
	{0,5,-9,1},
	{2,3,-2,6},
	{5,1,7,14},
	{4,1,7,13} };
	
	printf("Выберите пукт из предоставленного списка: \n1)Табилца результатов соревнований \n2)... \n3)...\n4)...\n5)Выход из программы\n");
	while (1) {
		scanf_s("%c", &k);
		switch (k) {
		case '1':
			printf("\n| \t\tВыигранные партии |   Ничья   |  Разница пратий |      Очки   \n");
			for (int i = 0; i < 1; i++) { //Спортклубы
				for (int j = 0; j < 12; j++) {
					printf("%c", kom[i][j]);
				}
				for (int d = 0; d < 1; d++) {
					for (int z = 0; z < 4; z++) {
						printf("\t\t%d", array[d][z]);
					}
				}
				
				printf("\n");
				break;
			}


			for (int i = 1; i < 2; i++) {//МРСК
				for (int j = 0; j < 12; j++) {
					printf("%c", kom[i][j]);

				}
				for (int d = 1; d < 2; d++) {
					for (int z = 0; z < 4; z++) {
						printf("\t\t%d", array[d][z]);

					}
				}


				printf("\n");
				break;
			}
			for (int i = 2; i < 3; i++) {//Мехзав
				for (int j = 0; j < 12; j++) {
					printf("%c", kom[i][j]);

				}
				for (int d = 2; d < 3; d++) {
					for (int z = 0; z < 4; z++) {
						printf("\t\t%d", array[d][z]);

					}
				}


				printf("\n");
				break;
			}
			for (int i = 3; i < 4; i++) {//Промсинтез
				for (int j = 0; j < 12; j++) {
					printf("%c", kom[i][j]);

				}
				for (int d = 3; d < 4; d++) {
					for (int z = 0; z < 4; z++) {
						printf("\t\t%d", array[d][z]);

					}
				}


				printf("\n");
				break;
			}
			for (int i = 4; i < 5; i++) {//ЧХТГ
				for (int j = 0; j < 12; j++) {
					printf("%c", kom[i][j]);

				}
				for (int d = 4; d < 5; d++) {
					for (int z = 0; z < 4; z++) {
						printf("\t\t%d", array[d][z]);

					}
				}


				printf("\n");
				break;
			}
			for (int i = 5; i < 6; i++) {//11
				for (int j = 0; j < 12; j++) {
					printf("%c", kom[i][j]);

				}
				for (int d = 5; d < 6; d++) {
					for (int z = 0; z < 4; z++) {
						printf("\t\t%d", array[d][z]);

					}
				}


				printf("\n");
				break;
			}
			for (int i = 6; i < 7; i++) {//Здоровье
				for (int j = 0; j < 12; j++) {
					printf("%c", kom[i][j]);

				}
				for (int d = 6; d < 7; d++) {
					for (int z = 0; z < 4; z++) {
						printf("\t\t%d", array[d][z]);

					}
				}


				printf("\n");
				break;
			}
			for (int i = 7; i < 8; i++) {//ДОСААФ
				for (int j = 0; j < 12; j++) {
					printf("%c", kom[i][j]);

				}
				for (int d = 7; d < 8; d++) {
					for (int z = 0; z < 4; z++) {
						printf("\t\t%d", array[d][z]);

					}
				}


				printf("\n");
				break;
			}
         case '5':
			 exit(EXIT_SUCCESS);
			 break;
        }
		
	}
	getchar();
}