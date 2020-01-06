<h1> Monty Language Interpreter </h1>

<h2> Monty 0.98 </h2>
<p> A scripting language that is compiled into bytecodes. It relies on a stack with instructions to manipulate it. This program is an interpreter for Monty bytecode files. <p>

<h2> Usage </h2>

<h2> Monty Installation </h2>
<p> To install interpreter you must clone the reop from github using the following method: </p>
<strong> git clone [repository link] </strong>
<p> You then will be able to run a Monty file by compiling with specific flags </p>

<p> All files should be compiled with <p> <strong> gcc -Wall -Werror -Wextra -pedantic *.c -o monty </strong>
<p> To run the program, enter: </p> <strong> > ./monty <file> </strong>

<h2> Operation Functions </h2>
<p> Here is a list of Operations that the Monty Interpreter will only understand </p>
<ul style="list-style-type:disc;">
  <li> push <integer> </li>
  <li> pall </li>
  <li> pint </li>
  <li> pop </li>
  <li> swap </li>
  <li> nop </li>

</ul>