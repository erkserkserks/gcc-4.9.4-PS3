
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_VMDouble__
#define __java_lang_VMDouble__

#pragma interface

#include <java/lang/Object.h>

class java::lang::VMDouble : public ::java::lang::Object
{

public: // actually package-private
  VMDouble();
public:
  static jlong doubleToLongBits(jdouble);
  static jlong doubleToRawLongBits(jdouble);
  static jdouble longBitsToDouble(jlong);
  static ::java::lang::String * toString(jdouble, jboolean);
  static jdouble parseDouble(::java::lang::String *);
  static ::java::lang::Class class$;
};

#endif // __java_lang_VMDouble__
