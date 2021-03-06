/* Copyright 2017 R. Thomas
 * Copyright 2017 Quarkslab
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef PY_LIEF_INIT_H_
#define PY_LIEF_INIT_H_

#include "pyLIEF.hpp"

void init_LIEF_Enum(py::module&);
void init_LIEF_Header_class(py::module&);
void init_LIEF_Binary_class(py::module&);
void init_LIEF_Section_class(py::module&);
void init_LIEF_Symbol_class(py::module&);
void init_LIEF_Parser_class(py::module&);

#endif
