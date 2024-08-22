<h1>C Language Syntax Checker Tool<br></h1>

<h2>Project Description<br></h2>
This project is a simple C Language Syntax Checker that allows users to input C code and verify its syntax. The tool leverages the GCC compiler's syntax-checking capabilities to provide immediate feedback on whether the entered code is syntactically correct or contains errors.

Key Features<br>

<h3>Input Handling:</h3>

Users can input their C code directly within the terminal, ending input by typing "END" on a new line.<br>

<h3>Syntax Verification:</h3>

The tool saves the entered code to a temporary file and uses the GCC compiler to check the file for syntax errors without compiling it.<br>
<h3>Error Reporting:</h3>

Detailed error messages are provided if any syntax issues are found, helping users identify and correct mistakes.
If the code is syntactically correct, a success message is displayed.<br>
<h3>Cleanup:</h3>

After the syntax check, the tool automatically deletes the temporary file and the output log to keep your workspace clean.<br></ul>

<h2>Usage<br></h2>
<ol>
Clone the repository to your local machine.<br>
Compile the syntax checker using a C compiler like GCC.<br>
Run the program and enter your C code.<br>
Type END on a new line to finish input.<br>
View the results: either a success message or detailed syntax error messages.<br>
</ol>
This tool is particularly useful for beginners learning C programming, providing an easy way to validate code before attempting to compile and run it.<br>

<h2>License<br></h2>
This project is licensed under the MIT License. See the LICENSE file for more details.<br>
