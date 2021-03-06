#ifndef RACES_H
#define RACES_H
#pragma once

#include "characters.h"
#include <string>

class Generic_Character_Class;

class Races
{
public:
  //accessor
  virtual ~Races() { }
  virtual void setRaceDetails(Generic_Character_Class &v) = 0;
  virtual std::string getRaceString() const = 0;
};

class Dragonborn : public Races
{
public:
  virtual void setRaceDetails(Generic_Character_Class &v);
  virtual std::string getRaceString() const;
};

class Dwarf : public Races
{
public:
  enum dwarftype
  {
    NA,
    HILL,
    MOUNTAIN
  };
  dwarftype subr;
  virtual void setRaceDetails(Generic_Character_Class &v);
  virtual std::string getRaceString() const;
};

class Elf : public Races
{
public:
  enum elftype
  {
    NA,
    HIGH,
    WOOD,
    DROW
  };
  elftype subr;
  virtual void setRaceDetails(Generic_Character_Class &v);
  virtual std::string getRaceString() const;
};

class Gnome : public Races
{
public:
  enum gnometype
  {
    NA,
    FOREST,
    ROCK
  };
  gnometype subr;
  virtual void setRaceDetails(Generic_Character_Class &v);
  virtual std::string getRaceString() const;
};

class Halfelf : public Races
{
public:
  virtual void setRaceDetails(Generic_Character_Class &v);
  virtual std::string getRaceString() const;
};

class Halforc : public Races
{
public:
  virtual void setRaceDetails(Generic_Character_Class &v);
  virtual std::string getRaceString() const;
};

class Halfling : public Races
{
public:
  enum halflingtype
  {
    NA,
    LIGHTFOOT,
    STOUT
  };
  halflingtype subr;
  virtual void setRaceDetails(Generic_Character_Class &v);
  virtual std::string getRaceString() const;
};

class Human : public Races
{
public:
  virtual void setRaceDetails(Generic_Character_Class &v);
  virtual std::string getRaceString() const;
};

class Tiefling : public Races
{
public:
  virtual void setRaceDetails(Generic_Character_Class &v);
  virtual std::string getRaceString() const;
};

#endif /* defined(__dm_power_poly__races__) */
