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

//we need to prefix our function names with an additional keyword which
//is different depending on the operating system we are using, and whether
//we are using or creating the library.
//The variables "maths_EXPORTS" must be defined at build time if
//we are building the library, but not if we are using it.
#if defined(WIN32)|defined(_WIN32)
    #ifdef maths_STATIC
      //dont add any keywords if building a static library
        #define MATHSLIB_API
    #else
        #ifdef maths_EXPORTS
            #define MATHSLIB_API __declspec( dllexport )
        #else
            #define MATHSLIB_API __declspec( dllimport )
        #endif
    #endif
#else
      //MATHSLIB_API is defined as nothing if we are not on windows
      #define MATHSLIB_API
#endif

//the above will include one of:
// __declspec( dllexport)
// __declspec( dllimport)
//before declerations. This is a Microsoft specific extension to c/c++

//prototype for our function including additional keyword (MATHSLIB_API)
MATHSLIB_API int add( int a, int b);

#endif

//adder.h
