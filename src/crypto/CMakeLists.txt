add_subdirectory(digest)
add_subdirectory(engine)



set( SOLID_CRYPTO_SRC
			crypto.cpp 
			${DIGEST_SRC}
			${ENGINE_SRC}
)
set( SOLID_CRYPTO_EXPORT_HEADERS 
			${DIGEST_EXPORT_HEADERS}
			${ENGINE_EXPORT_HEADERS}
)



#
#	Copy export headers
#


add_library(solid_crypto SHARED ${SOLID_CRYPTO_SRC})
add_subdirectory(include)