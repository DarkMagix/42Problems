#include <unistd.h>

void last_word(char *str)
{
  int j;
  int i;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 127)
	j = i + 1;
      i++;
    }
  while (str[j] > 32 && str[j] < 128)
    {
      write(1, &str[j], 1);
      j++;
    }
}

int main(int ac, char **av)
{
  if (ac == 2)
    last_word(av[1]);
  write(1, "\n", 1);
  return (0);
}
