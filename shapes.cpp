#include <iostream>
#include "shapes.h"
#include <fstream>
#include <cctype>

//---------------TASK-A---------//
std::string removeLeadingSpaces(std::string line)
{
  int length = line.length();
  bool after = false;
  // int counter = 0;
  std::string empty = "";
  for(int i = 0; i < length; i++)
  {
    // char l = line[i];
    if (!(isspace(line[i])))
    {
      empty = empty + line[i];
      after = true;
    }
    if (isspace(line[i]) && after == true)
    {
      empty = empty + line[i];
      // counter++;
    }
    if(line[i] == '\n')
    {
      after = false;
      // empty = empty + "\n";
    }
  }
  // empty = empty + "\n";
  return empty;
}

//----------------TASK-B----//
std::string inserttab(std::string line){
  int tab = 0;
  std::string cleaned;
  std::string final = "";
  cleaned = removeLeadingSpaces(line);
  for (int i = 0; i < (cleaned.length());i++)
  {
    final = final + cleaned[i];
    if (cleaned[i] == '{')
    {
      tab++;
    }
    if (cleaned[i] == '}')
    {
      tab--;

    }
    if (cleaned[i] == '\n' && cleaned[i+1] != '}')
    {
      final = final + std::string(tab, '\t');
    }
    if (cleaned[i] == '\n' && cleaned[i+1] == '}')
    {
      final = final + std::string(tab-1, '\t');
    }
  }
  return final;
}
