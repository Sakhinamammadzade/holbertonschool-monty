# C - Stacks, Queues - LIFO, FIFO!

#
## Overview
 
 **In this project, we have created a simple interpreter for Monty ByteCodes. The interpreter reads a bytecode file and executes the bytecode commands.**

#
## Table of Contents
- [Requirements](#requirements)
- [Compilation & Output](#compilation--output)
- [Monty Language](#monty-language)

#
## Requirements:

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic
-   All your files should end with a new line
-   A  `README.md`  file, at the root of the folder of the project is mandatory
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You allowed to use a maximum of one global variable
-   No more than 5 functions per file
-   You are allowed to use the C standard library
-   The prototypes of all your functions should be included in your header file called  `monty.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded
-   You are expected to do the tasks in the order shown in the project

#
##  Compilation & Output
 **- Your code will be compiled this way:**

    ```$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty```
    

-   Any output must be printed on  `stdout`
-   Any error message must be printed on  `stderr`
-   [Here is a link to a GitHub repository](https://intranet.hbtn.io/rltoken/Jld0fesbZbMXmOgejF3dBA "Here is a link to a GitHub repository")  that could help you making sure your errors are printed on  `stderr`

#
##  Monty language

> Monty 0.98 is a scripting language that is first compiled into Monty
> byte codes (Just like Python). It relies on a unique stack, with
> specific instructions to manipulate it. The goal of this project is to
> create an interpreter for Monty ByteCodes files.
****Monty byte code files****
Files containing Monty byte codes usually have the `.m` extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. 
There can be any number of spaces before or after the opcode and its argument:
````
julien@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
julien@ubuntu:~/monty$
````
