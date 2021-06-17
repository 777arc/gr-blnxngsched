/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(mixed_2_port_loopback.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(0ff318cdac9e9ca23d251270005334a7)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <blnxngsched/mixed_2_port_loopback.h>
// pydoc.h is automatically generated in the build directory
#include <mixed_2_port_loopback_pydoc.h>

void bind_mixed_2_port_loopback(py::module& m)
{

    using mixed_2_port_loopback    = gr::blnxngsched::mixed_2_port_loopback;


    py::class_<mixed_2_port_loopback, gr::block, gr::basic_block,
        std::shared_ptr<mixed_2_port_loopback>>(m, "mixed_2_port_loopback", D(mixed_2_port_loopback))

        .def(py::init(&mixed_2_port_loopback::make),
           py::arg("batch_size"),
           py::arg("load"),
           D(mixed_2_port_loopback,make)
        )
        



        ;




}








