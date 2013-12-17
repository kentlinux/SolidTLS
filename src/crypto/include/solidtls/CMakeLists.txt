#
#	Copy export headers
#

set(SOLID_CRYPTO_EXPORT_HEADERS_OUTPUT_DIR ${CMAKE_CURRENT_BINARY_DIR})

foreach(export_header_file  ${SOLID_CRYPTO_EXPORT_HEADERS})
	configure_file( ${export_header_file} ${SOLID_CRYPTO_EXPORT_HEADERS_OUTPUT_DIR} COPYONLY)
endforeach(export_header_file)
