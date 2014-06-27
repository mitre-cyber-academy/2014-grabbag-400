Name: Read Between the Lines

Description: The user will be presented with an object file that is an interface of a nuclear reactor. This interface has different functions that will alter the condition of the reactor. If the user manages to 
cause a meltdown, a file will be dumped. Each type of meltdown will cause a different file to be dumped. Each file contains random ASCII characters and whitespace code. If the user melts down the core in a certain way,
the file with the correct whitespace code that prints the key will be generated.

Solution: To solve, the user has to melt the core by making the temperature too hot or having too much power produced. This can be done in three different ways. Either through pulsing the reactor too much, inputting the wrong steps to the turbine tests (or if the test just fails even though they have the right steps) or if they stress test the reactor too much. The user also has the option of raising and lowering the control rods to the reactor which will alter the temperature and power output. The turbine test will dump the correct file. The key lies in the whitespace gaps between the large chunks of randomized text in the file. The user has to copy and paste these portions carefully and put them into an online interpreter to generate the key. It should be noted that not all whitespace interpreters on the internet work correctly. Some may not carry over tab characters or not even run correctly. See below for a working interpreter.

Working interpreter: http://ws2js.luilak.net/interpreter.html

Note: The Whitespace code is supplied in this file. In it you will see "S"(space), "T" (tab) and "L" (linefeed) along with the key characters on the beginning of each line. The language sees all other characters as comments, so you can keep those in there. Copy and paste into the interpereter and run.

Key: MCA-73F9CB12