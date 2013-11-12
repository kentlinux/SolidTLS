add_subdirectory(digest)
#add_subdirectory(cipher)


set( SOLID_CRYPTO_SRC ${DIGEST_SRC})
add_library(solid_crypto SHARED ${SOLID_CRYPTO_SRC})

