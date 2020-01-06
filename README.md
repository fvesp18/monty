<h1> Monty Language Interpreter </h1>

<h3> Monty 0.98 </h3>
<p> A scripting language that is compiled into bytecodes. It relies on a stack with instructions to manipulate it. This program is an interpreter for Monty bytecode files. <p>

<h3> Usage </h3>

<h2> Monty Installation </h2>
<p> To install interpreter you must clone the reop from github using the following method: </p>
<strong> git clone [repository link] </strong>
<p> You then will be able to run a Monty file by compiling with specific flags </p>

<p> All files should be compiled with <p> <strong> gcc -Wall -Werror -Wextra -pedantic *.c -o monty </strong>
<p> To run the program, enter: </p> <strong> > ./monty [file] </strong>

<h3> Operation Functions </h3>
<p> Here is a list of Operations that the Monty Interpreter will only understand </p>
<ul style="list-style-type:circle;">
  <li> <strong> push [integer]: <strong> pushes an integer on to the stack </li>
  <li> <strong> pall: <strong> prints all values on the stack </li>
  <li> <strong> pint: <strong> prints the value at the top of the stack </li>
  <li> <strong> pop: <strong> emoves the top element of the stack </li>
  <li> <strong> swap: <srtong> swaps the top two elements of the stack </li>
  <li> <strong> nop: <strong> do nothing </li>

</ul>



<table style="width:200%">
  <tr>
    <th> Name of File </th>
    <th> Description of File </th>
  </tr>
  <tr>
    <td> driver.c </td>
    <td> free_lists.c </td>
    <td> parser.c </td>
    <td> reader.c </td>
    <td> monty.h </td>
  </tr>
  <tr>
    <td> Driver file that runs our main program </td>
    <td> Function that frees our doubly linked list </td>
    <td> Parser file that tokenizes each line of a monty file </td>
    <td> Reads the monty file and what gives the Parser the ability tokenize the line </td>
    <td> Header file that holds our prototypes along with other libraries </td>
  </tr>
</table>


<h3> Example </h3>

<h2> Monty bytecode </h2>
<strong> $ push 1 </strong>
<br> <strong> $ pint </strong>
<br> <strong> $ push 2 </strong>
<br> <strong> $ pint </strong>
<br> <strong> $ push 3 </strong>
<br> <strong> $ pint </strong>

<h2> bytecode OUTPUT </h2>
<strong> $ 1 </strong>
<br> <strong> $ 2 </strong>
<br> <strong> $ 3 </strong>