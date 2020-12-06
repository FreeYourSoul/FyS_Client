// MIT License
//
// Copyright (c) 2020 Quentin Balland
// Repository : https://github.com/FreeYourSoul/FyS
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
//         of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
//         to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//         copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
//         copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//         AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef SOUL_TALE_SOUL_TALE_SRC_COMMON_OPTION_CONFIG_HH
#define SOUL_TALE_SOUL_TALE_SRC_COMMON_OPTION_CONFIG_HH

#include <cstdint>

//! static configuration
namespace fys::st::config {
static constexpr std::uint32_t disp_w = 620;
static constexpr std::uint32_t disp_h = 480;

//! refresh rate in frame per seconds
static constexpr double refresh_rate = 1.0 / 60.0;

//
// Used as bit mask for the key pressing
//
static constexpr int KEY_SEEN = 1;
static constexpr int KEY_RELEASED = 2;
}

namespace fys::st {

class option_config {
};

}

#endif//SOUL_TALE_SOUL_TALE_SRC_COMMON_OPTION_CONFIG_HH