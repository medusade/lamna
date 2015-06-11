///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2015 $organization$
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
///   File: image.hpp
///
/// Author: $author$
///   Date: 5/31/2015
///////////////////////////////////////////////////////////////////////
#ifndef _LAMNA_GRAPHIC_IMAGE_HPP
#define _LAMNA_GRAPHIC_IMAGE_HPP

#include "lamna/graphic/hollow_midpoint_ellipse.hpp"
#include "lamna/graphic/hollow_midpoint_circle.hpp"
#include "lamna/graphic/midpoint_ellipse.hpp"
#include "lamna/graphic/midpoint_circle.hpp"
#include "lamna/graphic/triangle.hpp"
#include "lamna/graphic/bresenham_line.hpp"
#include "lamna/graphic/image_base.hpp"
#include "lamna/io/logger.hpp"

namespace lamna {
namespace graphic {

///////////////////////////////////////////////////////////////////////
///  Class: image_interfacet
///////////////////////////////////////////////////////////////////////
template
<class TInterfaceBase = image_base_interface,
 class TInt = int,
 class TSize = size_t,
 class TLength = ssize_t,
 class TOffset = ssize_t,
 class TImplements = TInterfaceBase>

class _EXPORT_CLASS image_interfacet: virtual public TImplements {
public:
    typedef TImplements Implements;

    typedef image_interfacet tImageInterface;
    typedef TInterfaceBase tInterfaceBase;
    typedef TInt tInt;
    typedef TSize tSize;
    typedef TLength tLength;
    typedef TOffset tOffset;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual tImageInterface* CreateColor
    (tSize r, tSize g, tSize b, tSize o = 0, tSize w = 1, tSize h = 1) {
        tImageInterface* image = 0;
        return image;
    }
    virtual eError Destroy(tImageInterface& image) {
        eError error = e_ERROR_NONE;
        return error;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual eError Plot(tImageInterface& image, tOffset x, tOffset y) {
        eError error = e_ERROR_NONE;
        tImageInterface* prevImage = SelectImage(&image);
        error = Plot(x,y);
        SelectAsImage(prevImage);
        return error;
    }
    virtual eError Fill
    (tImageInterface& image, tOffset x, tOffset y, tSize w, tSize h) {
        eError error = e_ERROR_NONE;
        tImageInterface* prevImage = SelectImage(&image);
        error = Fill(x,y, w,h);
        SelectAsImage(prevImage);
        return error;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual eError Plot(tOffset x, tOffset y) {
        eError error = e_ERROR_NONE;
        return error;
    }
    virtual eError Fill(tOffset x, tOffset y, tSize w, tSize h) {
        eError error = e_ERROR_NONE;
        return error;
    }
    virtual eError Draw(tOffset x, tOffset y, tOffset x2, tOffset y2) {
        eError error = e_ERROR_NONE;
        return error;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual eError DrawCircle
    (tOffset x, tOffset y, tSize r, eOctant o = e_OCTANT_ALL) {
        eError error = e_ERROR_NONE;
        return error;
    }
    virtual eError FillCircle
    (tOffset x, tOffset y, tSize r, eOctant o = e_OCTANT_ALL) {
        eError error = e_ERROR_NONE;
        return error;
    }
    virtual eError HollowCircle
    (tOffset x, tOffset y, tSize r, eOctant o = e_OCTANT_ALL) {
        eError error = e_ERROR_NONE;
        return error;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual eError DrawEllipse
    (tOffset x, tOffset y, tSize w, tSize h, eQuadrant q = e_QUADRANT_ALL) {
        eError error = e_ERROR_NONE;
        return error;
    }
    virtual eError FillEllipse
    (tOffset x, tOffset y, tSize w, tSize h, eQuadrant q = e_QUADRANT_ALL) {
        eError error = e_ERROR_NONE;
        return error;
    }
    virtual eError HollowEllipse
    (tOffset x, tOffset y, tSize w, tSize h, eQuadrant q = e_QUADRANT_ALL) {
        eError error = e_ERROR_NONE;
        return error;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual eError DrawTriangle
    (tOffset x1, tOffset y1, tOffset x2, tOffset y2, tOffset x3, tOffset y3) {
        eError error = e_ERROR_NONE;
        return error;
    }
    virtual eError FillTriangle
    (tOffset x1, tOffset y1, tOffset x2, tOffset y2, tOffset x3, tOffset y3) {
        eError error = e_ERROR_NONE;
        return error;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual tImageInterface* SelectAsImage(tImageInterface* image) {
        tImageInterface* prevImage = 0;
        if (image)
            prevImage = image->SelectAsImage();
        else
        prevImage = SetImage(image);
        return prevImage;
    }
    virtual tImageInterface* SelectAsImage() {
        tImageInterface* prevImage = Image();
        return prevImage;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual tImageInterface* SetAsImage(tImageInterface* image) {
        tImageInterface* prevImage = 0;
        if (image)
            prevImage = image->SetAsImage();
        else
        prevImage = Image();
        return prevImage;
    }
    virtual tImageInterface* SetAsImage() {
        tImageInterface* prevImage = Image();
        return prevImage;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual tImageInterface* SelectImage(tImageInterface* image) {
        tImageInterface* prevImage = Image();
        SetImage(image);
        return prevImage;
    }
    virtual tImageInterface* SetImage(tImageInterface* image) {
        tImageInterface* prevImage = 0;
        return prevImage;
    }
    virtual tImageInterface* Image() const {
        tImageInterface* image = 0;
        return image;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef image_interfacet<> image_interface;

///////////////////////////////////////////////////////////////////////
///  Class: base_imaget
///////////////////////////////////////////////////////////////////////
template
<class TImageInterface = image_interface,
 class TInt = int,
 class TSize = size_t,
 class TLength = ssize_t,
 class TOffset = ssize_t,
 class TBase = base,
 class TExtends = TBase>

class _EXPORT_CLASS base_imaget: public TExtends {
public:
    typedef TExtends Extends;

    typedef TImageInterface tImageInterface;
    typedef TBase tBase;
    typedef TInt tInt;
    typedef TSize tSize;
    typedef TLength tLength;
    typedef TOffset tOffset;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    base_imaget(tImageInterface& image): m_image(image) {
    }
    virtual ~base_imaget() {
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual eError Plot(tImageInterface& image, tOffset x, tOffset y) {
        eError error = image.Plot(x,y);
        return error;
    }
    virtual eError Fill
    (tImageInterface& image, tOffset x, tOffset y, tSize w, tSize h) {
        eError error = image.Fill(x,y, w,h);
        return error;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual eError Plot(tOffset x, tOffset y) {
        eError error = m_image.Plot(x,y);
        return error;
    }
    virtual eError Fill(tOffset x, tOffset y, tSize w, tSize h) {
        eError error = m_image.Fill(x,y, w,h);
        return error;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    tImageInterface& m_image;
};
typedef base_imaget<> base_image;

typedef bresenham_linet
<base_image, image_interface> bresenham_line_image_extends;
///////////////////////////////////////////////////////////////////////
///  Class: bresenham_line_image
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS bresenham_line_image: public bresenham_line_image_extends {
public:
    typedef bresenham_line_image_extends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    bresenham_line_image(tImageInterface& image): Extends(image) {
    }
    virtual ~bresenham_line_image() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual void DrawLine
    (tImageInterface &image, tInt x1,tInt y1, tInt x2,tInt y2) {
        BresenhamLineT<Extends, tPixel, tInt>
        (*this, image, x1,y1, x2,y2);
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};

typedef midpoint_circlet
<base_image, image_interface> midpoint_circle_image_extends;
///////////////////////////////////////////////////////////////////////
///  Class: midpoint_circle_image
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS midpoint_circle_image: public midpoint_circle_image_extends {
public:
    typedef midpoint_circle_image_extends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    midpoint_circle_image(tImageInterface& image): Extends(image) {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual void PlotCircle
    (tImageInterface &image, tInt cx,tInt cy, tInt r,
     eCircleOctant o = e_CIRCLE_OCTANT_ALL) {
        MidpointCircleT<Extends, tPixel, tInt>(*this, image, cx,cy,r, o);
    }
};

typedef filled_midpoint_circlet
<base_image, image_interface> filled_midpoint_circle_image_extends;
///////////////////////////////////////////////////////////////////////
///  Class: filled_midpoint_circle_image
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS filled_midpoint_circle_image
: public filled_midpoint_circle_image_extends {
public:
    typedef filled_midpoint_circle_image_extends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    filled_midpoint_circle_image(tImageInterface& image): Extends(image) {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual void PlotCircle
    (tImageInterface &image, tInt cx,tInt cy, tInt r,
     eCircleOctant o = e_CIRCLE_OCTANT_ALL) {
        MidpointCircleT<Extends, tPixel, tInt>(*this, image, cx,cy,r, o);
    }
};

typedef hollow_midpoint_circlet
<base_image, image_interface> hollow_midpoint_circle_image_extends;
///////////////////////////////////////////////////////////////////////
///  Class: hollow_midpoint_circle_image
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS hollow_midpoint_circle_image
: public hollow_midpoint_circle_image_extends {
public:
    typedef hollow_midpoint_circle_image_extends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    hollow_midpoint_circle_image(tImageInterface& image): Extends(image) {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual void PlotCircle
    (tImageInterface &image, tInt cx,tInt cy, tInt r,
     eCircleOctant o = e_CIRCLE_OCTANT_ALL) {
        CircleStart();
        MidpointCircleT<Extends, tPixel, tInt>(*this, image, cx,cy,r, o);
        CircleFinish(image);
    }
};

typedef midpoint_ellipset
<base_image, image_interface> midpoint_ellipse_image_extends;
///////////////////////////////////////////////////////////////////////
///  Class: midpoint_ellipse_image
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS midpoint_ellipse_image: public midpoint_ellipse_image_extends {
public:
    typedef midpoint_ellipse_image_extends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    midpoint_ellipse_image(tImageInterface& image): Extends(image) {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual void PlotEllipse
    (tImageInterface& image, tInt cx,tInt cy, tInt a,tInt b,
     eEllipseQuadrant q = e_ELLIPSE_QUADRANT_ALL) {
        MidpointEllipseT<Extends, tPixel, tInt>
        (*this, image, cx,cy, a,b, q);
    }
};

typedef filled_midpoint_ellipset
<midpoint_ellipse_image, image_interface> filled_midpoint_ellipse_image_extends;
///////////////////////////////////////////////////////////////////////
///  Class: filled_midpoint_ellipse_image
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS filled_midpoint_ellipse_image
: public filled_midpoint_ellipse_image_extends {
public:
    typedef filled_midpoint_ellipse_image_extends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    filled_midpoint_ellipse_image(tImageInterface& image): Extends(image) {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual void PlotEllipse
    (tImageInterface& image, tInt cx,tInt cy, tInt a,tInt b,
     eEllipseQuadrant q = e_ELLIPSE_QUADRANT_ALL) {
        MidpointEllipseT<Extends, tPixel, tInt>
        (*this, image, cx,cy, a,b, q);
    }
};

typedef hollow_midpoint_ellipset
<midpoint_ellipse_image, image_interface> hollow_midpoint_ellipse_image_extends;
///////////////////////////////////////////////////////////////////////
///  Class: hollow_midpoint_ellipse_image
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS hollow_midpoint_ellipse_image
: public hollow_midpoint_ellipse_image_extends {
public:
    typedef hollow_midpoint_ellipse_image_extends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    hollow_midpoint_ellipse_image(tImageInterface& image): Extends(image) {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual void PlotEllipse
    (tImageInterface& image, tInt cx,tInt cy, tInt a,tInt b,
     eEllipseQuadrant q = e_ELLIPSE_QUADRANT_ALL) {
        EllipseStart();
        MidpointEllipseT<Extends, tPixel, tInt>
        (*this, image, cx,cy, a,b, q);
        EllipseFinish(image);
    }
};

///////////////////////////////////////////////////////////////////////
///  Class: imaget
///////////////////////////////////////////////////////////////////////
template
<class TImageInterface = image_interface,
 class TInt = int,
 class TSize = size_t,
 class TLength = ssize_t,
 class TOffset = ssize_t,
 class TBase = base,
 class TImplements = TImageInterface, class TExtends = TBase>

class _EXPORT_CLASS imaget: virtual public TImplements,public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;

    typedef TImageInterface tImageInterface;
    typedef TBase tBase;
    typedef TInt tInt;
    typedef TSize tSize;
    typedef TLength tLength;
    typedef TOffset tOffset;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    imaget(tImageInterface* image = 0): m_image(image) {
    }
    virtual ~imaget() {
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual eError Plot(tImageInterface& image, tOffset x, tOffset y) {
        eError error = e_ERROR_NONE;
        error = image.Plot(x,y);
        return error;
    }
    virtual eError Fill
    (tImageInterface& image, tOffset x, tOffset y, tSize w, tSize h) {
        eError error = e_ERROR_NONE;
        error = image.Fill(x,y, w,h);
        return error;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual eError Plot(tOffset x, tOffset y) {
        eError error = e_ERROR_NONE;
        tImageInterface* image;
        if ((image = Image())) {
            error = image->Plot(x, y);
        }
        return error;
    }
    virtual eError Fill(tOffset x, tOffset y, tSize w, tSize h) {
        eError error = e_ERROR_NONE;
        tImageInterface* image;
        if ((image = Image())) {
            error = image->Fill(x,y, w,h);
        }
        return error;
    }
    virtual eError Draw(tOffset x, tOffset y, tOffset x2, tOffset y2) {
        eError error = e_ERROR_NONE;
        tImageInterface* image;
        if ((image = Image())) {
            bresenham_line_image line(*image);
            line.DrawLine(*image, x,y, x2,y2);
        }
        return error;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual eError DrawCircle
    (tOffset x, tOffset y, tSize r, eOctant o = e_OCTANT_ALL) {
        eError error = e_ERROR_NONE;
        tImageInterface* image;
        if ((image = Image())) {
            midpoint_circle_image circle(*image);
            circle.PlotCircle(*image, x,y, r, o);
        }
        return error;
    }
    virtual eError FillCircle
    (tOffset x, tOffset y, tSize r, eOctant o = e_OCTANT_ALL) {
        eError error = e_ERROR_NONE;
        tImageInterface* image;
        if ((image = Image())) {
            filled_midpoint_circle_image circle(*image);
            circle.PlotCircle(*image, x,y, r, o);
        }
        return error;
    }
    virtual eError HollowCircle
    (tOffset x, tOffset y, tSize r, eOctant o = e_OCTANT_ALL) {
        eError error = e_ERROR_NONE;
        tImageInterface* image;
        if ((image = Image())) {
            hollow_midpoint_circle_image circle(*image);
            circle.PlotCircle(*image, x,y, r, o);
        }
        return error;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual eError DrawEllipse
    (tOffset x, tOffset y, tSize w, tSize h, eQuadrant q = e_QUADRANT_ALL) {
        eError error = e_ERROR_NONE;
        tImageInterface* image;
        if ((image = Image())) {
            midpoint_ellipse_image ellipse(*image);
            ellipse.PlotEllipse(*image, x,y, w,h, q);
        }
        return error;
    }
    virtual eError FillEllipse
    (tOffset x, tOffset y, tSize w, tSize h, eQuadrant q = e_QUADRANT_ALL) {
        eError error = e_ERROR_NONE;
        tImageInterface* image;
        if ((image = Image())) {
            filled_midpoint_ellipse_image ellipse(*image);
            ellipse.PlotEllipse(*image, x,y, w,h, q);
        }
        return error;
    }
    virtual eError HollowEllipse
    (tOffset x, tOffset y, tSize w, tSize h, eQuadrant q = e_QUADRANT_ALL) {
        eError error = e_ERROR_NONE;
        tImageInterface* image;
        if ((image = Image())) {
            hollow_midpoint_ellipse_image ellipse(*image);
            ellipse.PlotEllipse(*image, x,y, w,h, q);
        }
        return error;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual eError DrawTriangle
    (tOffset x1, tOffset y1, tOffset x2, tOffset y2, tOffset x3, tOffset y3) {
        eError error = e_ERROR_NONE;
        tImageInterface* image;
        if ((image = Image())) {
        }
        return error;
    }
    virtual eError FillTriangle
    (tOffset x1, tOffset y1, tOffset x2, tOffset y2, tOffset x3, tOffset y3) {
        eError error = e_ERROR_NONE;
        tImageInterface* image;
        if ((image = Image())) {
            base_image baseImage(*this);
            FillTriangleT
            <base_image, image_interface,
             bresenham_line_context, sorted_image_point_triangle,
             image_point, tInt, tLength>
            (baseImage, *image, x1,y1, x2,y2, x3,y3);
        }
        return error;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual tImageInterface* SetImage(tImageInterface* image) {
        tImageInterface* prevImage = m_image;
        m_image = image;
        return prevImage;
    }
    virtual tImageInterface* Image() const {
        tImageInterface* image = m_image;
        return image;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    tImageInterface* m_image;
};
typedef imaget<> image;

///////////////////////////////////////////////////////////////////////
///  Class: logger_image
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS logger_image
: virtual public image_interface, public base {
public:
    typedef base_image Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    logger_image() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual eError Plot(tImageInterface& image, tOffset x, tOffset y) {
        eError error = e_ERROR_NONE;
        LAMNA_LOG_MESSAGE_TRACE("Plot(x = " << x << ", y = " << y << ")");
        return error;
    }
    virtual eError Fill(tImageInterface& image, tOffset x, tOffset y, tSize w, tSize h) {
        eError error = e_ERROR_NONE;
        LAMNA_LOG_MESSAGE_TRACE("Fill(x = " << x << ",y = " << y << ", w = " << w << ",h = " << h << ")");
        return error;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual eError Plot(tOffset x, tOffset y) {
        eError error = e_ERROR_NONE;
        LAMNA_LOG_MESSAGE_TRACE("Plot(x = " << x << ", y = " << y << ")");
        return error;
    }
    virtual eError Fill(tOffset x, tOffset y, tSize w, tSize h) {
        eError error = e_ERROR_NONE;
        LAMNA_LOG_MESSAGE_TRACE("Fill(x = " << x << ",y = " << y << ", w = " << w << ",h = " << h << ")");
        return error;
    }
};

} // namespace graphic
} // namespace lamna 

#endif // _LAMNA_GRAPHIC_IMAGE_HPP 
