<h1> Monty Language Interpreter </h1>

<h2> Monty 0.98 </h2>
<p> A scripting language that is compiled into bytecodes. It relies on a stack with instructions to manipulate it. This program is an interpreter for Monty bytecode files. <p>

<h2> Usage </h2>

<h2> Monty Installation </h2>
<p> To install interpreter you must clone the reop from github using the following method: </p>
<strong> git clone [repository link] </strong>
<p> You then will be able to run a Monty file by compiling with specific flags </p>

<p> All files should be compiled with <p> <strong> gcc -Wall -Werror -Wextra -pedantic *.c -o monty </strong>
<p> To run the program, enter: </p> <strong> > ./monty [file] </strong>

<h2> Operation Functions </h2>
<p> Here is a list of Operations that the Monty Interpreter will only understand </p>
<ul style="list-style-type:circle;">
  <li> <strong> push [integer]: <strong> pushes an integer on to the stack </li>
  <li> <strong> pall: <strong> prints all values on the stack </li>
  <li> <strong> pint: <strong> prints the value at the top of the stack </li>
  <li> <strong> pop: <strong> emoves the top element of the stack </li>
  <li> <strong> swap: <srtong> swaps the top two elements of the stack </li>
  <li> <strong> nop: <strong> do nothing </li>

</ul>



<table style="width:100%">
  <tr>
    <th>Firstname</th>
    <th>Lastname</th>
    <th>Age</th>
  </tr>
  <tr>
    <td>Jill</td>
    <td>Smith</td>
    <td>50</td>
  </tr>
  <tr>
    <td>Eve</td>
    <td>Jackson</td>
    <td>94</td>
  </tr>
</table>