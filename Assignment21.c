#include <stdio.h>
#include <stdlib.h>


int main()
{   FILE *source, *dest;
    char ch;
    char sourcePath[100], destPath[100];

    printf("Enter source file name:");
    scanf("%s",sourcePath);
    printf("Enter Destination File Name: ");
    scanf("%s",destPath);
     
    source = fopen(sourcePath,"r");
    dest=fopen(destPath,"w");
  
    while((ch = fgetc(source)) != EOF){
        fputc(ch,dest);

    }
    printf("FILE Copied");

    fclose(source);
    fclose(dest);

    return 0;

}
