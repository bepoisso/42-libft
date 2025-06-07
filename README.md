<div align="center">
  <img height="200" src="https://raw.githubusercontent.com/Benjamin-poisson/My_image_bank/refs/heads/main/libft.png"  />
</div>

# Libft - Custom C Library

Libft is a comprehensive custom library written in C, aimed at providing an extensive set of standard functions found in the C standard library, as well as some additional useful utilities. This project is often a foundational part of many C programming curricula, as it serves as a starting point for implementing and understanding core programming concepts in C.

## Status
<div align="center">
  <img height="200" src="https://raw.githubusercontent.com/Benjamin-poisson/My_image_bank/refs/heads/main/libft_success.png"  />
</div>

## Great resources

<li><a href="https://suspectedoceano.notion.site/Libft-acef68297e3a478f9463fe9d70023bb0">Notion's Oceano</a></li>
<li><a href="https://github.com/xicodomingues/francinette">Libft Tester Francinette</a></li>


## Mandatory

<table>
  <tr>
    <th>Program name</th>
    <td>libft.a</td>
  </tr>
  <tr>
    <th>Turn in files</th>
    <td>*.c, libft.h, Makefile</td>
  </tr>
  <tr>
    <th>Makefile</th>
    <td>Yes</td>
  </tr>
  <tr>
    <th>External functs.</th>
    <td>Detailed below</td>
  </tr>
  <tr>
    <th>Libft authorized</th>
    <td>Non-applicable</td>
  </tr>
  <tr>
    <th>Description</th>
    <td>Write your own library, containing an extract of important functions for your cursus.</td>
  </tr>
</table>

- It is forbidden to use global variables.
- If you need subfunctions to write a complex function, you should define these subfunctions as static to avoid publishing them with your library. It would be a good habit to do this in your future projects as well.
- Submit all files in the root of your repository.
- It is forbidden to submit unused files.
- Every .c must compile with flags.
- You must use the command ar to create your librairy, using the command libtool is forbidden.

## Functions

The library is organized into various sections, each focusing on different aspects of the C standard library or common programming tasks. Below is an overview of the key functions provided:
<h3>Memory Functions</h3>
<ul>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_memset.c">ft_memset</a>: Fill a block of memory with a specific value.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_bzero.c">ft_bzero</a>: Set a block of memory to zero.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_memcpy.c">ft_memcpy</a>: Copy a block of memory from one location to another.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_memmove.c">ft_memmove</a>: Safely copy a block of memory, even if the memory regions overlap.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_memchr.c">ft_memchr</a>: Locate a byte in a block of memory.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_memcmp.c">ft_memcmp</a>: Compare two blocks of memory.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_calloc.c">ft_calloc</a>: Allocate and zero-initialize an array in memory.</li>
</ul>

<h3>String Functions</h3>
<ul>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_strlen.c">ft_strlen</a>: Calculate the length of a string.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_strdup.c">ft_strdup</a>: Duplicate a string.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_strlcpy.c">ft_strlcpy</a>: Copy a string to another location.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_strlcat.c">ft_strlcat</a>: Concatenate two strings.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_strncmp.c">ft_strncmp</a>: Compare a specified number of characters of two strings.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_strchr.c">ft_strchr</a>: Locate the first occurrence of a character in a string.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_strrchr.c">ft_strrchr</a>: Locate the last occurrence of a character in a string.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_strnstr.c">ft_strnstr</a>: Locate a substring within a string, searching only the first `n` characters.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_substr.c">ft_substr</a>: Extract a substring from a string.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_strjoin.c">ft_strjoin</a>: Concatenate two strings into a new string.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_strtrim.c">ft_strtrim</a>: Trim the beginning and end of a string by removing specified characters.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_split.c">ft_split</a>: Split a string into an array of strings based on a delimiter.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_itoa.c">ft_itoa</a>: Convert an integer to a string.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_strmapi.c">ft_strmapi</a>: Apply a function to each character of a string, returning a new string.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_putchar_fd.c">ft_putchar_fd</a>: Write a character to a file descriptor.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_putstr_fd.c">ft_putstr_fd</a>: Write a string to a file descriptor.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_putendl_fd.c">ft_putendl_fd</a>: Write a string followed by a newline to a file descriptor.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_putnbr_fd.c">ft_putnbr_fd</a>: Write an integer to a file descriptor.</li>
</ul>

<h3>Character Functions</h3>
<ul>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_isalpha.c">ft_isalpha</a>: Check if a character is an alphabetic letter.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_isdigit.c">ft_isdigit</a>: Check if a character is a digit.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_isalnum.c">ft_isalnum</a>: Check if a character is alphanumeric.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_isascii.c">ft_isascii</a>: Check if a character is part of the ASCII set.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_isprint.c">ft_isprint</a>: Check if a character is printable.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_tolower.c">ft_tolower</a>: Convert a character to lowercase.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_toupper.c">ft_toupper</a>: Convert a character to uppercase.</li>
</ul>

<h3>Linked List Functions</h3>
<ul>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_lstnew_bonus.c">ft_lstnew</a>: Create a new linked list element.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_lstadd_bonus.c">ft_lstadd</a>: Add a new element to the beginning of a linked list.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_lstadd_back_bonus.c">ft_lstadd_back</a>: Add a new element to the end of a linked list.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_lstsize_bonus.c">ft_lstsize</a>: Count the number of elements in a linked list.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_lstlast_bonus.c">ft_lstlast</a>: Return the last element of a linked list.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_lstdelone_bonus.c">ft_lstdelone</a>: Delete an element from a linked list.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_lstclear_bonus.c">ft_lstclear</a>: Delete all elements from a linked list and free the memory.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_lstiter_bonus.c">ft_lstiter</a>: Iterate through a linked list and apply a function to each element.</li>
    <li><a href="https://github.com/Benjamin-poisson/42-libft/blob/main/ft_lstmap_bonus.c">ft_lstmap</a>: Apply a function to each element of a linked list and create a new list with the results.</li>
</ul>


## Disclamer
- 🇬🇧 This project has an educational purpose and you should under no circumstances copy and paste. Cheat is bad. Dont cheat

- 🇫🇷 Ce projet a un but educatif et vous ne devez en auccun cas faire du copier coller. Tricher c'est mal. Ne trichez pas

----
©42Perpignan(bepoisso)
