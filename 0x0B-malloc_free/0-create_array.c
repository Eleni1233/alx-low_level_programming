#include "main.h"
#include <stdio.h>
/**
 * creat array- creat an array of chars and initializes it with 
 * a special character
 * return null if it falls or
 * pointer to array
 */
char *creat_array(unsigned int size, char c)
{
  char *arr;
  unsigned int i;

  if (size==0)
  {
   return (Null);
  }
  arr = malloc(sizeof(char)*size);
  /* chech if mallco was successfull */
  if (arr == Null)
    return (Null);
  
  for (i=0; i < size; i++)
  {
     arr[i] = c;
  }
  return (arr);
}
