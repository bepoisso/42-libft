/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 23:06:30 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/20 18:41:07 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

char	*strnstr(const char *haystack, const char *needle, size_t len);
void	print_memory(const void *ptr, size_t size);

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
	

	//_________STRNCMP_________
	printf("\n_________STRNCMP_________\n");
	int	expected_strncmp;
	int	got_strncmp;

	char str1_strncmp[] = "Hello";
	char str2_strncmp[] = "Hello";
	expected_strncmp = strncmp(str1_strncmp, str2_strncmp, 5);
	got_strncmp = ft_strncmp(str1_strncmp, str2_strncmp, 5);
	printf(expected_strncmp == got_strncmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strncmp(\"%s\", \"%s\", 5) | Expected : %d | Got : %d\n", str1_strncmp, str2_strncmp, expected_strncmp, got_strncmp);

	char str3_strncmp[] = "Hello";
	char str4_strncmp[] = "HelLo";
	expected_strncmp = strncmp(str3_strncmp, str4_strncmp, 5);
	got_strncmp = ft_strncmp(str3_strncmp, str4_strncmp, 5);
	printf(expected_strncmp == got_strncmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strncmp(\"%s\", \"%s\", 5) | Expected : %d | Got : %d\n", str3_strncmp, str4_strncmp, expected_strncmp, got_strncmp);

	char str5_strncmp[] = "Hello";
	char str6_strncmp[] = "Hell";
	expected_strncmp = strncmp(str5_strncmp, str6_strncmp, 5);
	got_strncmp = ft_strncmp(str5_strncmp, str6_strncmp, 5);
	printf(expected_strncmp == got_strncmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strncmp(\"%s\", \"%s\", 5) | Expected : %d | Got : %d\n", str5_strncmp, str6_strncmp, expected_strncmp, got_strncmp);

	char str7_strncmp[] = "Hello";
	char str8_strncmp[] = "HelloWorld";
	expected_strncmp = strncmp(str7_strncmp, str8_strncmp, 5);
	got_strncmp = ft_strncmp(str7_strncmp, str8_strncmp, 5);
	printf(expected_strncmp == got_strncmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strncmp(\"%s\", \"%s\", 5) | Expected : %d | Got : %d\n", str7_strncmp, str8_strncmp, expected_strncmp, got_strncmp);

	char str9_strncmp[] = "Hello";
	char str10_strncmp[] = "World";
	expected_strncmp = strncmp(str9_strncmp, str10_strncmp, 3);
	got_strncmp = ft_strncmp(str9_strncmp, str10_strncmp, 3);
	printf(expected_strncmp == got_strncmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strncmp(\"%s\", \"%s\", 3) | Expected : %d | Got : %d\n", str9_strncmp, str10_strncmp, expected_strncmp, got_strncmp);

	char str11_strncmp[] = "abcd";
	char str12_strncmp[] = "abce";
	expected_strncmp = strncmp(str11_strncmp, str12_strncmp, 4);
	got_strncmp = ft_strncmp(str11_strncmp, str12_strncmp, 4);
	printf(expected_strncmp == got_strncmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strncmp(\"%s\", \"%s\", 4) | Expected : %d | Got : %d\n", str11_strncmp, str12_strncmp, expected_strncmp, got_strncmp);

	char str13_strncmp[] = "test";
	char str14_strncmp[] = "test";
	expected_strncmp = strncmp(str13_strncmp, str14_strncmp, 0);
	got_strncmp = ft_strncmp(str13_strncmp, str14_strncmp, 0);
	printf(expected_strncmp == got_strncmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strncmp(\"%s\", \"%s\", 0) | Expected : %d | Got : %d\n", str13_strncmp, str14_strncmp, expected_strncmp, got_strncmp);
	
	char str15_strncmp[] = "Hell";
	char str16_strncmp[] = "Hello";
	expected_strncmp = strncmp(str15_strncmp, str16_strncmp, 5);
	got_strncmp = ft_strncmp(str15_strncmp, str16_strncmp, 5);
	printf(expected_strncmp == got_strncmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strncmp(\"%s\", \"%s\", 5) | Expected : %d | Got : %d\n", str15_strncmp, str16_strncmp, expected_strncmp, got_strncmp);
	//__________________
	

	//_________STRCHR_________
	printf("\n_________STRCHR_________\n");
	char	*expected_strchr;
	char	*got_strchr;

	char str1_strchr[] = "Hello, World!";
	expected_strchr = strchr(str1_strchr, 'W');
	got_strchr = ft_strchr(str1_strchr, 'W');
	printf(expected_strchr == got_strchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strchr(\"%s\", 'W') | Expected : \"%s\" | Got : \"%s\"\n", str1_strchr, expected_strchr, got_strchr);

	char str2_strchr[] = "Hello, World!";
	expected_strchr = strchr(str2_strchr, 'o');
	got_strchr = ft_strchr(str2_strchr, 'o');
	printf(expected_strchr == got_strchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strchr(\"%s\", 'o') | Expected : \"%s\" | Got : \"%s\"\n", str2_strchr, expected_strchr, got_strchr);

	char str3_strchr[] = "Hello, World!";
	expected_strchr = strchr(str3_strchr, 'z');
	got_strchr = ft_strchr(str3_strchr, 'z');
	printf(expected_strchr == got_strchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strchr(\"%s\", 'z') | Expected : \"%s\" | Got : \"%s\"\n", str3_strchr, expected_strchr ? expected_strchr : "NULL", got_strchr ? got_strchr : "NULL");

	char str4_strchr[] = "Hello, World!";
	expected_strchr = strchr(str4_strchr, ',');
	got_strchr = ft_strchr(str4_strchr, ',');
	printf(expected_strchr == got_strchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strchr(\"%s\", ',') | Expected : \"%s\" | Got : \"%s\"\n", str4_strchr, expected_strchr, got_strchr);

	char str5_strchr[] = "Hello, World!";
	expected_strchr = strchr(str5_strchr, 'H');
	got_strchr = ft_strchr(str5_strchr, 'H');
	printf(expected_strchr == got_strchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strchr(\"%s\", 'H') | Expected : \"%s\" | Got : \"%s\"\n", str5_strchr, expected_strchr, got_strchr);

	char str6_strchr[] = "Hello, World!";
	expected_strchr = strchr(str6_strchr, '\0');
	got_strchr = ft_strchr(str6_strchr, '\0');
	printf(expected_strchr == got_strchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strchr(\"%s\", '\\0') | Expected : \"%s\" | Got : \"%s\"\n", str6_strchr, expected_strchr, got_strchr);

	char str7_strchr[] = "";
	expected_strchr = strchr(str7_strchr, 'a');
	got_strchr = ft_strchr(str7_strchr, 'a');
	printf(expected_strchr == got_strchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strchr(\"%s\", 'a') | Expected : \"%s\" | Got : \"%s\"\n", str7_strchr, expected_strchr ? expected_strchr : "NULL", got_strchr ? got_strchr : "NULL");
	//__________________
	

	//_________STRRCHR_________
	printf("\n_________STRRCHR_________\n");
	char	*expected_strrchr;
	char	*got_strrchr;

	char str1_strrchr[] = "Hello, World!";
	expected_strrchr = strrchr(str1_strrchr, 'o');
	got_strrchr = ft_strrchr(str1_strrchr, 'o');
	printf(expected_strrchr == got_strrchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strrchr(\"%s\", 'o') | Expected : \"%s\" | Got : \"%s\"\n", str1_strrchr, expected_strrchr, got_strrchr);

	char str2_strrchr[] = "Hello, World!";
	expected_strrchr = strrchr(str2_strrchr, 'l');
	got_strrchr = ft_strrchr(str2_strrchr, 'l');
	printf(expected_strrchr == got_strrchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strrchr(\"%s\", 'l') | Expected : \"%s\" | Got : \"%s\"\n", str2_strrchr, expected_strrchr, got_strrchr);

	char str3_strrchr[] = "Hello, World!";
	expected_strrchr = strrchr(str3_strrchr, 'z');
	got_strrchr = ft_strrchr(str3_strrchr, 'z');
	printf(expected_strrchr == got_strrchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strrchr(\"%s\", 'z') | Expected : \"%s\" | Got : \"%s\"\n", str3_strrchr, expected_strrchr ? expected_strrchr : "NULL", got_strrchr ? got_strrchr : "NULL");

	char str4_strrchr[] = "Hello, World!";
	expected_strrchr = strrchr(str4_strrchr, ',');
	got_strrchr = ft_strrchr(str4_strrchr, ',');
	printf(expected_strrchr == got_strrchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strrchr(\"%s\", ',') | Expected : \"%s\" | Got : \"%s\"\n", str4_strrchr, expected_strrchr, got_strrchr);

	char str5_strrchr[] = "Hello, World!";
	expected_strrchr = strrchr(str5_strrchr, 'H');
	got_strrchr = ft_strrchr(str5_strrchr, 'H');
	printf(expected_strrchr == got_strrchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strrchr(\"%s\", 'H') | Expected : \"%s\" | Got : \"%s\"\n", str5_strrchr, expected_strrchr, got_strrchr);

	char str6_strrchr[] = "Hello, World!";
	expected_strrchr = strrchr(str6_strrchr, '\0');
	got_strrchr = ft_strrchr(str6_strrchr, '\0');
	printf(expected_strrchr == got_strrchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strrchr(\"%s\", '\\0') | Expected : \"%s\" | Got : \"%s\"\n", str6_strrchr, expected_strrchr, got_strrchr);

	char str7_strrchr[] = "";
	expected_strrchr = strrchr(str7_strrchr, 'a');
	got_strrchr = ft_strrchr(str7_strrchr, 'a');
	printf(expected_strrchr == got_strrchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strrchr(\"%s\", 'a') | Expected : \"%s\" | Got : \"%s\"\n", str7_strrchr, expected_strrchr ? expected_strrchr : "NULL", got_strrchr ? got_strrchr : "NULL");
	//__________________
	
	
	//_________STRNSTR_________
	printf("\n_________STRNSTR_________\n");
	char	*expected_strnstr;
	char	*got_strnstr;

	char haystack1[] = "Hello, World!";
	char needle1[] = "World";
	expected_strnstr = strnstr(haystack1, needle1, 13);
	got_strnstr = ft_strnstr(haystack1, needle1, 13);
	printf(expected_strnstr == got_strnstr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strnstr(\"%s\", \"%s\", 13) | Expected : \"%s\" | Got : \"%s\"\n", haystack1, needle1, expected_strnstr, got_strnstr);

	char haystack2[] = "Hello, World!";
	char needle2[] = "World";
	expected_strnstr = strnstr(haystack2, needle2, 7);
	got_strnstr = ft_strnstr(haystack2, needle2, 7);
	printf(expected_strnstr == got_strnstr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strnstr(\"%s\", \"%s\", 7) | Expected : \"%s\" | Got : \"%s\"\n", haystack2, needle2, expected_strnstr ? expected_strnstr : "NULL", got_strnstr ? got_strnstr : "NULL");

	char haystack3[] = "Hello, World!";
	char needle3[] = "o,";
	expected_strnstr = strnstr(haystack3, needle3, 5);
	got_strnstr = ft_strnstr(haystack3, needle3, 5);
	printf(expected_strnstr == got_strnstr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strnstr(\"%s\", \"%s\", 5) | Expected : \"%s\" | Got : \"%s\"\n", haystack3, needle3, expected_strnstr ? expected_strnstr : "NULL", got_strnstr ? got_strnstr : "NULL");

	char haystack4[] = "Hello, World!";
	char needle4[] = "Hello";
	expected_strnstr = strnstr(haystack4, needle4, 5);
	got_strnstr = ft_strnstr(haystack4, needle4, 5);
	printf(expected_strnstr == got_strnstr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strnstr(\"%s\", \"%s\", 5) | Expected : \"%s\" | Got : \"%s\"\n", haystack4, needle4, expected_strnstr, got_strnstr);

	char haystack5[] = "Hello, World!";
	char needle5[] = "";
	expected_strnstr = strnstr(haystack5, needle5, 13);
	got_strnstr = ft_strnstr(haystack5, needle5, 13);
	printf(expected_strnstr == got_strnstr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strnstr(\"%s\", \"%s\", 13) | Expected : \"%s\" | Got : \"%s\"\n", haystack5, needle5, expected_strnstr, got_strnstr);

	char haystack6[] = "Hello, World!";
	char needle6[] = "World";
	expected_strnstr = strnstr(haystack6, needle6, 0);
	got_strnstr = ft_strnstr(haystack6, needle6, 0);
	printf(expected_strnstr == got_strnstr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strnstr(\"%s\", \"%s\", 0) | Expected : \"%s\" | Got : \"%s\"\n", haystack6, needle6, expected_strnstr ? expected_strnstr : "NULL", got_strnstr ? got_strnstr : "NULL");

	char haystack7[] = "";
	char needle7[] = "World!";
	expected_strnstr = strnstr(haystack7, needle7, 13);
	got_strnstr = ft_strnstr(haystack7, needle7, 13);
	printf(expected_strnstr == got_strnstr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strnstr(\"%s\", \"%s\", 13) | Expected : \"%s\" | Got : \"%s\"\n", haystack7, needle7, expected_strnstr ? expected_strnstr : "NULL", got_strnstr ? got_strnstr : "NULL");
	//__________________

	//_________TOUPPER_________
	printf("\n_________TOUPPER_________\n");
	int	expected_toupper;
	int	got_toupper;

	char c_toupper = 'a';
	expected_toupper = toupper(c_toupper);
	got_toupper = ft_toupper(c_toupper);
	printf(expected_toupper == got_toupper ? "[PASS] " : "[FAIL] ");
	printf("For : ft_toupper('%c') | Expected : '%c' | Got : '%c'\n", c_toupper, expected_toupper, got_toupper);

	c_toupper = 'z';
	expected_toupper = toupper(c_toupper);
	got_toupper = ft_toupper(c_toupper);
	printf(expected_toupper == got_toupper ? "[PASS] " : "[FAIL] ");
	printf("For : ft_toupper('%c') | Expected : '%c' | Got : '%c'\n", c_toupper, expected_toupper, got_toupper);

	c_toupper = 'A';
	expected_toupper = toupper(c_toupper);
	got_toupper = ft_toupper(c_toupper);
	printf(expected_toupper == got_toupper ? "[PASS] " : "[FAIL] ");
	printf("For : ft_toupper('%c') | Expected : '%c' | Got : '%c'\n", c_toupper, expected_toupper, got_toupper);

	c_toupper = 'Z';
	expected_toupper = toupper(c_toupper);
	got_toupper = ft_toupper(c_toupper);
	printf(expected_toupper == got_toupper ? "[PASS] " : "[FAIL] ");
	printf("For : ft_toupper('%c') | Expected : '%c' | Got : '%c'\n", c_toupper, expected_toupper, got_toupper);

	c_toupper = '1';
	expected_toupper = toupper(c_toupper);
	got_toupper = ft_toupper(c_toupper);
	printf(expected_toupper == got_toupper ? "[PASS] " : "[FAIL] ");
	printf("For : ft_toupper('%c') | Expected : '%c' | Got : '%c'\n", c_toupper, expected_toupper, got_toupper);

	c_toupper = '!';
	expected_toupper = toupper(c_toupper);
	got_toupper = ft_toupper(c_toupper);
	printf(expected_toupper == got_toupper ? "[PASS] " : "[FAIL] ");
	printf("For : ft_toupper('%c') | Expected : '%c' | Got : '%c'\n", c_toupper, expected_toupper, got_toupper);

	c_toupper = ' ';
	expected_toupper = toupper(c_toupper);
	got_toupper = ft_toupper(c_toupper);
	printf(expected_toupper == got_toupper ? "[PASS] " : "[FAIL] ");
	printf("For : ft_toupper('%c') | Expected : '%c' | Got : '%c'\n", c_toupper, expected_toupper, got_toupper);

	c_toupper = '#';
	expected_toupper = toupper(c_toupper);
	got_toupper = ft_toupper(c_toupper);
	printf(expected_toupper == got_toupper ? "[PASS] " : "[FAIL] ");
	printf("For : ft_toupper('%c') | Expected : '%c' | Got : '%c'\n", c_toupper, expected_toupper, got_toupper);
	//__________________

	//_________TOLOWER_________
	printf("\n_________TOLOWER_________\n");
	int	expected_tolower;
	int	got_tolower;

	char c_tolower = 'A';
	expected_tolower = tolower(c_tolower);
	got_tolower = ft_tolower(c_tolower);
	printf(expected_tolower == got_tolower ? "[PASS] " : "[FAIL] ");
	printf("For : ft_tolower('%c') | Expected : '%c' | Got : '%c'\n", c_tolower, expected_tolower, got_tolower);

	c_tolower = 'Z';
	expected_tolower = tolower(c_tolower);
	got_tolower = ft_tolower(c_tolower);
	printf(expected_tolower == got_tolower ? "[PASS] " : "[FAIL] ");
	printf("For : ft_tolower('%c') | Expected : '%c' | Got : '%c'\n", c_tolower, expected_tolower, got_tolower);

	c_tolower = 'a';
	expected_tolower = tolower(c_tolower);
	got_tolower = ft_tolower(c_tolower);
	printf(expected_tolower == got_tolower ? "[PASS] " : "[FAIL] ");
	printf("For : ft_tolower('%c') | Expected : '%c' | Got : '%c'\n", c_tolower, expected_tolower, got_tolower);

	c_tolower = 'z';
	expected_tolower = tolower(c_tolower);
	got_tolower = ft_tolower(c_tolower);
	printf(expected_tolower == got_tolower ? "[PASS] " : "[FAIL] ");
	printf("For : ft_tolower('%c') | Expected : '%c' | Got : '%c'\n", c_tolower, expected_tolower, got_tolower);

	c_tolower = '1';
	expected_tolower = tolower(c_tolower);
	got_tolower = ft_tolower(c_tolower);
	printf(expected_tolower == got_tolower ? "[PASS] " : "[FAIL] ");
	printf("For : ft_tolower('%c') | Expected : '%c' | Got : '%c'\n", c_tolower, expected_tolower, got_tolower);

	c_tolower = '!';
	expected_tolower = tolower(c_tolower);
	got_tolower = ft_tolower(c_tolower);
	printf(expected_tolower == got_tolower ? "[PASS] " : "[FAIL] ");
	printf("For : ft_tolower('%c') | Expected : '%c' | Got : '%c'\n", c_tolower, expected_tolower, got_tolower);

	c_tolower = ' ';
	expected_tolower = tolower(c_tolower);
	got_tolower = ft_tolower(c_tolower);
	printf(expected_tolower == got_tolower ? "[PASS] " : "[FAIL] ");
	printf("For : ft_tolower('%c') | Expected : '%c' | Got : '%c'\n", c_tolower, expected_tolower, got_tolower);

	c_tolower = '#';
	expected_tolower = tolower(c_tolower);
	got_tolower = ft_tolower(c_tolower);
	printf(expected_tolower == got_tolower ? "[PASS] " : "[FAIL] ");
	printf("For : ft_tolower('%c') | Expected : '%c' | Got : '%c'\n", c_tolower, expected_tolower, got_tolower);
	//__________________

		printf("\n_________BZERO_________\n");

	int		result;
	char	expected[10];
	char	got[10];

	char str1[10] = "Hello";
	memcpy(expected, str1, sizeof(str1));
	memcpy(got, str1, sizeof(str1));
	bzero(expected + 2, 3);
	ft_bzero(got + 2, 3);
	result = memcmp(expected, got, sizeof(str1));
	printf(result == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_bzero(str1 + 2, 3) | Expected : ");
	print_memory(expected, sizeof(expected));
	printf(" | Got : ");
	print_memory(got, sizeof(got));
	printf("\n");

	char str2[10] = "World";
	memcpy(expected, str2, sizeof(str2));
	memcpy(got, str2, sizeof(str2));
	bzero(expected, 5);
	ft_bzero(got, 5);
	result = memcmp(expected, got, sizeof(str2));
	printf(result == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_bzero(str2, 5) | Expected : ");
	print_memory(expected, sizeof(expected));
	printf(" | Got : ");
	print_memory(got, sizeof(got));
	printf("\n");

	char str3[10] = "Test";
	memcpy(expected, str3, sizeof(str3));
	memcpy(got, str3, sizeof(str3));
	bzero(expected + 1, 0);
	ft_bzero(got + 1, 0);
	result = memcmp(expected, got, sizeof(str3));
	printf(result == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_bzero(str3 + 1, 0) | Expected : ");
	print_memory(expected, sizeof(expected));
	printf(" | Got : ");
	print_memory(got, sizeof(got));
	printf("\n");

	char str4[10] = "42";
	memcpy(expected, str4, sizeof(str4));
	memcpy(got, str4, sizeof(str4));
	bzero(expected, 10);
	ft_bzero(got, 10);
	result = memcmp(expected, got, sizeof(str4));
	printf(result == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_bzero(str4, 10) | Expected : ");
	print_memory(expected, sizeof(expected));
	printf(" | Got : ");
	print_memory(got, sizeof(got));
	printf("\n");

	//__________________
	*/

 	 //_________MEMSET_________
	printf("\n_________MEMSET_________\n");

	char str1[10] = "Hello";
	memset(str1 + 2, 'A', 3);
	ft_memset(str1 + 2, 'A', 3);
	printf(memcmp(str1, "HeAAA", 6) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str1 + 2, 'A', 3) | Expected : ");
	print_memory("HeAAA", 6);
	printf(" | Got : ");
	print_memory(str1, 6);
	printf("\n");

	char str2[10] = "World";
	memset(str2, '*', 5);
	ft_memset(str2, '*', 5);
	printf(memcmp(str2, "*****", 6) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str2, '*', 5) | Expected : ");
	print_memory("*****", 6);
	printf(" | Got : ");
	print_memory(str2, 6);
	printf("\n");

	char str3[10] = "Test";
	memset(str3 + 1, 'B', 2);
	ft_memset(str3 + 1, 'B', 2);
	printf(memcmp(str3, "TBBt", 5) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str3 + 1, 'B', 2) | Expected : ");
	print_memory("TBBt", 5);
	printf(" | Got : ");
	print_memory(str3, 5);
	printf("\n");

	char str4[10] = "abcdef";
	memset(str4, '0', 3);
	ft_memset(str4, '0', 3);
	printf(memcmp(str4, "000def", 7) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str4, '0', 3) | Expected : ");
	print_memory("000def", 7);
	printf(" | Got : ");
	print_memory(str4, 7);
	printf("\n");

	char str5[10] = "123456789";
	memset(str5 + 4, 'X', 5);
	ft_memset(str5 + 4, 'X', 5);
	printf(memcmp(str5, "1234XXXXX", 9) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str5 + 4, 'X', 5) | Expected : ");
	print_memory("1234XXXXX", 9);
	printf(" | Got : ");
	print_memory(str5, 9);
	printf("\n");

	char str6[10] = "xxxxxxx";
	memset(str6, 'Y', 4);
	ft_memset(str6, 'Y', 4);
	printf(memcmp(str6, "YYYYxxx", 7) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str6, 'Y', 4) | Expected : ");
	print_memory("YYYYxxx", 7);
	printf(" | Got : ");
	print_memory(str6, 7);
	printf("\n");

	char str7[10] = "abcde";
	memset(str7 + 2, '!', 3);
	ft_memset(str7 + 2, '!', 3);
	printf(memcmp(str7, "ab!!!", 5) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str7 + 2, '!', 3) | Expected : ");
	print_memory("ab!!!", 5);
	printf(" | Got : ");
	print_memory(str7, 5);
	printf("\n");

	char str8[10] = "zzzzzzzzz";
	memset(str8, ' ', 9);
	ft_memset(str8, ' ', 9);
	printf(memcmp(str8, "         ", 9) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str8, ' ', 9) | Expected : ");
	print_memory("         ", 9);
	printf(" | Got : ");
	print_memory(str8, 9);
	printf("\n");

	char str9[10] = "1234";
	memset(str9, '0', 4);
	ft_memset(str9, '0', 4);
	printf(memcmp(str9, "0000", 4) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str9, '0', 4) | Expected : ");
	print_memory("0000", 4);
	printf(" | Got : ");
	print_memory(str9, 4);
	printf("\n");

	char str10[10] = "567890";
	memset(str10 + 3, 'X', 3);
	ft_memset(str10 + 3, 'X', 3);
	printf(memcmp(str10, "567XXX", 6) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str10 + 3, 'X', 3) | Expected : ");
	print_memory("567XXX", 6);
	printf(" | Got : ");
	print_memory(str10, 6);
	printf("\n");

	//__________________
}


char *strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t needle_len;

	if (*needle == '\0') {
		return (char *)haystack;
	}

	needle_len = strlen(needle);
	while (*haystack && len-- >= needle_len) {
		if (*haystack == *needle && !strncmp(haystack, needle, needle_len)) {
			return (char *)haystack;
		}
		haystack++;
	}
	return NULL;
}

void	print_memory(const void *ptr, size_t size)
{
	const unsigned char *p = (const unsigned char *)ptr;
	for (size_t i = 0; i < size; i++)
	{
		printf("%02x ", p[i]);
	}
}
