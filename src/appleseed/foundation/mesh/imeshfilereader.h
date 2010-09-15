
//
// This source file is part of appleseed.
// Visit http://appleseedhq.net/ for additional information and resources.
//
// This software is released under the MIT license.
//
// Copyright (c) 2010 Francois Beaune
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#ifndef APPLESEED_FOUNDATION_MESH_IMESHFILEREADER_H
#define APPLESEED_FOUNDATION_MESH_IMESHFILEREADER_H

// appleseed.foundation headers.
#include "foundation/core/concepts/noncopyable.h"
#include "foundation/core/exceptions/exception.h"

// Standard headers.
#include <string>

// Forward declarations.
namespace foundation    { class IMeshBuilder; }

namespace foundation
{

//
// Mesh file reader interface.
//

class IMeshFileReader
  : public NonCopyable
{
  public:
    // I/O error.
    struct ExceptionIOError : public Exception {};

    // Destructor.
    virtual ~IMeshFileReader() {}

    // Read a mesh file.
    virtual void read(
        const std::string&  filename,
        IMeshBuilder&       builder) = 0;
};

}       // namespace foundation

#endif  // !APPLESEED_FOUNDATION_MESH_IMESHFILEREADER_H
