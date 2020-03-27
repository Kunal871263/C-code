#include<stdio.h>
#include<string.h>
int main()
{
    FILE *filePointer;
    char str[100],str2[100];
    filePointer = fopen("newFile.txt","r");

    if(filePointer == NULL)
    {
        printf("newFile.txt failed to open.");
    }
    else
    {
        while(fgets(str, 100, filePointer) !=NULL)
        {

            for(int i=0; i<strlen(str) ; i++)
            {
                printf("%c %d\n",str[i],str[i]);
            }
        }
        fclose(filePointer);
    }
    return 0;
}
