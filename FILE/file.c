#include<stdio.h>
#include<string.h>

int main()
{
    FILE *filePointer;
    char str[100];
    printf("Enter data to be written : ");
    gets(str);

    filePointer = fopen("newFile.txt","w");

    if ( filePointer == NULL )
    {
        printf("newFile.txt file failed to open");
    }
    else
    {
        if ( strlen ( str ) > 0 )
        {
            // writing in the file using fputs()
            fputs(str, filePointer) ;
            fputs("\n", filePointer) ;
        }

        // Closing the file using fclose()
        fclose(filePointer) ;
        printf("Data successfully written in file newFile.txt\n");

        }
        return 0;

}
