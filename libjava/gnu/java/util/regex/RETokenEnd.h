
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_regex_RETokenEnd__
#define __gnu_java_util_regex_RETokenEnd__

#pragma interface

#include <gnu/java/util/regex/REToken.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace lang
      {
          class CPStringBuilder;
      }
      namespace util
      {
        namespace regex
        {
            class CharIndexed;
            class REMatch;
            class RETokenEnd;
        }
      }
    }
  }
}

class gnu::java::util::regex::RETokenEnd : public ::gnu::java::util::regex::REToken
{

public: // actually package-private
  RETokenEnd(jint, ::java::lang::String *);
  RETokenEnd(jint, ::java::lang::String *, jboolean);
  void setFake(jboolean);
  jint getMaximumLength();
  jboolean match(::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *);
  ::gnu::java::util::regex::REMatch * matchThis(::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *);
  jboolean returnsFixedLengthMatches();
  jint findFixedLengthMatches(::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *, jint);
  void dump(::gnu::java::lang::CPStringBuilder *);
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::gnu::java::util::regex::REToken)))) newline;
  jboolean check_java_line_terminators;
  jboolean fake;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_util_regex_RETokenEnd__
