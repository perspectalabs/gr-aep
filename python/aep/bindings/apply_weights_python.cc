/*
 * Copyright 2024 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(apply_weights.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(33ec448f5f6ca417c9b480bf9a345661)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/aep/apply_weights.h>
// pydoc.h is automatically generated in the build directory
#include <apply_weights_pydoc.h>

void bind_apply_weights(py::module& m)
{

    using apply_weights    = ::gr::aep::apply_weights;


    py::class_<apply_weights, gr::block, gr::basic_block,
        std::shared_ptr<apply_weights>>(m, "apply_weights", D(apply_weights))

        .def(py::init(&apply_weights::make),
           py::arg("M"),
           py::arg("num_sc"),
           py::arg("num_avg"),
           D(apply_weights,make)
        )
        



        ;




}








