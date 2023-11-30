#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
       int     ID;
       char    name[100];
       double  score; 
       };

int main(int argc, char *argv[])
{
  struct student s1 = {123, "Juyeop", 4.3};
  
  s1.ID = 2113199;
  s1.score = 3.5;
  
  strcpy(s1.name, "Minji");
  
  printf("ID : %i\n", s1.ID);
  printf("name : %s\n", s1.name);
  printf("score : %f\n", s1.score);
  
  system("PAUSE");	
  return 0;
}
