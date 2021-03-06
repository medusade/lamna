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
///   File: main.cpp
///
/// Author: $author$
///   Date: 9/8/2015
///////////////////////////////////////////////////////////////////////
#include "lamna/app/gui/x11/hello/main.hpp"

namespace lamna {
namespace app {
namespace gui {
namespace x11 {
namespace hello {

///////////////////////////////////////////////////////////////////////
///  Class: main
///////////////////////////////////////////////////////////////////////
static main the_main;

} // namespace hello
} // namespace x11 
} // namespace gui 
} // namespace app 
} // namespace lamna 

namespace lamna {
namespace gui {
namespace x11 {

///////////////////////////////////////////////////////////////////////
///  Class: event_target
///////////////////////////////////////////////////////////////////////
bool event_target::default_XEvent_handler(const XEvent& xEvent) {
    bool isHandled = false;
    return isHandled;
}

} // namespace x11
} // namespace gui
} // namespace lamna
