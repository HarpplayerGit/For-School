#include <stdio.h>
#include <limits.h>
int main()
{
  int i = 432423423;
  char *s = "./gg!wp/";
  char *s2 = "0";
  char c = '^';
  int u = -423423423;
  int x = 32424;
  int x2 = 0;
  int X = 1500;
  int ptr = 423423423;
  ft_printf("-------------------------------------\n");
  printf("\tbytes = %d\n",printf("hello world /%%/ /%d/ /%s/ /%s/ /%c/ /%u/ /%x/ /%x/ /%X/ /%p/ adb\n", i, s, s2, c, u, x, x2, X, ptr));
     printf("-------------------------------------\n");
  printf("\tbytes = %d\n",ft_printf("hello world /%%/ /%d/ /%s/ /%s/ /%c/ /%u/ /%x/ /%x/ /%X/ /%p/ adb\n", i, s, s2, c, u, x, x2, X, ptr));
     ft_printf("-------------------------------------\n");
     printf("\tbytes = %d\n",printf(" %p %p %p %p %p", LONG_MAX, LONG_MIN, -ULONG_MAX, 0, ULONG_MAX));
      printf("\tbytes = %d\n",ft_printf(" %p %p %p %p %p", LONG_MAX, LONG_MIN, -ULONG_MAX, 0, ULONG_MAX));
  return(0);
}
