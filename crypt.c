#include <stdio.h>
#include <string.h>

char plain[100];
char crypt[100];


void encrypt(int k);
void decrypt(int k);

int main(){
    int k,i,c;
    char temp;

    printf("Enter k:");
    scanf("%d",&k);
    printf("\n1. Encrypt string\n2. Decrypt string\n3. Exit\nEnter choice:");
    scanf("%d", &c);

    switch(c)
    {
        case 1:
            printf("Enter string to encrypt:");
            scanf("%c", &temp);
            scanf("%[^\n]", &plain);
            printf("String length is: %d", strlen(plain));
            encrypt(k);
            printf("\nEncrypted string:%s", crypt);
            break;
        
        case 2:
            printf("Enter string to decrypt:");
            scanf("%c", &temp);
            scanf("%[^\n]", &crypt);
            printf("String length is: %d", strlen(crypt));
            decrypt(k);
            printf("\nDecrypted string:%s", plain);
            break;

        case 3:
        break;
    }
}

void encrypt(int k){
    int i;
    for(i=0; i<strlen(plain); i++){
        //printf("\nPosition:%d, ASCII code:%d", i, plain[i]);
        if(plain[i]==32){
            crypt[i]=plain[i];
        }
        else{
            crypt[i]=((plain[i]-65+k)%26)+65;
        }
    }
}

void decrypt(int k){
    int i;
    for(i=0; i<strlen(crypt); i++){
        if ((crypt[i]-(65+k))<0)
        {
            crypt[i]+=26;
            plain[i]=((crypt[i]-65-k)%26)+65;
            
        }
        else if(crypt[i]==32){
            plain[i]=crypt[i];
        }
        else{
            plain[i]=((crypt[i]-65-k)%26)+65;
        }
    }
}