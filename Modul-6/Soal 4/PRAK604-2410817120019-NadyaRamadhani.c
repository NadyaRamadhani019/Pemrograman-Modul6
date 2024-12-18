#include <stdio.h>
#include <string.h>
int main(){
    char kode[30];
    char pesan[30];
    scanf("%[^\n]%*c", &kode);
    scanf("%[^\n]%*c", &pesan);
    int kod = strlen(kode);
    int pes = strlen(pesan);
    if(kod != pes){
        printf("Panjang kalimat berbeda, pesan palsu");
    }else{
        int x=0;
        int y=0;
        for(int i=0; i<kod; i++){
            if(kode[i]==' ' && pesan[i]==' '){
                printf(" ");
            }else if(kode[i]==pesan[i]){
                printf("*");
                x++;
            }else{
                printf("#");
                y++;
            }
        }
        printf("\n* = %d", x);
        printf("\n# = %d", y);
        if(x>=y){
            printf("\nPesan Asli");
        }else{
            printf("\nPesan Palsu");
        }
    }

    return 0;
}