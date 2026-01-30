# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_yahboom_qrcode_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED yahboom_qrcode_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(yahboom_qrcode_FOUND FALSE)
  elseif(NOT yahboom_qrcode_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(yahboom_qrcode_FOUND FALSE)
  endif()
  return()
endif()
set(_yahboom_qrcode_CONFIG_INCLUDED TRUE)

# output package information
if(NOT yahboom_qrcode_FIND_QUIETLY)
  message(STATUS "Found yahboom_qrcode: 0.0.0 (${yahboom_qrcode_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'yahboom_qrcode' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${yahboom_qrcode_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(yahboom_qrcode_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${yahboom_qrcode_DIR}/${_extra}")
endforeach()
