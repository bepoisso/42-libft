/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 23:06:30 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/19 02:54:53 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(void)
{
/*
	//_________ISAPLHA_________
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
	long int	expected_strlen;
	long int	got_strlen;

	char str_strlen[] = "Hello, World!";
	expected_strlen = strlen(str_strlen);
	got_strlen = ft_strlen(str_strlen);
	printf(expected_strlen == got_strlen ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strlen(%s) | EXPECTED : %ld | GOT : %ld\n", str_strlen, expected_strlen, got_strlen);

	char str2_strlen[] = "";
	expected_strlen = strlen(str2_strlen);
	got_strlen = ft_strlen(str2_strlen);
	printf(expected_strlen == got_strlen ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strlen(%s) | EXPECTED : %ld | GOT : %ld\n", str2_strlen, expected_strlen, got_strlen);
	
	char str3_strlen[] = "0123456789";
	expected_strlen = strlen(str3_strlen);
	got_strlen = ft_strlen(str3_strlen);
	printf(expected_strlen == got_strlen ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strlen(%s) | EXPECTED : %ld | GOT : %ld\n", str3_strlen, expected_strlen, got_strlen);
	//__________________

	//_________ATOI_________
	printf("\n_________ATOI_________\n");
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
	//__________________

	//_________STRLCPY_________
	printf("\n_________STRLCPY_________\n");
	size_t	expected_strlcpy;
	size_t	got_strlcpy;

	char dst1_strlcpy[10];
	char src1_strlcpy[] = "Hello";
	expected_strlcpy = strlcpy(dst1_strlcpy, src1_strlcpy, sizeof(dst1_strlcpy));
	got_strlcpy = ft_strlcpy(dst1_strlcpy, src1_strlcpy, sizeof(dst1_strlcpy));
	printf(expected_strlcpy == got_strlcpy ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strlcpy(dst, \"%s\", %lu) | Expected : %lu | Got : %lu | Result: \"%s\"\n", src1_strlcpy, sizeof(dst1_strlcpy), expected_strlcpy, got_strlcpy, dst1_strlcpy);

	char dst2_strlcpy[10];
	char src2_strlcpy[] = "Hello, World!";
	expected_strlcpy = strlcpy(dst2_strlcpy, src2_strlcpy, sizeof(dst2_strlcpy));
	got_strlcpy = ft_strlcpy(dst2_strlcpy, src2_strlcpy, sizeof(dst2_strlcpy));
	printf(expected_strlcpy == got_strlcpy ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strlcpy(dst, \"%s\", %lu) | Expected : %lu | Got : %lu | Result: \"%s\"\n", src2_strlcpy, sizeof(dst2_strlcpy), expected_strlcpy, got_strlcpy, dst2_strlcpy);

	char dst3_strlcpy[5];
	char src3_strlcpy[] = "abcd";
	expected_strlcpy = strlcpy(dst3_strlcpy, src3_strlcpy, sizeof(dst3_strlcpy));
	got_strlcpy = ft_strlcpy(dst3_strlcpy, src3_strlcpy, sizeof(dst3_strlcpy));
	printf(expected_strlcpy == got_strlcpy ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strlcpy(dst, \"%s\", %lu) | Expected : %lu | Got : %lu | Result: \"%s\"\n", src3_strlcpy, sizeof(dst3_strlcpy), expected_strlcpy, got_strlcpy, dst3_strlcpy);

	char dst4_strlcpy[1];
	char src4_strlcpy[] = "Test";
	expected_strlcpy = strlcpy(dst4_strlcpy, src4_strlcpy, sizeof(dst4_strlcpy));
	got_strlcpy = ft_strlcpy(dst4_strlcpy, src4_strlcpy, sizeof(dst4_strlcpy));
	printf(expected_strlcpy == got_strlcpy ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strlcpy(dst, \"%s\", %lu) | Expected : %lu | Got : %lu | Result: \"%s\"\n", src4_strlcpy, sizeof(dst4_strlcpy), expected_strlcpy, got_strlcpy, dst4_strlcpy);

	char dst5_strlcpy[10];
	char src5_strlcpy[] = "";
	expected_strlcpy = strlcpy(dst5_strlcpy, src5_strlcpy, sizeof(dst5_strlcpy));
	got_strlcpy = ft_strlcpy(dst5_strlcpy, src5_strlcpy, sizeof(dst5_strlcpy));
	printf(expected_strlcpy == got_strlcpy ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strlcpy(dst, \"%s\", %lu) | Expected : %lu | Got : %lu | Result: \"%s\"\n", src5_strlcpy, sizeof(dst5_strlcpy), expected_strlcpy, got_strlcpy, dst5_strlcpy);
	//__________________

	//_________STRLCAT_________
	printf("\n_________STRLCAT_________\n");
	size_t	expected_strlcat;
	size_t	got_strlcat;

	char dst1_strlcat[20] = "Hello";
	char dst1_ft_strlcat[20] = "Hello";
	char src1_strlcat[] = " World";
	expected_strlcat = strlcat(dst1_strlcat, src1_strlcat, sizeof(dst1_strlcat));
	got_strlcat = ft_strlcat(dst1_ft_strlcat, src1_strlcat, sizeof(dst1_ft_strlcat));
	printf(expected_strlcat == got_strlcat && strcmp(dst1_strlcat, dst1_ft_strlcat) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strlcat(dst, \"%s\", %lu) | Expected : %lu | Got : %lu | Result: \"%s\"\n", src1_strlcat, sizeof(dst1_strlcat), expected_strlcat, got_strlcat, dst1_ft_strlcat);

	char dst2_strlcat[15] = "Hello";
	char dst2_ft_strlcat[15] = "Hello";
	char src2_strlcat[] = " World!!!";
	expected_strlcat = strlcat(dst2_strlcat, src2_strlcat, sizeof(dst2_strlcat));
	got_strlcat = ft_strlcat(dst2_ft_strlcat, src2_strlcat, sizeof(dst2_ft_strlcat));
	printf(expected_strlcat == got_strlcat && strcmp(dst2_strlcat, dst2_ft_strlcat) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strlcat(dst, \"%s\", %lu) | Expected : %lu | Got : %lu | Result: \"%s\"\n", src2_strlcat, sizeof(dst2_strlcat), expected_strlcat, got_strlcat, dst2_ft_strlcat);

	char dst3_strlcat[10] = "Hello";
	char dst3_ft_strlcat[10] = "Hello";
	char src3_strlcat[] = "!";
	expected_strlcat = strlcat(dst3_strlcat, src3_strlcat, sizeof(dst3_strlcat));
	got_strlcat = ft_strlcat(dst3_ft_strlcat, src3_strlcat, sizeof(dst3_ft_strlcat));
	printf(expected_strlcat == got_strlcat && strcmp(dst3_strlcat, dst3_ft_strlcat) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strlcat(dst, \"%s\", %lu) | Expected : %lu | Got : %lu | Result: \"%s\"\n", src3_strlcat, sizeof(dst3_strlcat), expected_strlcat, got_strlcat, dst3_ft_strlcat);

	char dst4_strlcat[5] = "Hi";
	char dst4_ft_strlcat[5] = "Hi";
	char src4_strlcat[] = "There";
	expected_strlcat = strlcat(dst4_strlcat, src4_strlcat, sizeof(dst4_strlcat));
	got_strlcat = ft_strlcat(dst4_ft_strlcat, src4_strlcat, sizeof(dst4_ft_strlcat));
	printf(expected_strlcat == got_strlcat && strcmp(dst4_strlcat, dst4_ft_strlcat) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strlcat(dst, \"%s\", %lu) | Expected : %lu | Got : %lu | Result: \"%s\"\n", src4_strlcat, sizeof(dst4_strlcat), expected_strlcat, got_strlcat, dst4_ft_strlcat);

	char dst5_strlcat[15] = "";
	char dst5_ft_strlcat[15] = "";
	char src5_strlcat[] = "Empty";
	expected_strlcat = strlcat(dst5_strlcat, src5_strlcat, sizeof(dst5_strlcat));
	got_strlcat = ft_strlcat(dst5_ft_strlcat, src5_strlcat, sizeof(dst5_ft_strlcat));
	printf(expected_strlcat == got_strlcat && strcmp(dst5_strlcat, dst5_ft_strlcat) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strlcat(dst, \"%s\", %lu) | Expected : %lu | Got : %lu | Result: \"%s\"\n", src5_strlcat, sizeof(dst5_strlcat), expected_strlcat, got_strlcat, dst5_ft_strlcat);

	char dst6_strlcat[10] = "123";
	char dst6_ft_strlcat[10] = "123";
	char src6_strlcat[] = "456789";
	expected_strlcat = strlcat(dst6_strlcat, src6_strlcat, sizeof(dst6_strlcat));
	got_strlcat = ft_strlcat(dst6_ft_strlcat, src6_strlcat, sizeof(dst6_ft_strlcat));
	printf(expected_strlcat == got_strlcat && strcmp(dst6_strlcat, dst6_ft_strlcat) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strlcat(dst, \"%s\", %lu) | Expected : %lu | Got : %lu | Result: \"%s\"\n", src6_strlcat, sizeof(dst6_strlcat), expected_strlcat, got_strlcat, dst6_ft_strlcat);

	char dst7_strlcat[1] = "";
	char dst7_ft_strlcat[1] = "";
	char src7_strlcat[] = "Test";
	expected_strlcat = strlcat(dst7_strlcat, src7_strlcat, sizeof(dst7_strlcat));
	got_strlcat = ft_strlcat(dst7_ft_strlcat, src7_strlcat, sizeof(dst7_ft_strlcat));
	printf(expected_strlcat == got_strlcat && strcmp(dst7_strlcat, dst7_ft_strlcat) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strlcat(dst, \"%s\", %lu) | Expected : %lu | Got : %lu | Result: \"%s\"\n", src7_strlcat, sizeof(dst7_strlcat), expected_strlcat, got_strlcat, dst7_ft_strlcat);
	//__________________
	*/
}


