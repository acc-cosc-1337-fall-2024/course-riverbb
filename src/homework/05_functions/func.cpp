// write code for functions get_gc_content, get_reverse_string, and get_dna_complement.

//add include statements
#include "func.h"
#include <iostream>

//add function code here

double get_gc_content(const std::string& dna)
{
  double gc_count = 0;

  for (char thing : dna)
    {
      if (thing == 'G' || thing == 'C')
      {
        gc_count++;
      }
    }
  return (static_cast<double>(gc_count) / dna.length()) * 100.0;
}

std::string get_reverse_string(std::string dna)
{
  int length = dna.length();
  for (int i = 0; i < length / 2; i++)
    {
      char temp = dna[i];
      dna[i] = dna[length - i - 1];
      dna[length - i - 1] = temp;
    }
  return dna;
}

std::string get_dna_complement(std::string dna)
{
  dna = get_reverse_string(dna);

  for (char & thing : dna)
    {
      switch (thing)
        {
          case 'A':
            thing = 'T';
            break;

          case 'T':
            thing = 'A';
            break;  

          case 'C':
            thing = 'G';
            break;  

          case 'G':
            thing = 'C';
            break;
        }
    }
  return dna;
}
