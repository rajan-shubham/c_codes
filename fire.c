#include <stdio.h>
void main() {
 int var=0x43FF;
 printf("%X", var);
 int i=0;
 int j=0;
 if(i && j++)
 printf("%d..%d",i++,j);
}