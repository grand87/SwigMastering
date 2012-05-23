%module (directors="1") testlib
%{
    include "test.h"
%}

%include "SmartPtr.i"
%include "Image.i"

%rename("Surc::Image::ImagePtr") "Image::ImagePtr";

%include "test.h"

    