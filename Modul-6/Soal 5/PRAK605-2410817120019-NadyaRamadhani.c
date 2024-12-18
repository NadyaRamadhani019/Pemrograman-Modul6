#include <stdio.h>
int main(){
    int MatA[10][10], MatB[10][10], MatAXB[10][10];
    int ordo;
    scanf("%d", &ordo);
    printf("Matriks A\n");
    for(int i=0; i<ordo; i++){
        for(int j=0; j<ordo; j++){
            scanf("%d", &MatA[i][j]);
        }
    }
    printf("Matriks B\n");
    for(int i=0; i<ordo; i++){
        for(int j=0; j<ordo; j++){
            scanf("%d", &MatB[i][j]);
        }
    }
    for(int i=0; i<ordo; i++){
        for(int j=0; j<ordo; j++){
            int hasil = 0;
            for(int x=0; x<ordo; x++){
                hasil += MatA[i][x] * MatB[x][j];
            }
            MatAXB[i][j] = hasil;
        }
    }
    printf("Matriks AXB\n");
    for(int i=0; i<ordo; i++){
        for(int j=0; j<ordo; j++){
            printf("%d ", MatAXB[i][j]);
        }
        printf("\n");
    }

    return 0;
}