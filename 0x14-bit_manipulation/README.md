<<<<<<< HEAD
0x14. C - Bit manipulation
0. 0
mandatory
Write a function that converts a binary number to an unsigned int.

Prototype: unsigned int binary_to_uint(const char *b);

1. 1
mandatory
Write a function that prints the binary representation of a number.

Prototype: void print_binary(unsigned long int n);

2. 10
mandatory
Write a function that returns the value of a bit at a given index.

Prototype: int get_bit(unsigned long int n, unsigned int index);

3. 11
mandatory
Write a function that sets the value of a bit to 1 at a given index.

Prototype: int set_bit(unsigned long int *n, unsigned int index);

4. 100
mandatory
Write a function that sets the value of a bit to 0 at a given index.

Prototype: int clear_bit(unsigned long int *n, unsigned int index);

5. 101
mandatory
Write a function that returns the number of bits you would need to flip to get from one number to another.

Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);

6. Endianness
#advanced
Write a function that checks the endianness.

Prototype: int get_endianness(void);

7. Crackme3
#advanced
Find the password for this program.
=======
<<<<<<< HEAD
=======
0x15. C - File I/O
>>>>>>> 30a2641428e354f9b894d80f3ebf989323217b0d
0. Tread lightly, she is near
mandatory
Write a function that reads a text file and prints it to the POSIX standard output.

Prototype: ssize_t read_textfile(const char *filename, size_t letters);
<<<<<<< HEAD

=======
>>>>>>> 30a2641428e354f9b894d80f3ebf989323217b0d
1. Under the snow
mandatory
Create a function that creates a file.

Prototype: int create_file(const char *filename, char *text_content);

2. Speak gently, she can hear
mandatory
Write a function that appends text at the end of a file.

Prototype: int append_text_to_file(const char *filename, char *text_content);

3. cp
mandatory
Write a program that copies the content of a file to another file.

4. elf
#advanced
Write a program that displays the information contained in the ELF header at the start of an ELF file.
>>>>>>> d6aded59a677a13a4134b78e7f4eef746ded4388
