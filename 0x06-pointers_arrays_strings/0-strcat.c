#include "main.h"

/**

 *_strcat - concatenates two strings

 *@dest: A pointer to a character that will be changed

 *@src: A pointer to a character that will also be changed

 *Return: dest

 */



char *_strcat(char *dest, char *src)

{

int k, w;



k = 0;

while (dest[k] != '\0')

{

k++;

}



k = 0;

while (src[w] != '\0')

{

dest[k] = src[w];

w++;

k++;

}

dest[k] = '\0';



return (dest);

}
