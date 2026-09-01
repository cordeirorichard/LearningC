#include <stdio.h>

int main(){

  /* Creating a typedef */
  
typedef int antelope;  // Make "antelope" an alias for "int"

antelope x = 10;       // Type "antelope" is the same as type "int"

 
 /* typedef and structs */

typedef struct { // Creating a alias to a anonymous struct
  char *name;
  int leg_count, speed;
} animal;  // "animal" is the typedef name;

 animal z;
 animal *ptr = &z;

 ptr->name = "Tiger";
 ptr->leg_count = 4;
 ptr->speed = 35;
 
 printf("Name: %s\n",ptr->name);
 printf("Leg count: %d\n",ptr->leg_count);
 printf("speed: %d",ptr->speed);
  
  return 0;
}
