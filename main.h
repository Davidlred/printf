#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct i
{
	int alt;
	char space;
	char length_specifier;
	int width_specifier;
	char modifier;
	int output;
	int position;
} format_info;
typedef struct s
{
	char car;
	int (*action)(va_list, format_info);
} specifier;

int _puts(char *s);
int _putchar(char c);
int print_int(long int n);
int print_unsigned_int(unsigned long int n);
void convert_bin(int *counter, unsigned int num);
void convert_hex(unsigned long int num, int lower, int *c);
void convert_oct(unsigned long int num, int *c);
int _isalpha(int a);
int is_digit(char c);
char ROT13(char c);
int _printf(const char *format, ...);
int format_c(va_list, format_info);
int format_s(va_list, format_info);
int format_S(va_list, format_info);
int format_percent(va_list, format_info);
int format_d_i(va_list, format_info);
int format_b(va_list, format_info);
int format_r(va_list, format_info);
int format_R(va_list, format_info);
int format_x(va_list, format_info);
int format_X(va_list, format_info);
int format_o(va_list, format_info);
int format_p(va_list, format_info);
int format_u(va_list, format_info);
int format_handler(const char *format, va_list list, format_info info);
int flag_check(char c);
int length_checker(char c);
int modifier_check(char c);
void space_printer(int c);
int power(int x, int y);
format_info fetch_info(const char *format, va_list list);
void information(format_info *info, char flag);
int width_flag(format_info *info, const char *s, int i);
void initialize_info(format_info *info);
int _strlen(long int n, int radix);
int (*check_specifier(char s))(va_list, format_info);

#endif
