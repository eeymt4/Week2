// adder.h
// the following two lines prevent adder.h from being included
// more than once in any souce (.cpp file). If this were to happen
// it would cause problems in the com[ile proccess but it is difficult to
// prevent manually in large projects. these #ifndef, #define and #endif are
// commands for an "include guard" and are types of compiler directive.
// the include guard contains an ID for this file "MATHSLIB_ADDER_H", this is
// arbitrary but must be unique within the project
#ifndef MATHSLIB_ADDER_H
#define MATHSLIB_ADDER_H
//prototype for our function
int add( int a, int b);

#endif

//adder.h
