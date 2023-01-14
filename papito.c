#include <stdio.h>
#include <string.h>
#include "Dancing_Granny.h"

void process_download() {
 FILE *fp = fopen("abuelita.gif", "wb");
    if (fp) {
        fwrite(Dancing_Granny_gif, 1, Dancing_Granny_gif_len, fp);
        fclose(fp);
        printf("File abuelita.gif created successfully\n");
        printf("Make sure you spread the word! Visit https://bio.link/raicescy\n");
    } else {
        printf("Error creating file abuelita.gif\n");
    }
}

int main() {
    char input[8];
    printf("Enter text: ");
    fgets(input, sizeof(input), stdin);
    
    
    int len = strlen(input);
    if( input[len-1] == '\n')
        input[len-1] = 0;

    char labandera[] = {0x66, 0x6c, 0x61, 0x67, 0x7b, 0x66, 0x66, 0x34, 0x31, 0x61, 0x31, 0x64, 0x30, 0x30, 0x33, 0x30, 0x39, 0x31, 0x65, 0x31, 0x39, 0x39, 0x63, 0x33, 0x30, 0x37, 0x64, 0x39, 0x38, 0x63, 0x62, 0x31, 0x65, 0x38, 0x35, 0x64, 0x38, 0x7d};
    if (strcmp(input, "ATHL337") == 0) {
        printf("%s\n",labandera);
    } else if(strcmp(input,"HYPE")==0){
        process_download();
    } 
    else {
        printf("TRY HARDER!\n");
    }

    return 0;
}