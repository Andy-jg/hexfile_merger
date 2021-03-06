/**
  \file globals.h
   
  \author G. Icking-Konert
  \date 2008-11-02
  \version 0.1

  \brief declaration of global variables 

  global data for program. All global variables start with "g_" to 
  indicate their scope.

*/

// for including file only once
#ifndef _GLOBALS_H_
#define _GLOBALS_H_


////////////
// includes
////////////

// generic ANSI
#include <stdint.h>


/** 
    \def global
    \brief use macro in conjunction with '_MAIN_' to define globals only once
    
    macro '_MAIN_' is defined in 'main.c' prior to including this file, and 
    undefined afterwards. Other files include this file w/o defining '_MAIN_'.
    Thus, global variables can be defined and referenced to using the same
    header file. Note that initialization of globals has to be done separately,
    e.g. in 'main.c'.
*/
#ifdef _MAIN_
  #define global
#else
  #define global extern
#endif


/// output verbosity level
global uint8_t        g_verbose;

/// wait for \<return\> prior to closing console window
global uint8_t        g_pauseOnExit;


// undefine global again
#undef global

#endif // _GLOBALS_H_

// end of file
