/****************************************************************************
** Copyright (c) 2017 Adrian Schneider, AOT AG
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and associated documentation files (the "Software"),
** to deal in the Software without restriction, including without limitation
** the rights to use, copy, modify, merge, publish, distribute, sublicense,
** and/or sell copies of the Software, and to permit persons to whom the
** Software is furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
**
*****************************************************************************/

#ifndef _vtkVolumeVisualizer_H_
#define _vtkVolumeVisualizer_H_

#include "dllDefines.h"

#include <vtkImageData.h>
#include <vtkSmartPointer.h>
#include <vector>

class VolumeRenderingColoringEntry
{
public:

    VolumeRenderingColoringEntry(){}
    VolumeRenderingColoringEntry(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, int voxelValue) :
    m_red(red), m_green(green), m_blue(blue), m_alpha(alpha), m_voxelValue(voxelValue)
    {}

    /*
     * The color and transparency
     */
    unsigned char m_red = 255u;
    unsigned char m_green = 255u;
    unsigned char m_blue = 255u;
    unsigned char m_alpha = 128u;

    /*
     * The voxel value, to which the color is applied
     */
    int m_voxelValue = 0;
};

class VTKVolumeVisualizer
{

public:
    /**
     * Display mesh in a 3d view.
     * @param mesh Mesh to show.
     */
    static MYLIB_EXPORT void displayVolume( const vtkSmartPointer<vtkImageData>& imageData, std::vector<VolumeRenderingColoringEntry> colors );
};


#endif //_vtkMeshVisualizer_H_
