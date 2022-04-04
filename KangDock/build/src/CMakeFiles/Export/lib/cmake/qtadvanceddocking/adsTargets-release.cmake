#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ads::qtadvanceddocking" for configuration "Release"
set_property(TARGET ads::qtadvanceddocking APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ads::qtadvanceddocking PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/qtadvanceddocking.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/qtadvanceddocking.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS ads::qtadvanceddocking )
list(APPEND _IMPORT_CHECK_FILES_FOR_ads::qtadvanceddocking "${_IMPORT_PREFIX}/lib/qtadvanceddocking.lib" "${_IMPORT_PREFIX}/bin/qtadvanceddocking.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
