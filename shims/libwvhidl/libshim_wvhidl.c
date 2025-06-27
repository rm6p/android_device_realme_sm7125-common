/*
 * Copyright (C) 2024 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * This shim provides the missing CBS_init symbol for the
 * prebuilt Widevine DRM HAL from the stock ODM image.
 */

#include <stddef.h>

// This is the missing function from an old BoringSSL library.
// We provide a dummy (no-op) implementation to satisfy the linker.
void CBS_init(void *cbs, const void *data, size_t len) {
    // Intentionally left empty.
    return;
}
