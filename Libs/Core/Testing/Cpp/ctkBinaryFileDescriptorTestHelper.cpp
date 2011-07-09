/*=========================================================================

  Library:   CTK

  Copyright (c) Kitware Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.commontk.org/LICENSE

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=========================================================================*/

// STD includes
#include <iostream>
#include <cstdlib>

#ifdef WIN32
# define BFD_TEST_HELPER_EXPORT __declspec(dllexport)
#else
# define BFD_TEST_HELPER_EXPORT
#endif

extern "C" {

  BFD_TEST_HELPER_EXPORT int MtBlancElevationInMeters = 4810;
}

int main(int /*argc*/, char* /*argv*/[])
{
  std::cout << "Mt Blanc elevation is " << MtBlancElevationInMeters
            << " meters" << std::endl;
  return EXIT_SUCCESS;
}
