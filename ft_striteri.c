
void    ft_striteri(char *str, char (*f)(unsigned int, char*))
{
  int   i;

  i = 0;
  while (str[i] != '\0')
  {
    f(i, str + i);
  }
}
