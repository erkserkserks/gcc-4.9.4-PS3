
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_text_MessageFormat__
#define __java_text_MessageFormat__

#pragma interface

#include <java/text/Format.h>
#include <gcj/array.h>

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
      namespace text
      {
          class FormatCharacterIterator;
      }
    }
  }
  namespace java
  {
    namespace text
    {
        class AttributedCharacterIterator;
        class FieldPosition;
        class Format;
        class MessageFormat;
        class MessageFormat$MessageFormatElement;
        class ParsePosition;
    }
  }
}

class java::text::MessageFormat : public ::java::text::Format
{

  static jint scanString(::java::lang::String *, jint, ::gnu::java::lang::CPStringBuilder *);
  static jint scanFormatElement(::java::lang::String *, jint, ::gnu::java::lang::CPStringBuilder *, jchar);
  static jint scanFormat(::java::lang::String *, jint, ::gnu::java::lang::CPStringBuilder *, ::java::util::List *, ::java::util::Locale *);
public:
  virtual void applyPattern(::java::lang::String *);
  virtual ::java::lang::Object * clone();
  virtual jboolean equals(::java::lang::Object *);
  virtual ::java::text::AttributedCharacterIterator * formatToCharacterIterator(::java::lang::Object *);
  static ::java::lang::String * format(::java::lang::String *, JArray< ::java::lang::Object * > *);
  virtual ::java::lang::StringBuffer * format(JArray< ::java::lang::Object * > *, ::java::lang::StringBuffer *, ::java::text::FieldPosition *);
private:
  ::java::lang::StringBuffer * formatInternal(JArray< ::java::lang::Object * > *, ::java::lang::StringBuffer *, ::java::text::FieldPosition *, ::gnu::java::text::FormatCharacterIterator *);
public:
  virtual ::java::lang::StringBuffer * format(::java::lang::Object *, ::java::lang::StringBuffer *, ::java::text::FieldPosition *);
  virtual JArray< ::java::text::Format * > * getFormats();
  virtual ::java::util::Locale * getLocale();
  virtual jint hashCode();
private:
  MessageFormat();
public:
  MessageFormat(::java::lang::String *);
  MessageFormat(::java::lang::String *, ::java::util::Locale *);
  virtual JArray< ::java::lang::Object * > * parse(::java::lang::String *, ::java::text::ParsePosition *);
  virtual JArray< ::java::lang::Object * > * parse(::java::lang::String *);
  virtual ::java::lang::Object * parseObject(::java::lang::String *, ::java::text::ParsePosition *);
  virtual void setFormat(jint, ::java::text::Format *);
  virtual void setFormats(JArray< ::java::text::Format * > *);
  virtual void setLocale(::java::util::Locale *);
  virtual ::java::lang::String * toPattern();
  virtual JArray< ::java::text::Format * > * getFormatsByArgumentIndex();
  virtual void setFormatByArgumentIndex(jint, ::java::text::Format *);
  virtual void setFormatsByArgumentIndex(JArray< ::java::text::Format * > *);
private:
  static const jlong serialVersionUID = 6479157306784022952LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::text::Format)))) pattern;
  ::java::util::Locale * locale;
  JArray< ::java::text::MessageFormat$MessageFormatElement * > * elements;
  ::java::lang::String * leader;
public:
  static ::java::lang::Class class$;
};

#endif // __java_text_MessageFormat__
