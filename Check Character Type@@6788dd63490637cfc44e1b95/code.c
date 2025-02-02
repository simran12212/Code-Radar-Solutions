#include <stdio.h>
int main(){
    char c;
    int a;
    scanf("%d",&a);
    scanf("%c",&c);
    if(a>=0 && a<=9){
        printf("Digit\n");
    }
    else if(c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U'||c=='a'|| c=='e'|| c=='i'|| c=='o'||c=='u'){
        printf("Vowel\n");
    }
    else if(c>='A'&& c<='Z')||(c>='a'&& c<='z'){
        printf("constant\n");
    }
    else{
        printf("Special Character");
    }
    return 0;
}