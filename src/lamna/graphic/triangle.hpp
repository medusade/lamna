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
///   File: triangle.hpp
///
/// Author: $author$
///   Date: 6/4/2015
///////////////////////////////////////////////////////////////////////
#ifndef _LAMNA_GRAPHIC_TRIANGLE_HPP
#define _LAMNA_GRAPHIC_TRIANGLE_HPP

#include "lamna/graphic/bresenham_line_context.hpp"
#include "lamna/graphic/image_point.hpp"
#include "lamna/graphic/image_base.hpp"

namespace lamna {
namespace graphic {

///////////////////////////////////////////////////////////////////////
/// Function: FillTriangleT
///////////////////////////////////////////////////////////////////////
template
<class TImage, class TPixel,
 class TBresenhamLineContext,
 class TSortedImagePointTriangle, class TImagePoint,
 class TInt, class TLength>

void FillTriangleT
(TImage &image,
 TPixel &pixel,
 TInt x1, TInt y1,
 TInt x2, TInt y2,
 TInt x3, TInt y3)
{
    TSortedImagePointTriangle triangle(x1,y1, x2,y2, x3,y3);
    TBresenhamLineContext line1, line2;
    TInt line1_x, line1_y, line2_x, line2_y;
    TInt line1_x1, line2_x1, y;

    x1 = triangle.elements()[0].m_x;
    y1 = triangle.elements()[0].m_y;
    x2 = triangle.elements()[1].m_x;
    y2 = triangle.elements()[1].m_y;
    x3 = triangle.elements()[2].m_x;
    y3 = triangle.elements()[2].m_y;

    if (y1 != y2)
    {
        if (y2 != y3)
        {
            if (x2 < x3)
            {
                //   1
                //  XX
                // 2XX
                //  XX
                //   3
                if ((line1.Start(line1_x,line1_y, x1,y1, x2,y2)))
                if ((line2.Start(line2_x,line2_y, x1,y1, x3,y3)))
                {
                    for (y = y1; y <= y2; y++)
                    {
                        while (line1_y <= y)
                        {
                            line1_x1 = line1_x;
                            if (!(line1.Finish(line1_x,line1_y)))
                                break;
                        }
                        while (line2_y <= y)
                        {
                            line2_x1 = line2_x;
                            if (!(line2.Finish(line2_x,line2_y)))
                                break;
                        }
                        image.Fill
                        (pixel, line1_x1,y, line2_x1-line1_x1+1,1);
                    }

                    if ((line1.Start(line1_x,line1_y, x2,y2, x3,y3)))
                    {
                        while (line1_y <= y2)
                        {
                            if (!(line1.Finish(line1_x,line1_y)))
                                break;
                        }

                        for (y = line1_y; y <= y3; y++)
                        {
                            while (line2_y <= y)
                            {
                                line2_x1 = line2_x;
                                if (!(line2.Finish(line2_x,line2_y)))
                                    break;
                            }

                            image.Fill
                            (pixel, line1_x,y, line2_x1-line1_x+1,1);

                            while (line1_y <= y)
                            {
                                if (!(line1.Finish(line1_x,line1_y)))
                                    break;
                            }
                        }
                    }
                }
            }
            else
            {
                // 1
                // XX
                // XX2
                // XX
                // 3
                if ((line1.Start(line1_x,line1_y, x1,y1, x3,y3)))
                if ((line2.Start(line2_x,line2_y, x1,y1, x2,y2)))
                {
                    for (y = y1; y <= y2; y++)
                    {
                        while (line1_y <= y)
                        {
                            line1_x1 = line1_x;
                            if (!(line1.Finish(line1_x,line1_y)))
                                break;
                        }
                        while (line2_y <= y)
                        {
                            line2_x1 = line2_x;
                            if (!(line2.Finish(line2_x,line2_y)))
                                break;
                        }
                        image.Fill
                        (pixel, line1_x1,y, line2_x1-line1_x1+1,1);
                    }

                    if ((line2.Start(line2_x,line2_y, x2,y2, x3,y3)))
                    {
                        while (line2_y <= y2)
                        {
                            if (!(line2.Finish(line2_x,line2_y)))
                                break;
                        }

                        for (y = line2_y; y <= y3; y++)
                        {
                            while (line1_y <= y)
                            {
                                line1_x1 = line1_x;
                                if (!(line1.Finish(line1_x,line1_y)))
                                    break;
                            }

                            image.Fill
                            (pixel, line1_x1,y, line2_x-line1_x1+1,1);

                            while (line2_y <= y)
                            {
                                if (!(line2.Finish(line2_x,line2_y)))
                                    break;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            //   1
            //  XXX
            // 2XXX3
            if ((line1.Start(line1_x,line1_y, x1,y1, x2,y2)))
            if ((line2.Start(line2_x,line2_y, x1,y1, x3,y3)))
            {
                for (y = y1; y <= y2; y++)
                {
                    while (line1_y <= y)
                    {
                        line1_x1 = line1_x;
                        if (!(line1.Finish(line1_x,line1_y)))
                            break;
                    }
                    while (line2_y <= y)
                    {
                        line2_x1 = line2_x;
                        if (!(line2.Finish(line2_x,line2_y)))
                            break;
                    }
                    image.Fill
                    (pixel, line1_x1,y, line2_x1-line1_x1+1,1);
                }
            }
        }
    }
    else
    {
        // 1XXX2
        //  XXX
        //   3
       if ((line1.Start(line1_x,line1_y, x1,y1, x3,y3)))
       if ((line2.Start(line2_x,line2_y, x2,y2, x3,y3)))
       {
           for (y = y1; y <= y3; y++)
           {
               image.Fill
               (pixel, line1_x,y, line2_x-line1_x+1,1);

               while (line1_y <= y)
               {
                   if (!(line1.Finish(line1_x,line1_y)))
                       break;
               }
               while (line2_y <= y)
               {
                   if (!(line2.Finish(line2_x,line2_y)))
                       break;
               }
           }
       }
    }
}

} // namespace graphic
} // namespace lamna 

#endif // _LAMNA_GRAPHIC_TRIANGLE_HPP 
