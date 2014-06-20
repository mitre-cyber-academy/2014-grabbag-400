Name: Read Between the Lines

Description: The user will be presented with a a C source file with its accompanying object file. However, the code and the out file are completely and utterly useless.
The key is hidden in an esoteric programming language called "Whitespace" that is embedded in the source file. In this language, only spaces, tabs and linefeeds (new lines)
are commands and number/characters. To learn more about this language, look at its Wiki page or Google it.

Solution: Whereever there are two or more lines between commands in the C file contain the actual code to the Whitespace program. Rather than getting the interpreter,
it would be easier to just use one online. However, out of the three I have used only 2 work properly, but one of them doesn't carry over tabs. Moving on, we can see the code
by selecting the entire document in Sublime and see the hidden code with their format symbols. Once the code has been carried over to an interpreter properly, they will execute
the code and the key will show up.

Working interpreter: http://ws2js.luilak.net/interpreter.html

Note: The Whitespace code is supplied in this file. In it you will see "S"(space), "T" (tab) and "L" (linefeed) along with the key characters on the beginning of each line. The language sees all other characters as comments, so you can keep those in there. Copy and paste into the interpereter and run.

Key: MCA-73F9CB12