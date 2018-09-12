#ifndef FORT2C_CXX
#define FORT2C_CXX
#include <iostream>
#include "Fort2C.hh"
#include "TreeWriter.hh"

//Declare the writer object as global
TreeWriter *writer;

// Initialize the writer.
//
// input:   -
// output:  -
void inittree_(){
  writer = new TreeWriter();
}

// Invoke the method for filling the tree.
//
// input:   -
// output:  -
void fillntu_(){
  std::cout << evtinfo_.PhiD << std::endl;
  writer->FillTTree();
}

// Deallocate writer variable.
//
// input:   -
// output:  -
void closetree_(){
  delete writer;
}

#endif





















