/**
 * _putchar - writes the character c pto stdout                      */                                                                 
#include <unisted.h>                                                
#include <stdio.h>                                                  
                                                                     
 int _putchar(char c)                                                
{                                                                   
	        return (write(1, &c, 1));                                   
}             
