#include <stdio.h>
#include <string.h>

int main() {
    int a;
    char kataMasuk[15];

    printf("Kalimat :   ");
    scanf("%s", kataMasuk); 
    printf("\nMau berapa baris ?   ");
    scanf("%d", &a); 
  
    char kataSementara[15];
    strcpy(kataSementara, kataMasuk);
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < strlen(kataSementara); j++) {
            if (a == 3) {
                if ((i == 0 && (j == 0 || j == 1 || j == 3 || j == 4 || j == 5 || j == 7 || j == 8 || j == 9 || j == 11 || j == 12 || j == 13)) 
                    ||
                    (i == 1 && (j == 0 || j == 2 || j == 4 || j == 6 || j == 8 || j == 10 || j == 12 )) 
                    ||
                    (i == 2 && (j == 2 || j == 3 || j == 1 || j == 5 || j == 6 || j == 7 || j == 9 || j == 10 || j == 11 || j == 13))
                    ) {
                    kataMasuk[j] = ' ';
                }
            } else if (a == 5)
            {
                if ((i == 0 && ( j == 0 || j == 1 || j == 2 || j == 3 || j == 5 || j == 6 || j == 7 || j == 8 || j == 9 || j == 10 || j == 11 || j == 13 )) ||
                    (i == 1 && ( j == 0 || j == 1 || j == 2 || j == 4 || j == 6 || j == 7 || j == 8 || j == 9 || j == 10 || j == 12 )) || 
                    (i == 2 && ( j == 0 || j == 1 || j == 3 || j == 4 || j == 5 || j == 7 || j == 8 || j == 9 || j == 11 || j == 12 || j == 13)) || 
                    (i == 3 && ( j == 0 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 8 || j == 10 || j == 11 || j == 12 || j == 13)) ||
                    (i == 4 && ( j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 9 || j == 10 || j == 11 || j == 12 || j == 13)))
                {
                    kataMasuk[j] = ' ';
                } 
            }
        }  
        printf("%s\n", kataMasuk);
        strcpy(kataMasuk, kataSementara);
    }

    return 0;
}
