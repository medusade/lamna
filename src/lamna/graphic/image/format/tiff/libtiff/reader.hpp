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
///   File: reader.hpp
///
/// Author: $author$
///   Date: 3/30/2016
///////////////////////////////////////////////////////////////////////
#ifndef _LAMNA_GRAPHIC_IMAGE_FORMAT_TIFF_LIBTIFF_READER_HPP
#define _LAMNA_GRAPHIC_IMAGE_FORMAT_TIFF_LIBTIFF_READER_HPP

#include "lamna/graphic/image/format/tiff/libtiff/reader_events.hpp"
#include "lamna/graphic/image/format/tiff/libtiff/opened.hpp"

namespace lamna {
namespace graphic {
namespace image {
namespace format {
namespace tiff {
namespace libtiff {

typedef reader_events reader_implements;
typedef opened reader_extends;
///////////////////////////////////////////////////////////////////////
///  Class: readert
///////////////////////////////////////////////////////////////////////
template
<class TImplements = reader_implements, class TExtends = reader_extends>
class _EXPORT_CLASS readert: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    readert
    (reader_events* tiff_reader_events_forward_to = 0)
    : tiff_reader_events_forward_to_(tiff_reader_events_forward_to),
      paletteRed_(0), paletteGreen_(0), paletteBlue_(0),
      paletteColors_(0), paletteBitsPerColor_(0),
      bytesPerStrip_(0), bytesPerRow_(0), bytesPerPixel_(0) {
    }
    virtual ~readert() {
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool read(const char* file) {
        bool success = false;
        if ((success = this->open(file))) {
            if (!(on_read(file))) {
                success = false;
            }
            if (!(this->close())) {
                success = false;
            }
        }
        return success;
    }
    virtual bool on_read(const char* file) {
        bool success = false;
        ssize_t imageLength, imageWidth, rowsPerStrip,
                samplesPerPixel, bitsPerSample;
        int16_t planarConfiguration, photometricInterpretation;

        if (0 < (imageLength = this->ImageLength())) {
            if (0 < (imageWidth = this->ImageWidth())) {
                if (0 < (rowsPerStrip = this->RowsPerStrip())) {
                    if (0 < (samplesPerPixel = this->SamplesPerPixel())) {
                        if (0 < (bitsPerSample = this->BitsPerSample())) {
                            if (0 < (planarConfiguration = this->PlanarConfiguration())) {
                                if (0 < (photometricInterpretation = this->PhotometricInterpretation())) {
                                    if ((this->on_TIFFImage
                                         (imageLength, imageWidth, rowsPerStrip,
                                          samplesPerPixel, bitsPerSample,
                                          planarConfiguration, photometricInterpretation))) {
                                        return true;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return success;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool on_TIFFImage
    (size_t imageLength, size_t imageWidth,
     size_t rowsPerStrip, size_t samplesPerPixel, size_t bitsPerSample,
     uint16_t planarConfiguration, uint16_t photometricInterpretation) {
        bool success = true;
        LAMNA_LOG_MESSAGE_DEBUG("on_TIFFImage(" << imageLength << "," <<  imageWidth << "," <<  rowsPerStrip << "," <<  samplesPerPixel << "," <<  bitsPerSample << "," <<  planarConfiguration << "," <<  photometricInterpretation << ")...");
        LAMNA_LOG_MESSAGE_DEBUG("...on_TIFFImage(" << imageLength << "," <<  imageWidth << "," <<  rowsPerStrip << "," <<  samplesPerPixel << "," <<  bitsPerSample << "," <<  planarConfiguration << "," <<  photometricInterpretation << ")");
        return success;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual reader_events* forward_tiff_reader_events_to(reader_events* to) {
        tiff_reader_events_forward_to_ = to;
        return tiff_reader_events_forward_to_;
    }
    virtual reader_events* tiff_reader_events_forward_to() const {
        return tiff_reader_events_forward_to_;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    reader_events* tiff_reader_events_forward_to_;
    uint16_t* paletteRed_, paletteGreen_, paletteBlue_;
    size_t paletteColors_, paletteBitsPerColor_,
           bytesPerStrip_, bytesPerRow_, bytesPerPixel_;
};
typedef readert<> reader;

} // namespace libtiff 
} // namespace tiff 
} // namespace format 
} // namespace image 
} // namespace graphic 
} // namespace lamna 

#endif // _LAMNA_GRAPHIC_IMAGE_FORMAT_TIFF_LIBTIFF_READER_HPP 
        

