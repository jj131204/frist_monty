[![](https://www.holbertonschool.com/holberton-logo.png)](https://www.holbertonschool.com/)

# monty - Stacks, Queues - LIFO, FIFO 💥
#### monty functions as a Monty byte code interpreter. Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it.  
  
  
  
# Requirements ♟️

| **Project**                                                                                                         |                               
| ------------------------------------------------------------------------------------------------------------------  | 
|**Allowed editors: vi, vim, emacs                                                                                    |
|**All your files will be compiled on Ubuntu 14.04 LTS**                                                              |
|**Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic**  |
|**ll your files should end with a new line**
|**A README.md file, at the root of the folder of the project is mandatory**
|**Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl**
|**You allowed to use a maximum of one global variable**
|**No more than 5 functions per file**
|**You are allowed to use the C standard library**
|**The prototypes of all your functions should be included in your header file called monty.h**
|**Don’t forget to push your header file**
|**All your header files should be include guarded**
|**You are expected to do the tasks in the order shown in the project**
  
  
  
## INSTALLATION AND USAGE  
Please use GCC 4.8.4 compiler or later.  
  
```  
$ git clone [repository link]  
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty  
$ ./monty file_name.m  
```  
  
  
  
## SYNTAX OVERVIEW AND EXAMPLES  
  
  
Below are some examples of using monty with bytecode files:  
  
```  
vagrant@vagrant-ubuntu-trusty-64:~/0x19-stacks_queues_lifo_fifo$ cat -e bytecodes/00.m  
push 1$  
push 2$  
push 3$  
pall$  
vagrant@vagrant-ubuntu-trusty-64:~/0x19-stacks_queues_lifo_fifo$ ./monty bytecodes/00.m  
3  
2  
1  
vagrant@vagrant-ubuntu-trusty-64:~/0x19-stacks_queues_lifo_fifo$  
```  
```  
vagrant@vagrant-ubuntu-trusty-64:~/0x19-stacks_queues_lifo_fifo$ cat bytecodes/09.m  
push 1  
push 2  
push 3  
pall  
swap  
pall  
vagrant@vagrant-ubuntu-trusty-64:~/0x19-stacks_queues_lifo_fifo$ ./monty bytecodes/09.m  
3  
2  
1  
2  
3  
1  
vagrant@vagrant-ubuntu-trusty-64:~/0x19-stacks_queues_lifo_fifo$  
```  
## opcodes 

Listed below are the opcodes to can be used in monty:  
  
opcode | Function  
--------|---------------  
push | Pushes an element to the stack  
pall | Prints all the values on the stack, starting from the top of the stack  
pint| prints the value at the top of the stack, followed by a new line  
pop| Removes the top element of the stack  
swap | Swaps the top two elements of the stack  
 add | Adds the top two elements of the stack  
 nop| Doesn’t do anything 
  
  
 
  
## Authors  
  
*Juan jose arteta*   
  
  
*Adrian camilo guerra* 🎵  
  
