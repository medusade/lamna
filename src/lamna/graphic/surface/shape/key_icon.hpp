///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2016 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: key_icon.hpp
///
/// Author: $author$
///   Date: 9/8/2016
///////////////////////////////////////////////////////////////////////
#ifndef _LAMNA_GRAPHIC_SURFACE_SHAPE_KEY_ICON_HPP
#define _LAMNA_GRAPHIC_SURFACE_SHAPE_KEY_ICON_HPP

#include "lamna/graphic/surface/object.hpp"

namespace lamna {
namespace graphic {
namespace surface {
namespace shape {

///////////////////////////////////////////////////////////////////////
///  Class: key_icon
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS key_icon: public object {
public:
    typedef object Extends;
    typedef lamna::graphic::image_interface tImage;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    key_icon
    (tImageInterface& image,
     tImage& handleColor,
     tImage& bladeColor,
     tImage& borderColor,
     tSize width, tSize height)
    : Extends(image, width, height),
      m_handleColor(handleColor), m_bladeColor(bladeColor), m_borderColor(borderColor),
      uXTop(1), uXBottom(16), uYTop(1), uYBottom(8),
      uX((width*uXTop)/uXBottom), uY((height*uYTop)/uYBottom) {
    }
    virtual ~key_icon() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual eError Plot(tOffset x, tOffset y) {
        eError error = e_ERROR_NONE;
        tImage* selectedImage = m_image.SelectImage(&m_handleColor);
        tSize rWidth = uX*2;
        tSize rHeight = uY*2;
        tSize r2Width = uX/2?uX/2:3;
        tSize r2Height = uY/2?uY/2:3;
        tSize hWidth = uX*4;
        tSize hHeight = uY*4;
        tSize tWidth = uX;
        tSize tHeight = uY*3/2;
        tSize lWidth = uX/4?uX/4:2;
        tSize lHeight = uY/4?uY/4:2;

        /*cFilledEllipticalRoundedRectangleImageObject rrio
        (m_image, m_handleColor, rWidth, rHeight, hWidth, hHeight, 1,
         e_ROUNDED_RECTANGLE_CORNER_ALL,
         e_RECTANGLE_SIDE_TOP
         | e_RECTANGLE_SIDE_RIGHT
         | e_RECTANGLE_SIDE_BOTTOM, false);

        cHollowEllipticalRoundedRectangleImageObject rrio2
        (m_image, m_handleColor, r2Width, r2Height, 1, hHeight-r2Height-r2Height, 1);

        cFilledRectangleImageObject hrio
        (m_image, m_handleColor, rWidth-r2Width, hHeight);

        cFilledRectangleImageObject hrio2
        (m_image, m_handleColor, hWidth-r2Width, hHeight);

        cFilledRectangleImageObject hrio3
        (m_image, m_handleColor, lWidth, lHeight);

        cFilledRectangleImageObject rio
        (m_image, m_bladeColor, uX, hHeight);

        cFilledRectangleImageObject rio2
        (m_image, m_bladeColor, uX*6, tHeight);

        cFilledTriangleImageObject tior
        (m_image, m_bladeColor, 0,0, uX,0, 0,tHeight);

        cFilledTriangleImageObject tiol
        (m_image, m_bladeColor, 0,0, uX,0, uX,tHeight);

        cFilledTriangleImageObject tioe
        (m_image, m_bladeColor, 0,0, 0,tHeight, uX,tHeight);

        tSize i,iX,iY,jX,jY;

        rrio.Plot((iX=x+rWidth-1), (iY=y+rHeight-1));
        rrio2.Plot(iX, iY+r2Height);
        hrio.Plot(x, iY+1);
        hrio2.Plot(iX+r2Width, iY+1);

        rio.Plot(jX=(iX=iX+hWidth+rWidth-2), jY=iY);
        rio2.Plot(iX+uX, iY+uY*2-tHeight);

        tior.Plot(iX=iX+uX, iY=iY+uY*2);
        for (iX = iX+tWidth, i = 0; i < 3; i++, iX = iX+tWidth+tWidth)
        {
            tiol.Plot(iX,iY);
            tior.Plot(iX+tWidth,iY);
        }
        tioe.Plot(iX=iX-tWidth, iY=iY-tHeight);

        m_image.SelectAsImage(&hrio3);

        iX=jX; iY=jY;
        m_image.Draw(iX,iY, iX+uX-1,iY);
        m_image.Draw(iX+uX-1,iY, iX+uX-1,iY+hHeight-1);
        m_image.Draw(iX,iY+hHeight-1, iX+uX-1,iY+hHeight-1);
        m_image.Draw(iX+uX,iY+uY*2-tHeight, iX+uX+uX*6-1,iY+uY*2-tHeight);

        iX=iX+uX; iY=iY+uY*2;
        m_image.Draw(iX,iY, iX+tWidth-1,iY);
        m_image.Draw(iX,iY+tHeight-1, iX+tWidth-1,iY);

        for (iX = iX+tWidth, i = 0; i < 3; i++, iX = iX+tWidth+tWidth)
        {
            m_image.Draw(iX,iY, iX+tWidth+tWidth-2,iY);
            m_image.Draw(iX,iY, iX+tWidth-1,iY+tHeight-1);
            m_image.Draw(iX+tWidth,iY+tHeight-1, iX+tWidth+tWidth-1,iY);
        }
        iX=iX-tWidth; iY=iY-tHeight;
        m_image.Draw(iX,iY, iX+tWidth-1,iY+tHeight-1);*/

        m_image.SelectImage(selectedImage);
        return error;
    }
    virtual eError OnSetSize(tSize width, tSize height) {
        eError error = e_ERROR_NONE;
        uX = ((width*uXTop)/uXBottom);
        uY = ((height*uYTop)/uYBottom);
        return error;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    tImage &m_handleColor, &m_bladeColor, &m_borderColor;
    tSize uXTop, uXBottom;
    tSize uYTop, uYBottom;
    tSize uX, uY;
};

} // namespace shape 
} // namespace surface 
} // namespace graphic 
} // namespace lamna 

#endif // _LAMNA_GRAPHIC_SURFACE_SHAPE_KEY_ICON_HPP 
