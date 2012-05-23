#include "Image.h"
#include <vector>


namespace Surc 
{
    namespace UIEngine
    {
   
        class WidgetImage
        {
            public:
                typedef Image::Image Image;
                typedef Surc::Image::ImagePtr ImagePtr;
                typedef std::vector<ImagePtr> ImagePtrList;
                typedef ImagePtrList::size_type ImagePtrListPosition;
                                
                WidgetImage();
                void testMethod1(Image sourceImage);
                void testMethod2(ImagePtr sourceImage);
                
                void setImageList(ImagePtrList list);
                ImagePtr getImageFromList(ImagePtrListPosition position);
        };
    }
}    
