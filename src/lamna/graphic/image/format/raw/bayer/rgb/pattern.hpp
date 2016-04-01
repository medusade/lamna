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
///   File: pattern.hpp
///
/// Author: $author$
///   Date: 3/27/2016
///////////////////////////////////////////////////////////////////////
#ifndef _LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_HPP
#define _LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_HPP

#include "lamna/graphic/image/format/raw/bayer/rgb/filter.hpp"
#include "lamna/base/base.hpp"
#include "lamna/io/logger.hpp"

#define LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_NONE 0
#define LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_RGGB 0x1E // quaternary 0132 binary 00011110
#define LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_BGGR 0x9C // quaternary 2130 binary 10011100
#define LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_GRBG 0x4B // quaternary 1023 binary 01001011
#define LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_GBRG 0x63 // quaternary 1203 binary 01100011

#define LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_NONE_NAME ""
#define LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_RGGB_NAME "RGGB"
#define LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_BGGR_NAME "BGGR"
#define LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_GRBG_NAME "GRBG"
#define LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_GBRG_NAME "GBRG"

namespace lamna {
namespace graphic {
namespace image {
namespace format {
namespace raw {
namespace bayer {
namespace rgb {

///////////////////////////////////////////////////////////////////////
/// Enum: pattern_which_t
///////////////////////////////////////////////////////////////////////
typedef uint8_t pattern_which_t;
enum {
    pattern_none = LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_NONE,

    pattern_rggb = LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_RGGB,
    pattern_bggr = LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_BGGR,
    pattern_grbg = LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_GRBG,
    pattern_gbrg = LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_GBRG
};

typedef implement_base pattern_implements;
typedef base pattern_extends;
///////////////////////////////////////////////////////////////////////
///  Class: patternt
///////////////////////////////////////////////////////////////////////
template
<class TImplements = pattern_implements, class TExtends = pattern_extends>

class _EXPORT_CLASS patternt: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;

    typedef pattern_which_t which_t;
    enum {
        none = pattern_none,

        RGGB = pattern_rggb,
        BGGR = pattern_bggr,
        GRBG = pattern_grbg,
        GBRG = pattern_gbrg
    };

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    patternt(pattern_which_t which = none): which_(which) {
    }
    patternt(const patternt& copy): which_(copy.which_) {
    }
    virtual ~patternt() {
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual filters_which_t& set_filters(const filters_which_t& to) {
        filter_which_t filter = next_filter;
        for (which_ = none, filter = first_filter; filter <= last_filter; ++filter) {
            filter_which_t to_index = ((filter - first_filter) & filter_mask);
            filter_which_t to_filter = to[to_index];
            const char* to_name  = filter::name_of(to_filter);

            filters_[to_index] = to_filter;
            LAMNA_LOG_MESSAGE_DEBUG("which_ = (" << which_ << " << " << filter_bits << ") | (" << to_filter << " (" << to_name << ") & " << filter_mask << ")");
            which_ = (which_ << filter_bits) | (to_filter & filter_mask);
        }
        return filters_;
    }
    virtual filters_which_t& filters() const {
        return (filters_which_t&)filters_;
    }
    virtual operator filters_which_t&() const {
        return (filters_which_t&)filters_;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual which_t set_which(which_t to) {
        filter_which_t filter = next_filter;
        for (which_ = to, filter = next_filter; filter > first_filter; --filter) {
            filter_which_t to_index = ((filter - first_filter - 1) & filter_mask);
            filter_which_t to_filter = (to & filter_mask);
            const char* to_name  = filter::name_of(to_filter);
            const char* name  = filter::name_of(to_index);

            LAMNA_LOG_MESSAGE_DEBUG("filters_[" << to_index << " (" << name << ")] = " << to_filter << " (" << to_name << ")");
            filters_[to_index] = to_filter;
            to = (to >> filter_bits);
        }
        return which_;
    }
    virtual which_t which() const {
        return which_;
    }
    virtual operator which_t() const {
        return which_;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    static const char* name(which_t of) {
        switch (of) {
        case pattern_rggb:
            return LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_RGGB_NAME;
        case pattern_bggr:
            return LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_BGGR_NAME;
        case pattern_grbg:
            return LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_GRBG_NAME;
        case pattern_gbrg:
            return LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_GBRG_NAME;
        }
        return LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_NONE_NAME;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    which_t which_;
    filters_which_t filters_;
};
typedef patternt<> pattern;

} // namespace rgb 
} // namespace bayer 
} // namespace raw 
} // namespace format 
} // namespace image 
} // namespace graphic 
} // namespace lamna 

#endif // _LAMNA_GRAPHIC_IMAGE_FORMAT_RAW_BAYER_RGB_PATTERN_HPP 
