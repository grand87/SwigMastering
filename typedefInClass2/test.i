%module (directors="1") testlib
%{
    include "test.h"
%}

%include "SmartPtr.i"
%include "Image.i"

%include "std_vector.i"

%typemap(javain) (Surc::UIEngine::WidgetImage::ImagePtrListPosition) "$javainput"
%typemap(jni) (Surc::UIEngine::WidgetImage::ImagePtrListPosition) "jlong"
%typemap(jtype) (Surc::UIEngine::WidgetImage::ImagePtrListPosition) "long"
%typemap(jstype) (Surc::UIEngine::WidgetImage::ImagePtrListPosition) "long"

%include "test.h"

%template(ImagePtrList) std::vector<Surc::Image::ImagePtr>;

    