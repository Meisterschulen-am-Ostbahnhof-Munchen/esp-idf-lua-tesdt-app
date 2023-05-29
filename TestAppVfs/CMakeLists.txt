cmake_minimum_required(VERSION 3.5)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(TestAppVfs)

spiffs_create_partition_image(storage spiffs_image FLASH_IN_PROJECT)
