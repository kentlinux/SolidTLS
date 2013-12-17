set(DEFAULT_ENGINE_SRC
			solid_engine.cpp
)

include_directories(${CMAKE_BINARY_DIR}/src/crypto/include) 
add_library(solid_engine SHARED ${DEFAULT_ENGINE_SRC})
add_dependencies(solid_engine solid_crypto)
