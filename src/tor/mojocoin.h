/* Copyright (c) 2014, Razor Developers */
/* See LICENSE for licensing information */

/**
 * \file mojocoin.h
 * \brief Headers for mojocoin.cpp
 **/

#ifndef TOR_MOJOCOIN_H
#define TOR_MOJOCOIN_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* mojocoin_tor_data_directory(
    );

    char const* mojocoin_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

