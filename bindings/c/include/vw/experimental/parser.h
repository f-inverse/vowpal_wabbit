// Copyright (c) by respective owners including Yahoo!, Microsoft, and
// individual contributors. All rights reserved. Released under a BSD (revised)
// license as described in the file LICENSE.
#pragma once

#include "exports.h"
#include "types.h"

#ifdef __cplusplus
extern "C"
{
#endif

  VW_DLL_PUBLIC VWStatus VWCreateExampleArray(
      VWExampleArray** example_array_handle, VWErrorString* err_str_container) VW_API_NOEXCEPT;
  VW_DLL_PUBLIC VWStatus VWExampleArrayGetContents(
      VWExampleArray* example_array_handle, VWExample**, size_t*, VWErrorString* err_str_container) VW_API_NOEXCEPT;
  VW_DLL_PUBLIC VWStatus VWDestroyExampleArray(
      VWExampleArray* example_array_handle, VWErrorString* err_str_container) VW_API_NOEXCEPT;

  // Start the parser+driver loops
  VW_DLL_PUBLIC VWStatus VWRunParserAndDriver(
      VWWorkspace* workspace_handle, VWErrorString* err_str_container) VW_API_NOEXCEPT;

  // might return a multiline example in the case of the json parser
  VW_DLL_PUBLIC VWStatus VWParseExample(VWWorkspace* workspace_handle, uint8_t* data, size_t length, VWInputType type,
      VWExampleArray* results, VWErrorString* err_str_container) VW_API_NOEXCEPT;

#ifdef __cplusplus
}
#endif