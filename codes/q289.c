#include  <stdio.h>
void GetInput(char* s);
int main(void)
{     
   char str[80];
   char *ptr = str;
   GetInput(ptr);
   puts(ptr);
   return 0;
}     
void GetInput(char* s)
{     
	scanf("%s", s);
    puts(s);
}     
