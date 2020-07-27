#include <stdio.h>

// Macro constant to calculate the array size
#define ARRAY_SIZE(arrVar) ((sizeof(arrVar))/(sizeof((arrVar)[0])))

// Macro constant for the Array size.
#define NAME_SIZE 8

int main(void)
{
  // Variable to hold the Name
  unsigned char ucName[NAME_SIZE] = {'P','r','a','s','a','d','h','\0'};

  // Variable to hold the Array Index
  unsigned int uiArrIndex;

  // Printing the size of the array
  printf("Size %d\n", ARRAY_SIZE(ucName));

  // Traversing through the Array
  for (uiArrIndex = 0; uiArrIndex &lt; (ARRAY_SIZE(ucName)); uiArrIndex++)
  {
    // Print the Character value with the Array index and Address
    printf("Char-%u:%c Address:%u\n", uiArrIndex,ucName[uiArrIndex],(unsigned int)&amp;ucName[uiArrIndex]);
  }

  //Return from the main()
  return (0);
}
