//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// <string>

// iterator insert(const_iterator p, charT c);

#if _LIBCUDACXX_DEBUG >= 1
#define _LIBCUDACXX_ASSERT(x, m) ((x) ? (void)0 : std::exit(0))
#endif

#include <string>
#include <stdexcept>
#include <cassert>

#include "test_macros.h"


int main(int, char**)
{
#if _LIBCUDACXX_DEBUG >= 1
    {
        typedef std::string S;
        S s;
        S s2;
        s.insert(s2.begin(), '1');
        assert(false);
    }
#endif

  return 0;
}
