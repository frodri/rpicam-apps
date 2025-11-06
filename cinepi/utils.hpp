#pragma once

#include <iostream>
#include "raw_options.hpp"
#include <filesystem>
namespace fs = std::filesystem;

enum CompressionType { NONE = 1, LOSSLESS = 7 };

bool  disk_mounted(const RawOptions *opt);
void  generate_filename(RawOptions *opt, unsigned int clip);
bool  create_clip_folder (RawOptions *opt, unsigned int clip);
bool  create_stills_folder(RawOptions *opt, unsigned int stills);