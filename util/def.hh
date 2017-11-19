/*
 * Copyright (C) 2017 CAMELab
 *
 * This file is part of SimpleSSD.
 *
 * SimpleSSD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * SimpleSSD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with SimpleSSD.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __UTIL_DEF__
#define __UTIL_DEF__

#include <cinttypes>
#include <list>

namespace SimpleSSD {

typedef struct _LPNRange {
  uint64_t slpn;
  uint64_t nlp;

  _LPNRange();
  _LPNRange(uint64_t, uint64_t);
} LPNRange;

typedef struct _Request {
  uint64_t reqID;
  uint64_t offset;
  uint64_t length;
  LPNRange range;

  _Request();
} Request;

}  // namespace SimpleSSD

#endif