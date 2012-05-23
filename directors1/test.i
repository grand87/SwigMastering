%module (directors="1") testlib
%{
    include "test.h"
%}

%import <data.h>

%typemap(jtype) (Demo::Data *) "com.samsung.Demo"
%typemap(jstype) (Demo::Data *) "com.samsung.Demo"

%feature("director") Work::WidgetImage;

%include <test.h>
    