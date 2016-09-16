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
///   File: rounded_rectangle_image.hpp
///
/// Author: $author$
///   Date: 9/15/2016
///////////////////////////////////////////////////////////////////////
#ifndef _LAMNA_GRAPHIC_ROUNDED_RECTANGLE_IMAGE_HPP
#define _LAMNA_GRAPHIC_ROUNDED_RECTANGLE_IMAGE_HPP

#include "lamna/graphic/rounded_rectangle.hpp"
#include "lamna/graphic/base_image.hpp"

namespace lamna {
namespace graphic {

typedef rounded_rectanglet
<base_image, image_interface> rounded_rectangle_image_extends;
///////////////////////////////////////////////////////////////////////
///  Class: rounded_rectangle_imaget
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS rounded_rectangle_image
: public rounded_rectangle_image_extends {
public:
    typedef rounded_rectangle_image_extends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    rounded_rectangle_image
    (tImageInterface& image): Extends(image) {
    }
    virtual ~rounded_rectangle_image() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};

typedef filled_rounded_rectanglet
<base_image, image_interface> filled_rounded_rectangle_image_extends;
///////////////////////////////////////////////////////////////////////
///  Class: filled_rounded_rectangle_imaget
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS filled_rounded_rectangle_image
: public filled_rounded_rectangle_image_extends {
public:
    typedef filled_rounded_rectangle_image_extends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    filled_rounded_rectangle_image
    (tImageInterface& image): Extends(image) {
    }
    virtual ~filled_rounded_rectangle_image() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};

typedef hollowed_rounded_rectanglet
<base_image, image_interface> hollowed_rounded_rectangle_image_extends;
///////////////////////////////////////////////////////////////////////
///  Class: hollowed_rounded_rectangle_imaget
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS hollowed_rounded_rectangle_image
: public hollowed_rounded_rectangle_image_extends {
public:
    typedef hollowed_rounded_rectangle_image_extends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    hollowed_rounded_rectangle_image
    (tImageInterface& image): Extends(image) {
    }
    virtual ~hollowed_rounded_rectangle_image() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};

} // namespace graphic
} // namespace lamna 

#endif // _LAMNA_GRAPHIC_ROUNDED_RECTANGLE_IMAGE_HPP 
