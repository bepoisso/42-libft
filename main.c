/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 23:06:30 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/19 00:51:28 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(void)
{
/* 	//_________ISAPLHA_________
	printf("_________ISAPLHA_________\n");
	char c_isalpha;

	c_isalpha = 'a';
	printf(ft_isalpha(c_isalpha) != 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isalpha, isalpha(c_isalpha), ft_isalpha(c_isalpha));
	c_isalpha = 'z';
	printf(ft_isalpha(c_isalpha) != 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isalpha, isalpha(c_isalpha), ft_isalpha(c_isalpha));
	c_isalpha = 'A';
	printf(ft_isalpha(c_isalpha) != 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isalpha, isalpha(c_isalpha), ft_isalpha(c_isalpha));
	c_isalpha = 'Z';
	printf(ft_isalpha(c_isalpha) != 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isalpha, isalpha(c_isalpha), ft_isalpha(c_isalpha));
	c_isalpha = '@';
	printf(ft_isalpha(c_isalpha) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isalpha, isalpha(c_isalpha), ft_isalpha(c_isalpha));
	c_isalpha = '{';
	printf(ft_isalpha(c_isalpha) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isalpha, isalpha(c_isalpha), ft_isalpha(c_isalpha));
	//__________________ 

 	//_________ISDIGIT_________
	printf("\n_________ISDIGIT_________\n");
	char c_isdigit;

	c_isdigit = '0';
	printf(ft_isdigit(c_isdigit) != 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isdigit, isdigit(c_isdigit), ft_isdigit(c_isdigit));
	c_isdigit = '9';
	printf(ft_isdigit(c_isdigit) != 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isdigit, isdigit(c_isdigit), ft_isdigit(c_isdigit));
	c_isdigit = '/';
	printf(ft_isdigit(c_isdigit) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isdigit, isdigit(c_isdigit), ft_isdigit(c_isdigit));
	c_isdigit = ':';
	printf(ft_isdigit(c_isdigit) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isdigit, isdigit(c_isdigit), ft_isdigit(c_isdigit));
	c_isdigit = 'A';
	printf(ft_isdigit(c_isdigit) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isdigit, isdigit(c_isdigit), ft_isdigit(c_isdigit));
	c_isdigit = 'z';
	printf(ft_isdigit(c_isdigit) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isdigit, isdigit(c_isdigit), ft_isdigit(c_isdigit));
	//__________________
 

 //_________ISALNUM_________
	printf("\n_________ISALNUM_________\n");
	char c_isalnum;

	c_isalnum = '0';
	printf(ft_isalnum(c_isalnum) != 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isalnum, isalnum(c_isalnum), ft_isalnum(c_isalnum));
	c_isalnum = '9';
	printf(ft_isalnum(c_isalnum) != 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isalnum, isalnum(c_isalnum), ft_isalnum(c_isalnum));
	c_isalnum = 'A';
	printf(ft_isalnum(c_isalnum) != 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isalnum, isalnum(c_isalnum), ft_isalnum(c_isalnum));
	c_isalnum = 'z';
	printf(ft_isalnum(c_isalnum) != 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isalnum, isalnum(c_isalnum), ft_isalnum(c_isalnum));
	c_isalnum = 'a';
	printf(ft_isalnum(c_isalnum) != 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isalnum, isalnum(c_isalnum), ft_isalnum(c_isalnum));
	c_isalnum = 'Z';
	printf(ft_isalnum(c_isalnum) != 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isalnum, isalnum(c_isalnum), ft_isalnum(c_isalnum));
	c_isalnum = '/';
	printf(ft_isalnum(c_isalnum) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isalnum, isalnum(c_isalnum), ft_isalnum(c_isalnum));
	c_isalnum = ':';
	printf(ft_isalnum(c_isalnum) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isalnum, isalnum(c_isalnum), ft_isalnum(c_isalnum));
	c_isalnum = '@';
	printf(ft_isalnum(c_isalnum) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isalnum, isalnum(c_isalnum), ft_isalnum(c_isalnum));
	c_isalnum = '{';
	printf(ft_isalnum(c_isalnum) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isalnum, isalnum(c_isalnum), ft_isalnum(c_isalnum));
	//__________________ 

 	//_________ISASCII_________
	printf("\n_________ISACII_________\n");
	char c_isascii;

	c_isascii = 0;
	printf(ft_isascii(c_isascii) != 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %d | Expected : %d | Got : %d\n", c_isascii, isascii(c_isascii), ft_isascii(c_isascii));
	c_isascii = 127;
	printf(ft_isascii(c_isascii) != 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %d | Expected : %d | Got : %d\n", c_isascii, isascii(c_isascii), ft_isascii(c_isascii));
	c_isascii = 128;
	printf(ft_isascii(c_isascii) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %d | Expected : %d | Got : %d\n", c_isascii, isascii(c_isascii), ft_isascii(c_isascii));
	c_isascii = -1;
	printf(ft_isascii(c_isascii) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %d | Expected : %d | Got : %d\n", c_isascii, isascii(c_isascii), ft_isascii(c_isascii));
	//__________________ 

 	//_________ISPRINT_________
	printf("\n_________ISPRINT_________\n");
	char c_isprint;

	c_isprint = ' ';
	printf(ft_isprint(c_isprint) != 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isprint, isprint(c_isprint), ft_isprint(c_isprint));
	c_isprint = '~';
	printf(ft_isprint(c_isprint) != 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %c | Expected : %d | Got : %d\n", c_isprint, isprint(c_isprint), ft_isprint(c_isprint));
	c_isprint = 127;
	printf(ft_isprint(c_isprint) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %d | Expected : %d | Got : %d\n", c_isprint, isprint(c_isprint), ft_isprint(c_isprint));
	c_isprint = 31;
	printf(ft_isprint(c_isprint) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : %d | Expected : %d | Got : %d\n", c_isprint, isprint(c_isprint), ft_isprint(c_isprint));
	//__________________ 

 	//_________STRLEN_________
	printf("\n_________STRLEN_________\n");
	char str_strlen[] = "Hello, World!";
	long int	expected_strlen;
	long int	got_strlen;

	expected_strlen = strlen(str_strlen);
	got_strlen = ft_strlen(str_strlen);
	printf(expected_strlen == got_strlen ? "[PASS] " : "[FAIL] ");
	printf("strlen | EXPECTED : %ld | GOT : %ld\n", expected_strlen, got_strlen);
	//__________________

	//_________ATOI_________
	int	expected_atoi;
	int	got_atoi;
	
	char str_atoi[] = "42";
	expected_atoi = atoi(str_atoi);
	got_atoi = ft_atoi(str_atoi);
	printf(expected_atoi == got_atoi ? "[PASS] " : "[FAIL] ");
	printf("For : ft_atoi(%s) | Expected : %d | Got : %d\n", str_atoi, expected_atoi, got_atoi);

	char str2_atoi[] = "-42";
	expected_atoi = atoi(str2_atoi);
	got_atoi = ft_atoi(str2_atoi);
	printf(expected_atoi == got_atoi ? "[PASS] " : "[FAIL] ");
	printf("For : ft_atoi(%s) | Expected : %d | Got : %d\n", str2_atoi, expected_atoi, got_atoi);

	char str3_atoi[] = "    -101";
	expected_atoi = atoi(str3_atoi);
	got_atoi = ft_atoi(str3_atoi);
	printf(expected_atoi == got_atoi ? "[PASS] " : "[FAIL] ");
	printf("For : ft_atoi(%s) | Expected : %d | Got : %d\n", str3_atoi, expected_atoi, got_atoi);

	char str4_atoi[] = " \t\n\r\v\f -2147483648";
	expected_atoi = atoi(str4_atoi);
	got_atoi = ft_atoi(str4_atoi);
	printf(expected_atoi == got_atoi ? "[PASS] " : "[FAIL] ");
	printf("For : ft_atoi( \\t\\n\\r\\v\\f -2147483648) | Expected : %d | Got : %d\n", expected_atoi, got_atoi);

	char str5_atoi[] = "  2147483647";
	expected_atoi = atoi(str5_atoi);
	got_atoi = ft_atoi(str5_atoi);
	printf(expected_atoi == got_atoi ? "[PASS] " : "[FAIL] ");
	printf("For : ft_atoi(%s) | Expected : %d | Got : %d\n", str5_atoi, expected_atoi, got_atoi);

	char str6_atoi[] = " 42ABC";
	expected_atoi = atoi(str6_atoi);
	got_atoi = ft_atoi(str6_atoi);
	printf(expected_atoi == got_atoi ? "[PASS] " : "[FAIL] ");
	printf("For : ft_atoi(%s) | Expected : %d | Got : %d\n", str6_atoi, expected_atoi, got_atoi);

	char str7_atoi[] = "";
	expected_atoi = atoi(str7_atoi);
	got_atoi = ft_atoi(str7_atoi);
	printf(expected_atoi == got_atoi ? "[PASS] " : "[FAIL] ");
	printf("For : ft_atoi(%s) | Expected : %d | Got : %d\n", str7_atoi, expected_atoi, got_atoi);

	char str8_atoi[] = "  ABC-42";
	expected_atoi = atoi(str8_atoi);
	got_atoi = ft_atoi(str8_atoi);
	printf(expected_atoi == got_atoi ? "[PASS] " : "[FAIL] ");
	printf("For : ft_atoi(%s) | Expected : %d | Got : %d\n", str8_atoi, expected_atoi, got_atoi);

	char str9_atoi[] = "  -ABC42";
	expected_atoi = atoi(str9_atoi);
	got_atoi = ft_atoi(str9_atoi);
	printf(expected_atoi == got_atoi ? "[PASS] " : "[FAIL] ");
	printf("For : ft_atoi(%s) | Expected : %d | Got : %d\n", str9_atoi, expected_atoi, got_atoi);
	//__________________*/
}


