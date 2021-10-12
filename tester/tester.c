/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:04:56 by gudias            #+#    #+#             */
/*   Updated: 2021/10/12 19:01:41 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>
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
        /*if (ft_isalpha(tests[i]))
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

int main(void)
{	
	test_isalpha();
	test_isdigit();
	test_isalnum();
	return (0);
}
