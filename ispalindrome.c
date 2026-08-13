#include <stdio.h>

int main(){
    char pal[50];


    while (fgets(pal, sizeof(pal), stdin) != NULL) {
        
        if (pal[0] == 'F' && pal[1] == 'I' && pal[2] == 'M' && pal[3] == '\0') {
            break;
        }
       
        int len=0, vrf=0;

        for (int i = 0; pal[i] != '\0'; i++) {
            len++; 
        }

        for(int j=0; j<len; j++){
            if(pal[j] == pal[len-j-1]){
                vrf++;
            }
            else{
                break;
            }
        }

        if(vrf == len){
            printf("SIM\n"); 
        }
        else{
            printf("NAO\n"); 
        }
    }

    return 0;
}