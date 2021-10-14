/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:04:56 by gudias            #+#    #+#             */
/*   Updated: 2021/10/13 17:59:03 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include "../libft.h"

void	test_isalpha()
{
	int	i = 0;
	int	tests[6] = {-3, 0, 45, 67, 95, 115};

    printf("------------------------\n");
    printf("TESTING FT_ISALPHA\n");
    printf("------------------------\n");
    while(i < 6)
    {
       /* if (ft_isalpha(tests[i]))
            printf("%d (%c) is alpha\n", tests[i], tests[i]);
        else
            printf("%d (%c) is not alpha\n", tests[i], tests[i]);
        if(isalpha(tests[i]))
            printf("%d (%c) is alpha (ORIGINAL)\n", tests[i], tests[i]);
        else
            printf("%d (%c) is not alpha (ORIGINAL)\n", tests[i], tests[i]);
        i++;*/

       printf("TEST %d: %d (%c) --> ", i, tests[i], tests[i]);
        if (ft_isalpha(tests[i]) == isalpha(tests[i]))
            printf("OK\n");
        else
            printf("FAIL\n");
        i++;
    }
}

void    test_isdigit()
{
    int i = 0;
    int tests[6] = {-12, 0, 45, 49, 54, 60};

    printf("------------------------\n");
    printf("TESTING FT_ISDIGIT\n");
    printf("------------------------\n");
    while(i < 6)
    {
		printf("TEST %d: %d (%c) --> ", i, tests[i], tests[i]);
        if (ft_isdigit(tests[i]) == isdigit(tests[i]))
            printf("OK\n");
        else
            printf("FAIL\n");
        i++;
    }
}

void    test_isalnum()
{
    int i = 0;
    int tests[9] = {-12, 0, 45, 49, 54, 60, 69, 92, 115};

    printf("------------------------\n");
    printf("TESTING FT_ISALNUM\n");
    printf("------------------------\n");
    while(i < 6)
    {
        printf("TEST %d: %d (%c) --> ", i, tests[i], tests[i]);
        if (ft_isalnum(tests[i]) == isalnum(tests[i]))
            printf("OK\n");
        else
            printf("FAIL\n");
        i++;
    }
}

void    test_isascii()
{
    int i = 0;
    int tests[7] = {-4, 0, 7, 42, 72, 126, 128};

    printf("------------------------\n");
    printf("TESTING FT_ISASCII\n");
    printf("------------------------\n");
    while(i < 7)
    {
		printf("TEST %d: %d (%c) --> ", i, tests[i], tests[i]);
        if (ft_isascii(tests[i]) == isascii(tests[i]))
            printf("OK\n");
        else
            printf("FAIL\n");
        i++;
    }
}

void    test_isprint()
{
    int i = 0;
    int tests[7] = {-12, 0, 31, 32, 88, 127, 128};

    printf("------------------------\n");
    printf("TESTING FT_ISPRINT\n");
    printf("------------------------\n");
    while(i < 7)
    {
		printf("TEST %d: %d (%c) --> ", i, tests[i], tests[i]);
        if (ft_isprint(tests[i]) == isprint(tests[i]))
            printf("OK\n");
        else
            printf("FAIL\n");
        i++;
    }
}

void	test_strlen()
{
	char	*tests[5] = {"1", "fdlugh ldfiuhg ludfihg", "hjdjs#*$&83756dhg", "SDKJu3#*&#FHDH8357FHDU74", ""};
	int		i = 0;

	printf("------------------------\n");
    printf("TESTING FT_STRLEN\n");
    printf("------------------------\n");
	while (i < 5)
	{
		printf("TEST %d: %s --> ", i, tests[i]);
		if (ft_strlen(tests[i]) == strlen(tests[i]))
			printf("OK\n");
		else
			printf("FAIL\n");
		i++;
	}
}

void    test_toupper()
{
    int i = 0;
    int tests[6] = {-3, 0, 50, 70, 90, 110};

    printf("------------------------\n");
    printf("TESTING FT_TOUPPER\n");
    printf("------------------------\n");
    while(i < 6)
    {
		printf("TEST %d: %d (%c) --> ", i, tests[i], tests[i]);
        if (ft_toupper(tests[i]) == toupper(tests[i]))
            printf("OK\n");
        else
            printf("FAIL\n");
        i++;
    }
}

void    test_tolower()
{
    int i = 0;
    int tests[6] = {-3, 0, 50, 70, 90, 110};

    printf("------------------------\n");
    printf("TESTING FT_TOLOWER\n");
    printf("------------------------\n");
    while(i < 6)
    {
		printf("TEST %d: %d (%c) --> ", i, tests[i], tests[i]);
        if (ft_tolower(tests[i]) == tolower(tests[i]))
            printf("OK\n");
        else
            printf("FAIL\n");
        i++;
    }
}

/*void	test_memset()
{
	printf("------------------------\n");
	printf("TESTING FT_MEMSET\n");
	printf("------------------------\n");

}*/


int main(void)
{	
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_toupper();
	test_tolower();
	return (0);
}
