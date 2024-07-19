# Simple Shell
Zack Yuan - zack.yuan@atlasschool.com

Tyler Whitchurch - tyler.whitchurch@atlasschool.com

# Objective
Create a shell program that provides the given user with a dynamic interface that allows them to access functions of the kernel. 

# General

## Who designed and implemented the original Unix operating system?


The team consisting of Ken Thompson and Dennis Ritchie created the first verion of UNIX in 1969 on a PDP-7 minicomputer. This type of computer was chosen by Thompson because of his familiarity with the system. 

https://www.britannica.com/technology/UNIX


## Who wrote the first version of the UNIX shell?


The first Unix shell was the Thompson shell, sh, written by Ken Thompson at Bell Labs and distributed with Versions 1 through 6 of Unix, from 1971 to 1975.

https://en.wikipedia.org/wiki/Unix_shell#:~:text=The%20first%20Unix%20shell%20was,Unix%2C%20from%201971%20to%201975.


## Who invented the B programming language? (the direct predecessor to the C programming language)


B is a programming language developed at Bell Labs circa 1969 by Ken Thompson and Dennis Ritchie.

https://en.wikipedia.org/wiki/B_(programming_language)#:~:text=B%20is%20a%20programming%20language,Ken%20Thompson%20and%20Dennis%20Ritchie.


## Who is Ken Thompson?

Kenneth Lane Thompson is an American pioneer of computer science. Thompson worked at Bell Labs for most of his career where he designed and implemented the original Unix operating system.

https://en.wikipedia.org/wiki/Ken_Thompson

## How does a shell work?

The shell is a type of program called an interpreter. An interpreter operates in a simple loop: It accepts a command, interprets the command, executes the command, and then waits for another command. The shell displays a "prompt," to notify you that it is ready to accept your command.

## What is a pid and a ppid?

PID stands for Process ID, Which means Identification Number for currently running process in Memory.

PPID stands for Parent Process ID, Which means Parent Process is the responsible for creating the current process(Child Process). Through Parent Process, The child process will be created. If you kill the parent process, the child process is also killed as well.

https://www.geekinterview.com/question_details/81168

## How do you manipulate the environment of the current process in the shell?

By setting the environmental and shell variables to difference processes

## What is the difference between a function and a system call?

The system call is not related to function call. The only common of these two mechanism is that they both provides services to the caller. System call actually calls out to an API executed by the kernel space. With all the associated costs this assumes. A function call is a call to a piece of code in user space.

## How do you create processes?

All processes are related, a command executed in shell is a child process of the shell. When child process is terminated it is reported back to parent process. When you log out all shell child processes terminated along with the shell. You can see the whole family tree with ps af. One can kill a process or make it “nicer”.

https://aaltoscicomp.github.io/linux-shell/processes/

## What are the three prototypes of main?

In the C programming language, the main function serves as the entry point of a program. It can have three different prototypes, each with a different signature. The three prototypes are:

Prototype with no arguments

Prototype with command-line arguments

Prototype with command-line arguments and environment variables

https://medium.com/@muirujackson/the-three-prototype-of-main-2f46e82d86c5

## How does the shell use the PATH to find the programs?

The shell searches each directory in the path. If a command is not found, long searches can slow down system performance. The search path is read from left to right, so you should put directories for commonly used commands at the beginning of the path.

https://docs.oracle.com/cd/E19683-01/806-4073/userconcept-39855/index.html#:~:text=The%20shell%20searches%20each%20directory,the%20beginning%20of%20the%20path.

## How to execute another program with the execve system call?

The execve system call replaces the current process with a new program. The syntox of execve is: int execve(const char *path, char *const argv[], char *const envp[]); This system call returns only if the named program could not run.

https://people.cs.rutgers.edu/~pxk/416/notes/c-tutorials/exec.html#:~:text=The%20execve%20system%20call%20replaces,named%20program%20could%20not%20run.

## How to suspend the execution of a process until one of its children terminates?

The wait() function will suspend execution of the calling thread until status information for one of its terminated child processes is available, or until delivery of a signal whose action is either to execute a signal-catching function or to terminate the process.

https://pubs.opengroup.org/onlinepubs/7908799/xsh/wait.html#:~:text=The%20wait()%20function%20will,or%20to%20terminate%20the%20process.

## What is EOF / “end-of-file”?

EOF indicates "end of file". A newline (which is what happens when you press enter) isn't the end of a file, it's the end of a line, so a newline doesn't terminate this loop.

https://stackoverflow.com/questions/4358728/end-of-file-eof-in-c

# More General information

Allowed editors: vi, vim, emacs

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

All your files should end with a new line

A README.md file, at the root of the folder of the project is mandatory

Your code should use the Betty style. It will be checked using betty-style.
pl and betty-doc.pl

Your shell should not have any memory leaks

No more than 5 functions per file

All your header files should be include guarded

Use system calls only when you need to.

# GitHub

There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

# Output

Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.

The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)

## Example of error with sh:

``` $ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```

## Same error with your program hsh:

``` $ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```

# List of allowed functions and system calls+

all functions from string.h

access (man 2 access)

chdir (man 2 chdir)

close (man 2 close)

closedir (man 3 closedir)

execve (man 2 execve)

exit (man 3 exit)

_exit (man 2 _exit)

fflush (man 3 fflush)

fork (man 2 fork)

free (man 3 free)

getcwd (man 3 getcwd)

getline (man 3 getline)

getpid (man 2 getpid)

isatty (man 3 isatty)

kill (man 2 kill)

malloc (man 3 malloc)

open (man 2 open)

opendir (man 3 opendir)

perror (man 3 perror)

printf (man 3 printf)

fprintf (man 3 fprintf)

vfprintf (man 3 vfprintf)

sprintf (man 3 sprintf)

putchar (man 3 putchar)

read (man 2 read)

readdir (man 3 readdir)

signal (man 2 signal)

stat (__xstat) (man 2 stat)

lstat (__lxstat) (man 2 lstat)

fstat (__fxstat) (man 2 fstat)

strtok (man 3 strtok)

wait (man 2 wait)

waitpid (man 2 waitpid)

wait3 (man 2 wait3)

wait4 (man 2 wait4)

write (man 2 write)

# Compilation

Your shell will be compiled this way:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

# Testing

## Your shell should work like this in interactive mode:

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

## But also in non-interactive mode:

```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

# Checks

The Checker will be released at the end of the project (1-2 days before 
the deadline). We strongly encourage the entire class to work together to create a suite of checks covering both regular tests and edge cases for each task. See task 8. Test suite.

After the deadline, you will need to fork the repository if it’s not on your Github account to be able to be corrected by the checker.
