/*-Question2*/

/*2 i
header for a function named do_it is;
 float do_it(char a,char b,char c)


 /*2 ii
 header for a function named print_a _number is;
 void print_a_number(int a)
 */

 /*2 iii

 in the program the function that performs printing is wrongly declared instead of "print_msg" it should have been "printf"
 * /

 /* The correct code should have been as below*/
 #include<stdio.h>
 void print_msg(void);
  main()
 {
   print_msg();
   return 0;
 }
 void print_msg(void)
 {
     puts("This is a message to print");
     return 0;
 }