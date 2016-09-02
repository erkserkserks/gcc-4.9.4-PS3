
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JProgressBar__
#define __javax_swing_JProgressBar__

#pragma interface

#include <javax/swing/JComponent.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Graphics;
    }
  }
  namespace javax
  {
    namespace accessibility
    {
        class AccessibleContext;
    }
    namespace swing
    {
        class BoundedRangeModel;
        class JProgressBar;
      namespace event
      {
          class ChangeEvent;
          class ChangeListener;
      }
      namespace plaf
      {
          class ProgressBarUI;
      }
    }
  }
}

class javax::swing::JProgressBar : public ::javax::swing::JComponent
{

public:
  JProgressBar();
  JProgressBar(jint);
  JProgressBar(jint, jint);
  JProgressBar(jint, jint, jint);
  JProgressBar(::javax::swing::BoundedRangeModel *);
  virtual jint getValue();
  virtual void setValue(jint);
public: // actually protected
  virtual void paintBorder(::java::awt::Graphics *);
public:
  virtual jint getOrientation();
  virtual void setOrientation(jint);
  virtual jboolean isStringPainted();
  virtual void setStringPainted(jboolean);
  virtual ::java::lang::String * getString();
  virtual void setString(::java::lang::String *);
  virtual jdouble getPercentComplete();
  virtual jboolean isBorderPainted();
  virtual void setBorderPainted(jboolean);
  virtual ::javax::swing::plaf::ProgressBarUI * getUI();
  virtual void setUI(::javax::swing::plaf::ProgressBarUI *);
  virtual void updateUI();
  virtual ::java::lang::String * getUIClassID();
public: // actually protected
  virtual ::javax::swing::event::ChangeListener * createChangeListener();
public:
  virtual void addChangeListener(::javax::swing::event::ChangeListener *);
  virtual void removeChangeListener(::javax::swing::event::ChangeListener *);
  virtual JArray< ::javax::swing::event::ChangeListener * > * getChangeListeners();
public: // actually protected
  virtual void fireStateChanged();
public:
  virtual ::javax::swing::BoundedRangeModel * getModel();
  virtual void setModel(::javax::swing::BoundedRangeModel *);
  virtual jint getMinimum();
  virtual void setMinimum(jint);
  virtual jint getMaximum();
  virtual void setMaximum(jint);
public: // actually protected
  virtual ::java::lang::String * paramString();
public:
  virtual void setIndeterminate(jboolean);
  virtual jboolean isIndeterminate();
  virtual ::javax::accessibility::AccessibleContext * getAccessibleContext();
private:
  static const jlong serialVersionUID = 1980046021813598781LL;
  jboolean __attribute__((aligned(__alignof__( ::javax::swing::JComponent)))) indeterminate;
public: // actually protected
  jint orientation;
  jboolean paintBorder__;
  ::javax::swing::BoundedRangeModel * model;
  ::java::lang::String * progressString;
  jboolean paintString;
  ::javax::swing::event::ChangeEvent * changeEvent;
  ::javax::swing::event::ChangeListener * changeListener;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_JProgressBar__