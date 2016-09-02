
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_ServiceDetailHelper__
#define __org_omg_CORBA_ServiceDetailHelper__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class ServiceDetail;
          class ServiceDetailHelper;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
    }
  }
}

class org::omg::CORBA::ServiceDetailHelper : public ::java::lang::Object
{

public:
  ServiceDetailHelper();
  static ::org::omg::CORBA::ServiceDetail * extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static void insert(::org::omg::CORBA::Any *, ::org::omg::CORBA::ServiceDetail *);
  static ::org::omg::CORBA::ServiceDetail * read(::org::omg::CORBA::portable::InputStream *);
  static ::org::omg::CORBA::TypeCode * type();
  static void write(::org::omg::CORBA::portable::OutputStream *, ::org::omg::CORBA::ServiceDetail *);
private:
  static ::java::lang::String * _id;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_ServiceDetailHelper__
