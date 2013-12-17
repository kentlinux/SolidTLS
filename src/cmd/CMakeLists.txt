set( SOLID_CMD_SRC
			cmd.cpp 
)

include_directories(${CMAKE_BINARY_DIR}/src/crypto/include) 
add_executable(solid_cmd ${SOLID_CMD_SRC})
add_dependencies(solid_cmd solid_crypto)