/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef OREXPRESSION_BAKE_CONFIG_H
#define OREXPRESSION_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs>

/* Headers of private dependencies */
#ifdef OREXPRESSION_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#if OREXPRESSION_IMPL && defined _MSC_VER
#define OREXPRESSION_EXPORT __declspec(dllexport)
#elif OREXPRESSION_IMPL
#define OREXPRESSION_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
#define OREXPRESSION_EXPORT __declspec(dllimport)
#else
#define OREXPRESSION_EXPORT
#endif

#endif

