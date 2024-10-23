// Based on https://github.com/hazelnusse/crc7 .

#pragma once

#include "common.h"

s8 crc7_adjust(s8 crc7, u8 byte);
s8 crc7_calculate(const void* data, unsigned long length);
