/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include <dlfcn.h>

int main() {
    char libname[80];
    void *rc;

    printf("Shared library name: ");
    scanf("%s", libname);

    rc = dlopen(libname, RTLD_NOW);
    if (!rc) {
        fprintf(stderr, "Error opening %s: %s\n", libname, dlerror());
        return 1;
    }
    printf("dlopen successful\n");

    return 0;
}
