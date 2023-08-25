#include <stdio.h>
int main() {
    int num,n1,n2;
    printf("Enter an integer: ");
    scanf("%d", &num);
    n1=num/10;
    n2=num%10;

     if (n1 % 2==0 && n2 % 2!=0)  {
        printf("%d Deva E and O\n", num);
        }
     else if (n1 % 2 != 0 && n2 % 2 == 0) {
        printf("%d is Dharshini O and E\n", num);
        }
     else if(n1 % 2 != 0 && n2 % 2 != 0) {
        printf("%d Devadharshini O\n", num);
        }
     else  {
        printf("%dE\n", num);
        }
    return 0;
}













