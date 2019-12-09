# FT_PRINTF
A recreation of the standard library function Printf. This project is aimed at teaching handling data types and different data structures. In order to complete this project a person must understand Variadic Expressions

# Introduction
Regardless of the programming language considered, the printf function,(or its equivalents) is always highly useful. The main reason is the ease of its formatting, and the

support of diverse types in variable numbers. Some variations even propose to be able to
write the resulting string of characters either in a file descriptor or in a particular stream.

Some also propose to recall this string without printing it. In short, undeniably, printf
is a vital function. In this project, we ask you to recode it and add it to your libft so
that you can use it in all your future projects, such as ft_ls...

# Objectives
The versatility of the printf function in C represents a great exercise in programming for
us. This project is of moderate difficulty. It will enable you to discover variadic functions
in C in a particularly relevant context as well as learn about a great example of a basic
“dispatcher” in C via the use of an array of function’s pointers.

The key to a successful ft_printf is a well-structured and good extensible code. This
is because as time goes by, you will be more and more tempted to continue to extend
your ft_printf, making your life easier for your future projects. So take your time to
code properly while keeping in mind that you will have to read again your code in a few
weeks or a few months to extend its functionality according to your needs. It would be a
shame not to being able to do it because your can’t read your own work.

# Mandatory part
• You have to recode the libc’s printf function.
• Your function will be called ft_printf and will be prototyped similarly to printf.
• You won’t do the buffer management in the printf function.
• You have to manage the following conversions: csp
• You have to manage the following conversions: diouxX with the following flags: hh,
h, l and ll.
• You have to manage the following conversion: f with the following flags: l and L.
• You must manage %%
• You must manage the flags #0-+ and space
• You must manage the minimum field-width
• You must manage the precision

# HOW TO USE

• Run the makefile.
• Read the contents of ft_printf.h to see what is handled and what is not.
• Create your own files that you want to use the FT_PRINTF FUNCTION.
• #include ft_printf.h must be included in that file.
• When compiling add ft_printf.a to your compile instructions eg. gcc -Wall -Werror Wextra foo.c bar.h ft_printf.a

READ FT_PRINTF.H THOROUGHLY

# ALSO PRINTS COLOUR
