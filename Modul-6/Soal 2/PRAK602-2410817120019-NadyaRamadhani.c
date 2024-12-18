#include <stdio.h>
int main(){
    int ruang;
    scanf("%d", &ruang);
    int zetsu[ruang];
    for(int i=0; i<ruang; i++){
        scanf("%d", &zetsu[i]);
    }
    for(int i=0; i<ruang; i++){
        printf("%d ", zetsu[i] * (i+1));
    }

    return 0;
}