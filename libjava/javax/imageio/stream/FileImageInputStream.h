
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_imageio_stream_FileImageInputStream__
#define __javax_imageio_stream_FileImageInputStream__

#pragma interface

#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace imageio
    {
      namespace stream
      {
          class FileImageInputStream;
      }
    }
  }
}

class javax::imageio::stream::FileImageInputStream : public ::javax::imageio::stream::ImageInputStreamImpl
{

public:
  FileImageInputStream(::java::io::File *);
  FileImageInputStream(::java::io::RandomAccessFile *);
  virtual void close();
  virtual jlong length();
  virtual jint read();
  virtual jint read(JArray< jbyte > *, jint, jint);
  virtual void seek(jlong);
private:
  ::java::io::RandomAccessFile * __attribute__((aligned(__alignof__( ::javax::imageio::stream::ImageInputStreamImpl)))) file;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_imageio_stream_FileImageInputStream__
