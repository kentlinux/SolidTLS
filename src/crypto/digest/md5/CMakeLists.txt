set( MD5_SRC  
	md5.cpp
)


foreach (file ${MD5_SRC})
    LIST (APPEND MD5_FULL_PATH_SRC ${CMAKE_CURRENT_SOURCE_DIR}/${file})
endforeach ()

set( DIGEST_MD5_SRC ${MD5_FULL_PATH_SRC} PARENT_SCOPE)
