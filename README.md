# Decorator-Pattern-Implementation

In this problem you will have a chance to implement the Decorator pattern. The goal is to
write an extensible text processing package. You will be provided with two fully-implemented
classes:
 TextProcessor (textprocessor.{h,cc}): abstract base class that denes the interface
to the text processor.
 Echo (echo.{h,cc}): concrete implementation of TextProcessor, which provides de-
fault behaviour: it echoes the words in its input stream, one token at a time.
You will also be provided with a partially-implemented mainline program for testing your
text processor (main.cc).
You are not permitted to modify the two given classes in any way.
You must provide the following functionalities that can be added to the default behaviour of
Echo via decorators:
 dropfirst n Drop the rst n characters of each word. If n is greater than the length of
some word, the following word is not aected.
 doublewords Double up all words in the string.
 allcaps All letters in the string are presented in uppercase. Other characters remain
unchanged.
 count c The rst occurrence of the character c in the string is replaced with 1. The
second is replaced with 2, ... the tenth is replaced with 10, and so on.
These functionalities can be composed in any combination of ways to create a variety of
custom text processors.
The mainline interpreter loop works as follows:

 You issue a command of the form source-file list-of-decorators. If source-file
is stdin, then input should be taken from cin.
 The program constructs a custom text processor from list-of-decorators and applies
the text processor to the words in source-file, printing the resulting words, one per
line.
 You may then issue another command. An end-of-le signal ends the interpreter loop.
An example interaction follows (assume sample.txt contains Hello World):
sample.txt doublewords dropfirst 2 count l
12o
34o
r5d
r6d
sample.txt allcaps
HELLO
WORLD
