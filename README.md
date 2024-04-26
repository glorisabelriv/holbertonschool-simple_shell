# SIMPLE SHELL

Date of Release - 04/15/2024

## Introduction

- What is Shell?

A shell is a user interface to access the services of the operating system.
It is a command-line interface that allows the user to interact with the operating system by executing commands.

- What is Kernel?

  A kernel is a type of low-level program,is the central part of an operating system that
manages hardware resources and provides services to applications.
It is the component that acts as an intermediary between hardware and software,
facilitating communication between hardware and running programs.
A shell allows all of its users to establish communication with the kernel.

- What is a pid and a ppid?

  pid : The is the process ID (PID) of the process you call the Process. pid method in.
  ppid : The PID of the parent process (the process that spawned the current one).

- What is the difference between a function & a system call?

  The main difference between system call and function call is that a system call is a request for the kernel to access a resource while a function call is a request made by a program to perform a specific task. A computer program makes a system call when it makes a request to the operating system's kernel. System call provides the services of the operating system to the user programs via Application Program Interface(API).

- How to suspend the execution of a process until one of its children terminates?

  We can suspend the execution of a process until one of its children terminates using the wait function. A call to wait() blocks the calling process until one of its child processes exits or a signal is received. After child process terminates, parent continues its execution after wait system call instruction.

- What is EOF?

End of file is a condition that terminates the program and brings the user home using (Ctrl+D)

## Project Information

Your Shell should:

   - Display a prompt and wait for the user to type a command. A command line always ends with a new line.
   - The prompt is displayed again each time a command has been executed.
   - The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
   - The command lines are made only of one word. No arguments will be passed to programs.
   - If an executable cannot be found, print an error message and display the prompt again.
   - It should be able to handle errors.
   - You have to handle the “end of file” condition (Ctrl+D)

You don’t have to:

   use the PATH
   implement built-ins
   handle special characters : ", ', `, \, *, &, #
   be able to move the cursor
   handle commands with arguments

### General requirements

   Allowed editors: vi, vim, emacs

   - All your files will be compiled on Ubuntu 20.04 LTS using gcc
   - using the options -Wall -Werror -Wextra -pedantic -std=gnu89
   - All your files should end with a new line
   - A README.md file, at the root of the folder of the project is mandatory
   - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
   - Your shell should not have any memory leaks
   - No more than 5 functions per file
   - All your header files should be include guarded

#Output
   - Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) 
   - as well as the exact same error output.
   - The only difference is when you print an error, the name of the program must be equivalent to your argv[0]


### Builtins
* ```exit``` exits shell (```Usage: exit [status]```)
* ```env``` prints environmental variables (Usage: ```env```)

### Functions and sytems calls used
```malloc```, ```free```, ```execve```, ```wait```, ```write```, ```exit```


### Allowed functions & system calls

    - access (man 2 access)
    - chdir (man 2 chdir)
    - close (man 2 close)
    - closedir (man 3 closedir)
    - execve (man 2 execve)
    - exit (man 3 exit)
    - _exit (man 2 _exit)
    - fflush (man 3 fflush)
    - fork (man 2 fork)
    - free (man 3 free)
    - getcwd (man 3 getcwd)
    - getline (man 3 getline)
    - getpid (man 2 getpid)
    - isatty (man 3 isatty)
    - kill (man 2 kill)
    - malloc (man 3 malloc)
    - open (man 2 open)
    - opendir (man 3 opendir)
    - perror (man 3 perror)
    - read (man 2 read)
    - readdir (man 3 readdir)
    - signal (man 2 signal)
    - stat (__xstat) (man 2 stat)
    - lstat (__lxstat) (man 2 lstat)
    - fstat (__fxstat) (man 2 fstat)
    - strtok (man 3 strtok)
    - wait (man 2 wait)
    - waitpid (man 2 waitpid)
    - wait3 (man 2 wait3)
    - wait4 (man 2 wait4)
    - write (man 2 write)


### How To Install, Compile, and Use
Install and Compile
```
(your_terminal)$ git clone git@github.com:glorisabelriv/holbertonschool simple_shell.git
(your_terminal)$ cd holbertonschool-simple_shell
(your_terminal)$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
Sample Usage
```
$ /bin/ls
 file1.c  file2.c file3.c
$ /bin/pwd
/home/usr/holbertonschool-simple_shell
$ man ./man_1_simple_shell (opens more information)
```
Stop and return to your original shell
```
$ exit
(your_terminal)$
```

### Usage (Interactive & Non-Interactive, Built-In)

  Interactive
  
  An interactive shell takes commands as input from the user and acknowledges the output to the user.

  [./hsh]

  Non-Interactive
  
  A non-interactive shell does not interact with the user. 
  It is highly recommended to use the full path for a command in non-interactive shells.

  ["echo "/bin/ls" | ./hsh"]

  Built-In
  
  A built-in is a command or function that is part of the shell itself. 
  No external program is necessary to run the command.

## 🖋️ Authors

![Glorisabel Rivera](https://github.com/glorisabelriv)
![Emanuel Mendez](https://github.com/emanuel980)
![Jeremy Etienne](https://github.com/sequencejeg)

