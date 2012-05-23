%module (directors="1") ImageDataLib
%{
    include "Image.h"
%}

%include "SmartPtr.i"

namespace Surc 
{
    namespace Image 
    {
        typedef Surc::System::SmartPtr<Surc::Image::Image> ImagePtr;
    }
}

%include "Image.h"
%template(ImagePtr) Surc::System::SmartPtr<Surc::Image::Image>;
