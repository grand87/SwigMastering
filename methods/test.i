%module (directors="1") testlib
%{
    include "test.h"
    include "testUse.h"
%}

    %feature("director") test;
    
    %include "testUse.h"
    %include "test.h"
    