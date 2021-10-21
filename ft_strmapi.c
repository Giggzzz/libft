
char    *ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
  char  *newstring;

  newstring = ft_strdup(str);
  ft_striteri(newstring, f)
  return (newstring);
}
