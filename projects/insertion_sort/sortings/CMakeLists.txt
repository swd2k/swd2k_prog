target_sources(insertion_sort
     PRIVATE
	    sortings.cpp
		sortings.hpp
)

target_include_directories(insertion_sort PRIVATE
    "${PROJECT_SOURCE_DIR}/sortings"
)
