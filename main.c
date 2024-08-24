/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 23:06:30 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/24 18:19:04 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

char	*strnstr(const char *haystack, const char *needle, size_t len);
void	print_memory(const void *ptr, size_t size);
void	print_str_array(char **array);
int		check_split_result(char **result, char **expected);

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

	char str5_atoi[] = "  +2147483647";
	expected_atoi = atoi(str5_atoi);
	got_atoi = ft_atoi(str5_atoi);
	printf(expected_atoi == got_atoi ? "[PASS] " : "[FAIL] ");
	printf("For : ft_atoi(%s) | Expected : %d | Got : %d\n", str5_atoi, expected_atoi, got_atoi);

	char str6_atoi[] = " +00042ABC";
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

	//_________BZERO_________
	printf("\n_________BZERO_________\n");

	int result_bzero;
	char expected_bzero[10];
	char got_bzero[10];

	char str1_bzero[10] = "Hello";
	memcpy(expected_bzero, str1_bzero, sizeof(str1_bzero));
	memcpy(got_bzero, str1_bzero, sizeof(str1_bzero));
	bzero(expected_bzero + 2, 3);
	ft_bzero(got_bzero + 2, 3);
	result_bzero = memcmp(expected_bzero, got_bzero, sizeof(str1_bzero));
	printf(result_bzero == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_bzero(str1_bzero + 2, 3) | Expected : ");
	print_memory(expected_bzero, sizeof(expected_bzero));
	printf(" | Got : ");
	print_memory(got_bzero, sizeof(got_bzero));
	printf("\n");

	char str2_bzero[10] = "World";
	memcpy(expected_bzero, str2_bzero, sizeof(str2_bzero));
	memcpy(got_bzero, str2_bzero, sizeof(str2_bzero));
	bzero(expected_bzero, 5);
	ft_bzero(got_bzero, 5);
	result_bzero = memcmp(expected_bzero, got_bzero, sizeof(str2_bzero));
	printf(result_bzero == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_bzero(str2_bzero, 5) | Expected : ");
	print_memory(expected_bzero, sizeof(expected_bzero));
	printf(" | Got : ");
	print_memory(got_bzero, sizeof(got_bzero));
	printf("\n");

	char str3_bzero[10] = "Test";
	memcpy(expected_bzero, str3_bzero, sizeof(str3_bzero));
	memcpy(got_bzero, str3_bzero, sizeof(str3_bzero));
	bzero(expected_bzero + 1, 0);
	ft_bzero(got_bzero + 1, 0);
	result_bzero = memcmp(expected_bzero, got_bzero, sizeof(str3_bzero));
	printf(result_bzero == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_bzero(str3_bzero + 1, 0) | Expected : ");
	print_memory(expected_bzero, sizeof(expected_bzero));
	printf(" | Got : ");
	print_memory(got_bzero, sizeof(got_bzero));
	printf("\n");

	char str4_bzero[10] = "42";
	memcpy(expected_bzero, str4_bzero, sizeof(str4_bzero));
	memcpy(got_bzero, str4_bzero, sizeof(str4_bzero));
	bzero(expected_bzero, 10);
	ft_bzero(got_bzero, 10);
	result_bzero = memcmp(expected_bzero, got_bzero, sizeof(str4_bzero));
	printf(result_bzero == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_bzero(str4_bzero, 10) | Expected : ");
	print_memory(expected_bzero, sizeof(expected_bzero));
	printf(" | Got : ");
	print_memory(got_bzero, sizeof(got_bzero));
	printf("\n");
	//__________________
	

	//_________MEMSET_________
	printf("\n_________MEMSET_________\n");

	char str1_memset[10] = "Hello";
	memset(str1_memset + 2, 'A', 3);
	ft_memset(str1_memset + 2, 'A', 3);
	printf(memcmp(str1_memset, "HeAAA", 6) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str1_memset + 2, 'A', 3) | Expected : ");
	print_memory("HeAAA", 6);
	printf(" | Got : ");
	print_memory(str1_memset, 6);
	printf("\n");

	char str2_memset[10] = "World";
	memset(str2_memset, '*', 5);
	ft_memset(str2_memset, '*', 5);
	printf(memcmp(str2_memset, "*****", 6) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str2_memset, '*', 5) | Expected : ");
	print_memory("*****", 6);
	printf(" | Got : ");
	print_memory(str2_memset, 6);
	printf("\n");

	char str3_memset[10] = "Test";
	memset(str3_memset + 1, 'B', 2);
	ft_memset(str3_memset + 1, 'B', 2);
	printf(memcmp(str3_memset, "TBBt", 5) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str3_memset + 1, 'B', 2) | Expected : ");
	print_memory("TBBt", 5);
	printf(" | Got : ");
	print_memory(str3_memset, 5);
	printf("\n");

	char str4_memset[10] = "abcdef";
	memset(str4_memset, '0', 3);
	ft_memset(str4_memset, '0', 3);
	printf(memcmp(str4_memset, "000def", 7) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str4_memset, '0', 3) | Expected : ");
	print_memory("000def", 7);
	printf(" | Got : ");
	print_memory(str4_memset, 7);
	printf("\n");

	char str5_memset[10] = "123456789";
	memset(str5_memset + 4, 'X', 5);
	ft_memset(str5_memset + 4, 'X', 5);
	printf(memcmp(str5_memset, "1234XXXXX", 9) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str5_memset + 4, 'X', 5) | Expected : ");
	print_memory("1234XXXXX", 9);
	printf(" | Got : ");
	print_memory(str5_memset, 9);
	printf("\n");

	char str6_memset[10] = "xxxxxxx";
	memset(str6_memset, 'Y', 4);
	ft_memset(str6_memset, 'Y', 4);
	printf(memcmp(str6_memset, "YYYYxxx", 7) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str6_memset, 'Y', 4) | Expected : ");
	print_memory("YYYYxxx", 7);
	printf(" | Got : ");
	print_memory(str6_memset, 7);
	printf("\n");

	char str7_memset[10] = "abcde";
	memset(str7_memset + 2, '!', 3);
	ft_memset(str7_memset + 2, '!', 3);
	printf(memcmp(str7_memset, "ab!!!", 5) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str7_memset + 2, '!', 3) | Expected : ");
	print_memory("ab!!!", 5);
	printf(" | Got : ");
	print_memory(str7_memset, 5);
	printf("\n");

	char str8_memset[10] = "zzzzzzzzz";
	memset(str8_memset, ' ', 9);
	ft_memset(str8_memset, ' ', 9);
	printf(memcmp(str8_memset, "         ", 9) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str8_memset, ' ', 9) | Expected : ");
	print_memory("         ", 9);
	printf(" | Got : ");
	print_memory(str8_memset, 9);
	printf("\n");

	char str9_memset[10] = "1234";
	memset(str9_memset, '0', 4);
	ft_memset(str9_memset, '0', 4);
	printf(memcmp(str9_memset, "0000", 4) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str9_memset, '0', 4) | Expected : ");
	print_memory("0000", 4);
	printf(" | Got : ");
	print_memory(str9_memset, 4);
	printf("\n");

	char str10_memset[10] = "567890";
	memset(str10_memset + 3, 'X', 3);
	ft_memset(str10_memset + 3, 'X', 3);
	printf(memcmp(str10_memset, "567XXX", 6) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memset(str10_memset + 3, 'X', 3) | Expected : ");
	print_memory("567XXX", 6);
	printf(" | Got : ");
	print_memory(str10_memset, 6);
	printf("\n");
	//__________________
	

	//_________MEMSCPY_________
	printf("\n_________MEMCPY_________\n");

	char str1_memcpy[10] = "Hello";
	char dest1_memcpy[10] = {0};
	ft_memcpy(dest1_memcpy, str1_memcpy, 5);
	printf(memcmp(dest1_memcpy, "Hello", 5) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memcpy(dest1_memcpy, str1_memcpy, 5) | Expected : ");
	print_memory("Hello", 5);
	printf(" | Got : ");
	print_memory(dest1_memcpy, 5);
	printf("\n");

	char str2_memcpy[10] = "World";
	char dest2_memcpy[10] = {0};
	ft_memcpy(dest2_memcpy, str2_memcpy, 5);
	printf(memcmp(dest2_memcpy, "World", 5) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memcpy(dest2_memcpy, str2_memcpy, 5) | Expected : ");
	print_memory("World", 5);
	printf(" | Got : ");
	print_memory(dest2_memcpy, 5);
	printf("\n");

	char str3_memcpy[10] = "";
	char dest3_memcpy[10] = {1};
	ft_memcpy(dest3_memcpy, str3_memcpy, 1);
	printf(memcmp(dest3_memcpy, "", 1) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memcpy(dest3_memcpy, str3_memcpy, 1) | Expected : ");
	print_memory("", 1);
	printf(" | Got : ");
	print_memory(dest3_memcpy, 1);
	printf("\n");
	//__________________
	
	//_________MEMSCMP_________
	printf("\n_________MEMCMP_________\n");
	int	expected_memcmp;
	int	got_memcmp;
	
	
	char str1_memcmp[10] = "Hello";
	char str2_memcmp[10] = "Hello";
	expected_memcmp = memcmp(str1_memcmp, str2_memcmp, 5);
	got_memcmp = ft_memcmp(str1_memcmp, str2_memcmp, 5);
	printf(expected_memcmp == got_memcmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memcmp(\"%s\", \"%s\", 5) | Expected : %d | Got : %d\n", str1_memcmp, str2_memcmp, expected_memcmp, got_memcmp);

	char str3_memcmp[10] = "Hello";
	char str4_memcmp[10] = "Hellz";
	expected_memcmp = memcmp(str3_memcmp, str4_memcmp, 5);
	got_memcmp = ft_memcmp(str3_memcmp, str4_memcmp, 5);
	printf(expected_memcmp == got_memcmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memcmp(\"%s\", \"%s\", 5) | Expected : %d | Got : %d\n", str3_memcmp, str4_memcmp, expected_memcmp, got_memcmp);

	char str5_memcmp[10] = "Hello";
	char str6_memcmp[10] = "HelLo";
	expected_memcmp = memcmp(str5_memcmp, str6_memcmp, 5);
	got_memcmp = ft_memcmp(str5_memcmp, str6_memcmp, 5);
	printf(expected_memcmp == got_memcmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memcmp(\"%s\", \"%s\", 5) | Expected : %d | Got : %d\n", str5_memcmp, str6_memcmp, expected_memcmp, got_memcmp);

	char str7_memcmp[10] = "Hello";
	char str8_memcmp[10] = "He";
	expected_memcmp = memcmp(str7_memcmp, str8_memcmp, 2);
	got_memcmp = ft_memcmp(str7_memcmp, str8_memcmp, 2);
	printf(expected_memcmp == got_memcmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memcmp(\"%s\", \"%s\", 2) | Expected : %d | Got : %d\n", str7_memcmp, str8_memcmp, expected_memcmp, got_memcmp);

	char str9_memcmp[10] = "Hello";
	char str10_memcmp[10] = "He";
	expected_memcmp = memcmp(str9_memcmp, str10_memcmp, 3);
	got_memcmp = ft_memcmp(str9_memcmp, str10_memcmp, 3);
	printf(expected_memcmp == got_memcmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memcmp(\"%s\", \"%s\", 3) | Expected : %d | Got : %d\n", str9_memcmp, str10_memcmp, expected_memcmp, got_memcmp);

	char str11_memcmp[10] = "Hello";
	char str12_memcmp[10] = "";
	expected_memcmp = memcmp(str11_memcmp, str12_memcmp, 0);
	got_memcmp = ft_memcmp(str11_memcmp, str12_memcmp, 0);
	printf(expected_memcmp == got_memcmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memcmp(\"%s\", \"%s\", 0) | Expected : %d | Got : %d\n", str11_memcmp, str12_memcmp, expected_memcmp, got_memcmp);

	char str13_memcmp[10] = "";
	char str14_memcmp[10] = "";
	expected_memcmp = memcmp(str13_memcmp, str14_memcmp, 1);
	got_memcmp = ft_memcmp(str13_memcmp, str14_memcmp, 1);
	printf(expected_memcmp == got_memcmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memcmp(\"%s\", \"%s\", 1) | Expected : %d | Got : %d\n", str13_memcmp, str14_memcmp, expected_memcmp, got_memcmp);

	char str15_memcmp[10] = "abcdef";
	char str16_memcmp[10] = "abcdez";
	expected_memcmp = memcmp(str15_memcmp, str16_memcmp, 5);
	got_memcmp = ft_memcmp(str15_memcmp, str16_memcmp, 5);
	printf(expected_memcmp == got_memcmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memcmp(\"%s\", \"%s\", 5) | Expected : %d | Got : %d\n", str15_memcmp, str16_memcmp, expected_memcmp, got_memcmp);

	char str17_memcmp[10] = "abcdef";
	char str18_memcmp[10] = "abcdez";
	expected_memcmp = memcmp(str17_memcmp, str18_memcmp, 6);
	got_memcmp = ft_memcmp(str17_memcmp, str18_memcmp, 6);
	printf(expected_memcmp == got_memcmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memcmp(\"%s\", \"%s\", 6) | Expected : %d | Got : %d\n", str17_memcmp, str18_memcmp, expected_memcmp, got_memcmp);

	char str19_memcmp[10] = "abcdef";
	char str20_memcmp[10] = "abcdef";
	expected_memcmp = memcmp(str19_memcmp, str20_memcmp, 6);
	got_memcmp = ft_memcmp(str19_memcmp, str20_memcmp, 6);
	printf(expected_memcmp == got_memcmp ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memcmp(\"%s\", \"%s\", 6) | Expected : %d | Got : %d\n", str19_memcmp, str20_memcmp, expected_memcmp, got_memcmp);
	//__________________
	


	//_________MEMCHR_________
	printf("\n_________MEMCHR_________\n");
	void *expected_memchr;
	void *got_memchr;

	char str1_memchr[15] = "Hello, World!";
	expected_memchr = memchr(str1_memchr, 'W', 13);
	got_memchr = ft_memchr(str1_memchr, 'W', 13);
	printf(expected_memchr == got_memchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memchr(\"%s\", 'W', 13) | Expected : %p | Got : %p\n", str1_memchr, expected_memchr, got_memchr);

	char str2_memchr[15] = "Hello, World!";
	expected_memchr = memchr(str2_memchr, 'o', 5);
	got_memchr = ft_memchr(str2_memchr, 'o', 5);
	printf(expected_memchr == got_memchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memchr(\"%s\", 'o', 5) | Expected : %p | Got : %p\n", str2_memchr, expected_memchr, got_memchr);

	char str3_memchr[15] = "Hello, World!";
	expected_memchr = memchr(str3_memchr, 'z', 13);
	got_memchr = ft_memchr(str3_memchr, 'z', 13);
	printf(expected_memchr == got_memchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memchr(\"%s\", 'z', 13) | Expected : %p | Got : %p\n", str3_memchr, expected_memchr, got_memchr);

	char str4_memchr[15] = "Hello, World!";
	expected_memchr = memchr(str4_memchr, 'H', 1);
	got_memchr = ft_memchr(str4_memchr, 'H', 1);
	printf(expected_memchr == got_memchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memchr(\"%s\", 'H', 1) | Expected : %p | Got : %p\n", str4_memchr, expected_memchr, got_memchr);

	char str5_memchr[15] = "Hello, World!";
	expected_memchr = memchr(str5_memchr, '!', 13);
	got_memchr = ft_memchr(str5_memchr, '!', 13);
	printf(expected_memchr == got_memchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memchr(\"%s\", '!', 13) | Expected : %p | Got : %p\n", str5_memchr, expected_memchr, got_memchr);

	char str6_memchr[15] = "Hello, World!";
	expected_memchr = memchr(str6_memchr, ',', 7);
	got_memchr = ft_memchr(str6_memchr, ',', 7);
	printf(expected_memchr == got_memchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memchr(\"%s\", ',', 7) | Expected : %p | Got : %p\n", str6_memchr, expected_memchr, got_memchr);

	char str7_memchr[15] = "Hello, World!";
	expected_memchr = memchr(str7_memchr, 'o', 8);
	got_memchr = ft_memchr(str7_memchr, 'o', 8);
	printf(expected_memchr == got_memchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memchr(\"%s\", 'o', 8) | Expected : %p | Got : %p\n", str7_memchr, expected_memchr, got_memchr);

	char str8_memchr[15] = "Hello, World!";
	expected_memchr = memchr(str8_memchr, 'l', 2);
	got_memchr = ft_memchr(str8_memchr, 'l', 2);
	printf(expected_memchr == got_memchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memchr(\"%s\", 'l', 2) | Expected : %p | Got : %p\n", str8_memchr, expected_memchr, got_memchr);

	char str9_memchr[15] = "Hello, World!";
	expected_memchr = memchr(str9_memchr, 'l', 3);
	got_memchr = ft_memchr(str9_memchr, 'l', 3);
	printf(expected_memchr == got_memchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memchr(\"%s\", 'l', 3) | Expected : %p | Got : %p\n", str9_memchr, expected_memchr, got_memchr);

	char str10_memchr[15] = "Hello, World!";
	expected_memchr = memchr(str10_memchr, 'W', 0);
	got_memchr = ft_memchr(str10_memchr, 'W', 0);
	printf(expected_memchr == got_memchr ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memchr(\"%s\", 'W', 0) | Expected : %p | Got : %p\n", str10_memchr, expected_memchr, got_memchr);
	//__________________

	//_________MEMMOVE_________
	printf("\n_________MEMMOVE_________\n");

	char str1_memmove[15] = "Hello, World!";
	char expected1[15] = "Hello, World!";
	char got1[15] = "Hello, World!";
	memmove(expected1 + 7, expected1, 5);
	ft_memmove(got1 + 7, got1, 5);
	printf(memcmp(expected1, got1, 15) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memmove(\"%s\" + 7, \"%s\", 5) | Expected : ", str1_memmove, str1_memmove);
	print_memory(expected1, 15);
	printf(" | Got : ");
	print_memory(got1, 15);
	printf("\n");

	char str2_memmove[15] = "Overlap test";
	char expected2[15] = "Overlap test";
	char got2[15] = "Overlap test";
	memmove(expected2, expected2 + 3, 8);
	ft_memmove(got2, got2 + 3, 8);
	printf(memcmp(expected2, got2, 15) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memmove(\"%s\", \"%s\" + 3, 8) | Expected : ", str2_memmove, str2_memmove);
	print_memory(expected2, 15);
	printf(" | Got : ");
	print_memory(got2, 15);
	printf("\n");

	char str3_memmove[15] = "Small move";
	char expected3[15] = "Small move";
	char got3[15] = "Small move";
	memmove(expected3 + 2, expected3 + 1, 3);
	ft_memmove(got3 + 2, got3 + 1, 3);
	printf(memcmp(expected3, got3, 15) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memmove(\"%s\" + 2, \"%s\" + 1, 3) | Expected : ", str3_memmove, str3_memmove);
	print_memory(expected3, 15);
	printf(" | Got : ");
	print_memory(got3, 15);
	printf("\n");

	char str4_memmove[15] = "No overlap";
	char expected4[15] = "No overlap";
	char got4[15] = "No overlap";
	memmove(expected4 + 4, expected4, 5);
	ft_memmove(got4 + 4, got4, 5);
	printf(memcmp(expected4, got4, 15) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memmove(\"%s\" + 4, \"%s\", 5) | Expected : ", str4_memmove, str4_memmove);
	print_memory(expected4, 15);
	printf(" | Got : ");
	print_memory(got4, 15);
	printf("\n");

	char str5_memmove[15] = "1234567890";
	char expected5[15] = "1234567890";
	char got5[15] = "1234567890";
	memmove(expected5, expected5 + 5, 5);
	ft_memmove(got5, got5 + 5, 5);
	printf(memcmp(expected5, got5, 15) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memmove(\"%s\", \"%s\" + 5, 5) | Expected : ", str5_memmove, str5_memmove);
	print_memory(expected5, 15);
	printf(" | Got : ");
	print_memory(got5, 15);
	printf("\n");

	char str6_memmove[15] = "OverlapOverlap";
	char expected6[15] = "OverlapOverlap";
	char got6[15] = "OverlapOverlap";
	memmove(expected6 + 7, expected6, 7);
	ft_memmove(got6 + 7, got6, 7);
	printf(memcmp(expected6, got6, 15) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memmove(\"%s\" + 7, \"%s\", 7) | Expected : ", str6_memmove, str6_memmove);
	print_memory(expected6, 15);
	printf(" | Got : ");
	print_memory(got6, 15);
	printf("\n");

	char str7_memmove[15] = "1234567890";
	char expected7[15] = "1234567890";
	char got7[15] = "1234567890";
	memmove(expected7 + 4, expected7 + 3, 5);
	ft_memmove(got7 + 4, got7 + 3, 5);
	printf(memcmp(expected7, got7, 15) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memmove(\"%s\" + 4, \"%s\" + 3, 5) | Expected : ", str7_memmove, str7_memmove);
	print_memory(expected7, 15);
	printf(" | Got : ");
	print_memory(got7, 15);
	printf("\n");

	char str8_memmove[15] = "abcdefghij";
	char expected8[15] = "abcdefghij";
	char got8[15] = "abcdefghij";
	memmove(expected8, expected8 + 2, 8);
	ft_memmove(got8, got8 + 2, 8);
	printf(memcmp(expected8, got8, 15) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memmove(\"%s\", \"%s\" + 2, 8) | Expected : ", str8_memmove, str8_memmove);
	print_memory(expected8, 15);
	printf(" | Got : ");
	print_memory(got8, 15);
	printf("\n");

	char str9_memmove[15] = "abcdefghij";
	char expected9[15] = "abcdefghij";
	char got9[15] = "abcdefghij";
	memmove(expected9 + 3, expected9 + 1, 7);
	ft_memmove(got9 + 3, got9 + 1, 7);
	printf(memcmp(expected9, got9, 15) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memmove(\"%s\" + 3, \"%s\" + 1, 7) | Expected : ", str9_memmove, str9_memmove);
	print_memory(expected9, 15);
	printf(" | Got : ");
	print_memory(got9, 15);
	printf("\n");

	char str10_memmove[15] = "abcdefghij";
	char expected10[15] = "abcdefghij";
	char got10[15] = "abcdefghij";
	memmove(expected10 + 5, expected10 + 5, 5);
	ft_memmove(got10 + 5, got10 + 5, 5);
	printf(memcmp(expected10, got10, 15) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_memmove(\"%s\" + 5, \"%s\" + 5, 5) | Expected : ", str10_memmove, str10_memmove);
	print_memory(expected10, 15);
	printf(" | Got : ");
	print_memory(got10, 15);
	printf("\n");
	//__________________


	//_________STRDUP_________
	printf("\n_________STRDUP_________\n");
	
	char expected1_strdup[15] = "Hello, World!";
	char *got1_strdup;
	got1_strdup = ft_strdup(expected1_strdup);
	printf(strcmp(expected1_strdup, got1_strdup) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strdup(\"%s\") | Expected : %s | Got : %s", expected1_strdup, expected1_strdup, got1_strdup);
	printf("\n");

	char expected2_strdup[1] = "";
	char *got2_strdup;
	got2_strdup = ft_strdup(expected2_strdup);
	printf(strcmp(expected2_strdup, got2_strdup) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strdup(\"%s\") | Expected : %s | Got : %s", expected2_strdup, expected2_strdup, got2_strdup);
	printf("\n");

	char expected3_strdup[25] = "This is a long string.";
	char *got3_strdup;
	got3_strdup = ft_strdup(expected3_strdup);
	printf(strcmp(expected3_strdup, got3_strdup) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strdup(\"%s\") | Expected : %s | Got : %s\n", expected3_strdup, expected3_strdup, got3_strdup);

	char expected4_strdup[10] = "123456789";
	char *got4_strdup;
	got4_strdup = ft_strdup(expected4_strdup);
	printf(strcmp(expected4_strdup, got4_strdup) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strdup(\"%s\") | Expected : %s | Got : %s\n", expected4_strdup, expected4_strdup, got4_strdup);

	char expected5_strdup[5] = "ABCD";
	char *got5_strdup;
	got5_strdup = ft_strdup(expected5_strdup);
	printf(strcmp(expected5_strdup, got5_strdup) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strdup(\"%s\") | Expected : %s | Got : %s\n", expected5_strdup, expected5_strdup, got5_strdup);

	char expected6_strdup[20] = "Special#@$%&*Chars";
	char *got6_strdup;
	got6_strdup = ft_strdup(expected6_strdup);
	printf(strcmp(expected6_strdup, got6_strdup) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strdup(\"%s\") | Expected : %s | Got : %s\n", expected6_strdup, expected6_strdup, got6_strdup);

	char expected7_strdup[53] = "Testing a very long string to see how it handles it!";
	char *got7_strdup;
	got7_strdup = ft_strdup(expected7_strdup);
	printf(strcmp(expected7_strdup, got7_strdup) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strdup(\"%s\") | Expected : %s | Got : %s\n", expected7_strdup, expected7_strdup, got7_strdup);

	char expected8_strdup[7] = "123\0abc";
	char *got8_strdup;
	got8_strdup = ft_strdup(expected8_strdup);
	printf(strcmp(expected8_strdup, got8_strdup) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strdup(\"%s\") | Expected : %s | Got : %s\n", expected8_strdup, expected8_strdup, got8_strdup);

	char expected9_strdup[2] = "A";
	char *got9_strdup;
	got9_strdup = ft_strdup(expected9_strdup);
	printf(strcmp(expected9_strdup, got9_strdup) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strdup(\"%s\") | Expected : %s | Got : %s\n", expected9_strdup, expected9_strdup, got9_strdup);

	char expected10_strdup[3] = "Hi";
	char *got10_strdup;
	got10_strdup = ft_strdup(expected10_strdup);
	printf(strcmp(expected10_strdup, got10_strdup) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strdup(\"%s\") | Expected : %s | Got : %s\n", expected10_strdup, expected10_strdup, got10_strdup);

	free(got1_strdup);
	free(got2_strdup);
	free(got3_strdup);
	free(got4_strdup);
	free(got5_strdup);
	free(got6_strdup);
	free(got7_strdup);
	free(got8_strdup);
	free(got9_strdup);
	free(got10_strdup);
	//__________________
	

	//_________CALLOC_________
	printf("\n_________CALLOC_________\n");

	size_t count1_calloc = 5, size1_calloc = sizeof(int);
	int *arr1_calloc = (int *)ft_calloc(count1_calloc, size1_calloc);
	printf(arr1_calloc != NULL ? "[PASS] " : "[FAIL] ");
	printf("For : ft_calloc(%zu, %zu) | Expected : ", count1_calloc, size1_calloc);
	print_memory((int[5]){0, 0, 0, 0, 0}, count1_calloc * size1_calloc);
	printf(" | Got : ");
	print_memory(arr1_calloc, count1_calloc * size1_calloc);
	printf("\n");

	size_t count2_calloc = 10, size2_calloc = sizeof(char);
	char *arr2_calloc = (char *)ft_calloc(count2_calloc, size2_calloc);
	printf(arr2_calloc != NULL ? "[PASS] " : "[FAIL] ");
	printf("For : ft_calloc(%zu, %zu) | Expected : ", count2_calloc, size2_calloc);
	print_memory((char[10]){0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, count2_calloc * size2_calloc);
	printf(" | Got : ");
	print_memory(arr2_calloc, count2_calloc * size2_calloc);
	printf("\n");

	size_t count3_calloc = 0, size3_calloc = sizeof(double);
	double *arr3_calloc = (double *)ft_calloc(count3_calloc, size3_calloc);
	printf(arr3_calloc != NULL ? "[PASS] " : "[FAIL] ");
	printf("For : ft_calloc(%zu, %zu) | Expected : ", count3_calloc, size3_calloc);
	print_memory(NULL, count3_calloc * size3_calloc);
	printf(" | Got : ");
	print_memory(arr3_calloc, count3_calloc * size3_calloc);
	printf("\n");

	size_t count4_calloc = 7, size4_calloc = sizeof(short);
	short *arr4_calloc = (short *)ft_calloc(count4_calloc, size4_calloc);
	printf(arr4_calloc != NULL ? "[PASS] " : "[FAIL] ");
	printf("For : ft_calloc(%zu, %zu) | Expected : ", count4_calloc, size4_calloc);
	print_memory((short[7]){0, 0, 0, 0, 0, 0, 0}, count4_calloc * size4_calloc);
	printf(" | Got : ");
	print_memory(arr4_calloc, count4_calloc * size4_calloc);
	printf("\n");

	size_t count5_calloc = 3, size5_calloc = sizeof(long);
	long *arr5_calloc = (long *)ft_calloc(count5_calloc, size5_calloc);
	printf(arr5_calloc != NULL ? "[PASS] " : "[FAIL] ");
	printf("For : ft_calloc(%zu, %zu) | Expected : ", count5_calloc, size5_calloc);
	print_memory((long[3]){0, 0, 0}, count5_calloc * size5_calloc);
	printf(" | Got : ");
	print_memory(arr5_calloc, count5_calloc * size5_calloc);
	printf("\n");

	size_t count6_calloc = 4, size6_calloc = sizeof(float);
	float *arr6_calloc = (float *)ft_calloc(count6_calloc, size6_calloc);
	printf(arr6_calloc != NULL ? "[PASS] " : "[FAIL] ");
	printf("For : ft_calloc(%zu, %zu) | Expected : ", count6_calloc, size6_calloc);
	print_memory((float[4]){0.0, 0.0, 0.0, 0.0}, count6_calloc * size6_calloc);
	printf(" | Got : ");
	print_memory(arr6_calloc, count6_calloc * size6_calloc);
	printf("\n");

	size_t count7_calloc = 5, size7_calloc = 1;
	void *arr7_calloc = ft_calloc(count7_calloc, size7_calloc);
	printf(arr7_calloc != NULL ? "[PASS] " : "[FAIL] ");
	printf("For : ft_calloc(%zu, %zu) | Expected : ", count7_calloc, size7_calloc);
	print_memory((char[5]){0, 0, 0, 0, 0}, count7_calloc * size7_calloc);
	printf(" | Got : ");
	print_memory(arr7_calloc, count7_calloc * size7_calloc);
	printf("\n");

	size_t count8_calloc = 1, size8_calloc = 100;
	char *arr8_calloc = (char *)ft_calloc(count8_calloc, size8_calloc);
	printf(arr8_calloc != NULL ? "[PASS] " : "[FAIL] ");
	printf("For : ft_calloc(%zu, %zu) | Expected : ", count8_calloc, size8_calloc);
	char expected8_calloc[100] = {0};
	print_memory(expected8_calloc, count8_calloc * size8_calloc);
	printf(" | Got : ");
	print_memory(arr8_calloc, count8_calloc * size8_calloc);
	printf("\n");

	size_t count9_calloc = 2, size9_calloc = 50;
	char *arr9_calloc = (char *)ft_calloc(count9_calloc, size9_calloc);
	printf(arr9_calloc != NULL ? "[PASS] " : "[FAIL] ");
	printf("For : ft_calloc(%zu, %zu) | Expected : ", count9_calloc, size9_calloc);
	char expected9_calloc[100] = {0};
	print_memory(expected9_calloc, count9_calloc * size9_calloc);
	printf(" | Got : ");
	print_memory(arr9_calloc, count9_calloc * size9_calloc);
	printf("\n");

	size_t count10_calloc = 3, size10_calloc = 0;
	void *arr10_calloc = ft_calloc(count10_calloc, size10_calloc);
	printf(arr10_calloc != NULL ? "[PASS] " : "[FAIL] ");
	printf("For : ft_calloc(%zu, %zu) | Expected : ", count10_calloc, size10_calloc);
	print_memory(NULL, count10_calloc * size10_calloc);
	printf(" | Got : ");
	print_memory(arr10_calloc, count10_calloc * size10_calloc);
	printf("\n");

	free(arr1_calloc);
	free(arr2_calloc);
	free(arr3_calloc);
	free(arr4_calloc);
	free(arr5_calloc);
	free(arr6_calloc);
	free(arr7_calloc);
	free(arr8_calloc);
	free(arr9_calloc);
	free(arr10_calloc);

	//__________________

	//_________SUBSTR_________
	printf("\n_________SUBSTR_________\n");

	char *str1_substr = "Hello, World!";
	char *expected1_substr = "World";
	char *got1_substr = ft_substr(str1_substr, 7, 5);
	printf(strcmp(expected1_substr, got1_substr) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_substr(\"%s\", 7, 5) | Expected : \"%s\" | Got : \"%s\"\n", str1_substr, expected1_substr, got1_substr);
	free(got1_substr);

	char *str2_substr = "Hello, World!";
	char *expected2_substr = "Hello";
	char *got2_substr = ft_substr(str2_substr, 0, 5);
	printf(strcmp(expected2_substr, got2_substr) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_substr(\"%s\", 0, 5) | Expected : \"%s\" | Got : \"%s\"\n", str2_substr, expected2_substr, got2_substr);
	free(got2_substr);

	char *str3_substr = "Hello, World!";
	char *expected3_substr = "";
	char *got3_substr = ft_substr(str3_substr, 50, 5);
	printf(strcmp(expected3_substr, got3_substr) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_substr(\"%s\", 50, 5) | Expected : \"%s\" | Got : \"%s\"\n", str3_substr, expected3_substr, got3_substr);
	free(got3_substr);

	char *str4_substr = "Hello, World!";
	char *expected4_substr = "Hello, World!";
	char *got4_substr = ft_substr(str4_substr, 0, 50);
	printf(strcmp(expected4_substr, got4_substr) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_substr(\"%s\", 0, 50) | Expected : \"%s\" | Got : \"%s\"\n", str4_substr, expected4_substr, got4_substr);
	free(got4_substr);

	char *str5_substr = "Hello";
	char *expected5_substr = "o";
	char *got5_substr = ft_substr(str5_substr, 4, 10);
	printf(strcmp(expected5_substr, got5_substr) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_substr(\"%s\", 4, 10) | Expected : \"%s\" | Got : \"%s\"\n", str5_substr, expected5_substr, got5_substr);
	free(got5_substr);

	char *str6_substr = "This is a test string.";
	char *expected6_substr = "test";
	char *got6_substr = ft_substr(str6_substr, 10, 4);
	printf(strcmp(expected6_substr, got6_substr) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_substr(\"%s\", 10, 4) | Expected : \"%s\" | Got : \"%s\"\n", str6_substr, expected6_substr, got6_substr);
	free(got6_substr);

	char *str7_substr = "Another test case.";
	char *expected7_substr = "test case.";
	char *got7_substr = ft_substr(str7_substr, 8, 50);
	printf(strcmp(expected7_substr, got7_substr) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_substr(\"%s\", 8, 50) | Expected : \"%s\" | Got : \"%s\"\n", str7_substr, expected7_substr, got7_substr);
	free(got7_substr);

	char *str8_substr = "";
	char *expected8_substr = "";
	char *got8_substr = ft_substr(str8_substr, 0, 5);
	printf(strcmp(expected8_substr, got8_substr) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_substr(\"%s\", 0, 5) | Expected : \"%s\" | Got : \"%s\"\n", str8_substr, expected8_substr, got8_substr);
	free(got8_substr);

	char *str9_substr = "Short string";
	char *expected9_substr = "Short";
	char *got9_substr = ft_substr(str9_substr, 0, 5);
	printf(strcmp(expected9_substr, got9_substr) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_substr(\"%s\", 0, 5) | Expected : \"%s\" | Got : \"%s\"\n", str9_substr, expected9_substr, got9_substr);
	free(got9_substr);

	char *str10_substr = "Edge case";
	char *expected10_substr = "case";
	char *got10_substr = ft_substr(str10_substr, 5, 454875416156);
	printf(strcmp(expected10_substr, got10_substr) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_substr(\"%s\", 5, 454875416156) | Expected : \"%s\" | Got : \"%s\"\n", str10_substr, expected10_substr, got10_substr);
	free(got10_substr);
	//__________________
	
	
	//_________STRJOIN_________
	printf("\n_________STRJOIN_________\n");
	char *dest_strjoin = NULL;

	char str1_strjoin[] = "Hello, ";
	char str2_strjoin[] = "World!";
	dest_strjoin = ft_strjoin(str1_strjoin, str2_strjoin);
	printf(strcmp(dest_strjoin, "Hello, World!") == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strjoin(\"%s\", \"%s\") | Expected : Hello, World! | Got : %s\n", str1_strjoin, str2_strjoin, dest_strjoin);
	free(dest_strjoin);

	char str3_strjoin[] = "42";
	char str4_strjoin[] = " School";
	dest_strjoin = ft_strjoin(str3_strjoin, str4_strjoin);
	printf(strcmp(dest_strjoin, "42 School") == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strjoin(\"%s\", \"%s\") | Expected : 42 School | Got : %s\n", str3_strjoin, str4_strjoin, dest_strjoin);
	free(dest_strjoin);

	char str5_strjoin[] = "";
	char str6_strjoin[] = "Empty first part";
	dest_strjoin = ft_strjoin(str5_strjoin, str6_strjoin);
	printf(strcmp(dest_strjoin, "Empty first part") == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strjoin(\"%s\", \"%s\") | Expected : Empty first part | Got : %s\n", str5_strjoin, str6_strjoin, dest_strjoin);
	free(dest_strjoin);

	char str7_strjoin[] = "Empty second part";
	char str8_strjoin[] = "";
	dest_strjoin = ft_strjoin(str7_strjoin, str8_strjoin);
	printf(strcmp(dest_strjoin, "Empty second part") == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strjoin(\"%s\", \"%s\") | Expected : Empty second part | Got : %s\n", str7_strjoin, str8_strjoin, dest_strjoin);
	free(dest_strjoin);
	//__________________

	 //_________STRTRIM_________
	printf("\n_________STRTRIM_________\n");

	char s1_1[] = "   Hello World!   ";
	char set1[] = " ";
	char *result1 = ft_strtrim(s1_1, set1);
	printf(result1 != NULL && strcmp(result1, "Hello World!") == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strtrim(\"%s\", \"%s\") | Expected : \"Hello World!\" | Got : \"%s\"\n", s1_1, set1, result1);
	free(result1);

	char s1_2[] = "!!!Hello World!!!";
	char set2[] = "!";
	char *result2 = ft_strtrim(s1_2, set2);
	printf(result2 != NULL && strcmp(result2, "Hello World") == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strtrim(\"%s\", \"%s\") | Expected : \"Hello World\" | Got : \"%s\"\n", s1_2, set2, result2);
	free(result2);

	char s1_3[] = "Hello World";
	char set3[] = " ";
	char *result3 = ft_strtrim(s1_3, set3);
	printf(result3 != NULL && strcmp(result3, "Hello World") == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strtrim(\"%s\", \"%s\") | Expected : \"Hello World\" | Got : \"%s\"\n", s1_3, set3, result3);
	free(result3);

	char s1_4[] = "  \t\n\t  ";
	char set4[] = " \t\n";
	char *result4 = ft_strtrim(s1_4, set4);
	printf(result4 != NULL && strcmp(result4, "") == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strtrim(\"%s\", \"%s\") | Expected : \"\" | Got : \"%s\"\n", s1_4, set4, result4);
	free(result4);

	char s1_5[] = "abcabcabc";
	char set5[] = "abc";
	char *result5 = ft_strtrim(s1_5, set5);
	printf(result5 != NULL && strcmp(result5, "") == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strtrim(\"%s\", \"%s\") | Expected : \"\" | Got : \"%s\"\n", s1_5, set5, result5);
	free(result5);

	char s1_6[] = "12345";
	char set6[] = "0123456789";
	char *result6 = ft_strtrim(s1_6, set6);
	printf(result6 != NULL && strcmp(result6, "") == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strtrim(\"%s\", \"%s\") | Expected : \"\" | Got : \"%s\"\n", s1_6, set6, result6);
	free(result6);

	char s1_7[] = "   Trimmed   ";
	char set7[] = "Trimmed ";
	char *result7 = ft_strtrim(s1_7, set7);
	printf(result7 != NULL && strcmp(result7, "") == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strtrim(\"%s\", \"%s\") | Expected : \"\" | Got : \"%s\"\n", s1_7, set7, result7);
	free(result7);

	char s1_8[] = "A quick brown fox";
	char set8[] = "A quick";
	char *result8 = ft_strtrim(s1_8, set8);
	printf(result8 != NULL && strcmp(result8, "brown fox") == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strtrim(\"%s\", \"%s\") | Expected : \"brown fox\" | Got : \"%s\"\n", s1_8, set8, result8);
	free(result8);

	char s1_9[] = "ABCABCABCABC";
	char set9[] = "ABC";
	char *result9 = ft_strtrim(s1_9, set9);
	printf(result9 != NULL && strcmp(result9, "") == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strtrim(\"%s\", \"%s\") | Expected : \"\" | Got : \"%s\"\n", s1_9, set9, result9);
	free(result9);

	char s1_10[] = "";
	char set10[] = "";
	char *result10 = ft_strtrim(s1_10, set10);
	printf(result10 != NULL && strcmp(result10, "") == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strtrim(\"%s\", \"%s\") | Expected : \"\" | Got : \"%s\"\n", s1_10, set10, result10);
	free(result10);

	//__________________
	*/

	//_________SPLIT_________
	printf("\n_________SPLIT_________\n");

	char s1_split[] = "Hello,World,This,Is,Split";
	char delimiter1 = ',';
	char **result1 = ft_split(s1_split, delimiter1);
	char *expected1[] = {"Hello", "World", "This", "Is", "Split", NULL};
	printf(check_split_result(result1, expected1) ? "[PASS] " : "[FAIL] ");
	printf("For : ft_split(\"%s\", '%c') | Expected : ", s1_split, delimiter1);
	print_str_array(expected1);
	printf(" | Got : ");
	print_str_array(result1);
	printf("\n");
	// Free result1
	for (char **p = result1; *p; p++) {
		free(*p);
	}
	free(result1);

	char s2_split[] = "OneWord";
	char delimiter2 = ',';
	char **result2 = ft_split(s2_split, delimiter2);
	char *expected2[] = {"OneWord", NULL};
	printf(check_split_result(result2, expected2) ? "[PASS] " : "[FAIL] ");
	printf("For : ft_split(\"%s\", '%c') | Expected : ", s2_split, delimiter2);
	print_str_array(expected2);
	printf(" | Got : ");
	print_str_array(result2);
	printf("\n");
	// Free result2
	for (char **p = result2; *p; p++) {
		free(*p);
	}
	free(result2);

	char s3_split[] = "Leading,Empty,,Trailing,";
	char delimiter3 = ',';
	char **result3 = ft_split(s3_split, delimiter3);
	char *expected3[] = {"Leading", "Empty", "Trailing", NULL};
	printf(check_split_result(result3, expected3) ? "[PASS] " : "[FAIL] ");
	printf("For : ft_split(\"%s\", '%c') | Expected : ", s3_split, delimiter3);
	print_str_array(expected3);
	printf(" | Got : ");
	print_str_array(result3);
	printf("\n");
	// Free result3
	for (char **p = result3; *p; p++) {
		free(*p);
	}
	free(result3);

	char s4_split[] = "Multiple,Consecutive,,,Delimiters";
	char delimiter4 = ',';
	char **result4 = ft_split(s4_split, delimiter4);
	char *expected4[] = {"Multiple", "Consecutive", "Delimiters", NULL};
	printf(check_split_result(result4, expected4) ? "[PASS] " : "[FAIL] ");
	printf("For : ft_split(\"%s\", '%c') | Expected : ", s4_split, delimiter4);
	print_str_array(expected4);
	printf(" | Got : ");
	print_str_array(result4);
	printf("\n");
	// Free result4
	for (char **p = result4; *p; p++) {
		free(*p);
	}
	free(result4);

	char s5_split[] = "NoDelimiter";
	char delimiter5 = ',';
	char **result5 = ft_split(s5_split, delimiter5);
	char *expected5[] = {"NoDelimiter", NULL};
	printf(check_split_result(result5, expected5) ? "[PASS] " : "[FAIL] ");
	printf("For : ft_split(\"%s\", '%c') | Expected : ", s5_split, delimiter5);
	print_str_array(expected5);
	printf(" | Got : ");
	print_str_array(result5);
	printf("\n");
	// Free result5
	for (char **p = result5; *p; p++) {
		free(*p);
	}
	free(result5);

	char s6_split[] = "";
	char delimiter6 = ',';
	char **result6 = ft_split(s6_split, delimiter6);
	char *expected6[] = {NULL};
	printf(check_split_result(result6, expected6) ? "[PASS] " : "[FAIL] ");
	printf("For : ft_split(\"%s\", '%c') | Expected : ", s6_split, delimiter6);
	print_str_array(expected6);
	printf(" | Got : ");
	print_str_array(result6);
	printf("\n");
	// Free result6
	free(result6);

	char s7_split[] = "Single,Delimiter";
	char delimiter7 = ',';
	char **result7 = ft_split(s7_split, delimiter7);
	char *expected7[] = {"Single", "Delimiter", NULL};
	printf(check_split_result(result7, expected7) ? "[PASS] " : "[FAIL] ");
	printf("For : ft_split(\"%s\", '%c') | Expected : ", s7_split, delimiter7);
	print_str_array(expected7);
	printf(" | Got : ");
	print_str_array(result7);
	printf("\n");
	// Free result7
	for (char **p = result7; *p; p++) {
		free(*p);
	}
	free(result7);

	char s8_split[] = "TrailingDelimiter,";
	char delimiter8 = ',';
	char **result8 = ft_split(s8_split, delimiter8);
	char *expected8[] = {"TrailingDelimiter", NULL};
	printf(check_split_result(result8, expected8) ? "[PASS] " : "[FAIL] ");
	printf("For : ft_split(\"%s\", '%c') | Expected : ", s8_split, delimiter8);
	print_str_array(expected8);
	printf(" | Got : ");
	print_str_array(result8);
	printf("\n");
	// Free result8
	for (char **p = result8; *p; p++) {
		free(*p);
	}
	free(result8);

	char s9_split[] = "DelimiterAtTheStart,Middle,End";
	char delimiter9 = ',';
	char **result9 = ft_split(s9_split, delimiter9);
	char *expected9[] = {"DelimiterAtTheStart", "Middle", "End", NULL};
	printf(check_split_result(result9, expected9) ? "[PASS] " : "[FAIL] ");
	printf("For : ft_split(\"%s\", '%c') | Expected : ", s9_split, delimiter9);
	print_str_array(expected9);
	printf(" | Got : ");
	print_str_array(result9);
	printf("\n");
	// Free result9
	for (char **p = result9; *p; p++) {
		free(*p);
	}
	free(result9);

	char s10_split[] = "      split       this for   me  !       ";
	char delimiter10 = ' ';
	char **result10 = ft_split(s10_split, delimiter10);
	char *expected10[] = {"split", "this", "for", "me", "!", NULL};
	printf(check_split_result(result10, expected10) ? "[PASS] " : "[FAIL] ");
	printf("For : ft_split(\"%s\", '%c') | Expected : ", s10_split, delimiter10);
	print_str_array(expected10);
	printf(" | Got : ");
	print_str_array(result10);
	printf("\n");
	// Free result10
	for (char **p = result10; *p; p++) {
		free(*p);
	}
	free(result10);

	//__________________
}

int check_split_result(char **result, char **expected)
{
	int i = 0;
	while (expected[i] != NULL) {
		if (result[i] == NULL || strcmp(result[i], expected[i]) != 0) {
			return 0; // FAIL
		}
		i++;
	}
	return result[i] == NULL; // Pass if both arrays end at the same time
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

void print_str_array(char **array)
{
	if (array == NULL) {
		printf("(null)\n");
		return;
	}
	while (*array) {
		printf("\"%s\" ", *array);
		array++;
	}
	printf("\n");
}
