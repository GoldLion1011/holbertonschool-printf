## Printf-like function for Holberton School-TUL

Written by Sarah McGowan and Brandon Brown, Cohort 18

**Purpose**
We are writing a function that produces output according to a format, using the format specifiers %s, %c, %d, and %i. 

 *Our general guidelines*

 - Use the prototype: *int _printf(const char  _format, ...);
 -   Print all of format to std output and handle the conversion specifiers: "c", "s", "%", "d", and "i"
 -   Returns the number of characters printed
 -   written in vi, vim, or emacs
 -   compiled with the following  `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c`
 - No more than five functions per file

**Using the function**
The end user of *_printf()* will be able to print their inputted format string, and have the use of format specifiers reserve space for the value variable types character, string, decimal, and integer.

*Example:*

    char c = 'x';
    char *s = "betty is rad";
    int i = 7;

    _printf("I have a char: %c, a string: %s, and an integer: %d.", c, s, int);

```

**About Us**
![Brandon has a background in working with people of all ages. He loves star gazing, music, movies, traveling, and learning about ancient history. ] <a href= "(https://github.com/bbrown585><img src="https://ca.slack-edge.com/E01BXJ5C1PT-U03CWSMGF42-7cc4c9b6140e-512"></a>
![Sarah is a former healthcare professional/future beach bum who loves animals, hiking, yoga, cooking, art, travel, and good hair days] <a href= "https://github.com/GoldLion1011><img src= "https://ca.slack-edge.com/E01BXJ5C1PT-U03CQ7UCXBQ-139d5cac17a3-512"></a>

