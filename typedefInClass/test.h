#include "Image.h"

namespace Surc 
{
    namespace UIEngine
    {
   
        class WidgetImage
        {
            public:
                typedef Image::Image Image;
                typedef Image::ImagePtr ImagePtr;                
                
                WidgetImage();
                void testMethod1(Image sourceImage);
                void testMethod2(ImagePtr sourceImage);
        };
    }
}    
