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

#ifndef GETSET_BAKE_CONFIG_H
#define GETSET_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs>

/* Headers of private dependencies */
#ifdef GETSET_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#if GETSET_IMPL && defined _MSC_VER
#define GETSET_EXPORT __declspec(dllexport)
#elif GETSET_IMPL
#define GETSET_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
#define GETSET_EXPORT __declspec(dllimport)
#else
#define GETSET_EXPORT
#endif

#endif

