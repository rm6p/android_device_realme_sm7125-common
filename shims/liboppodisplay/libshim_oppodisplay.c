/*
 * Copyright (C) 2024 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * This is a C shim for the proprietary liboppodisplay.so library.
 *
 * It provides a dummy implementation of the C++ symbol that SurfaceFlinger
 * expects to find, preventing a fatal crash during boot.
 *
 * Symbol: android::OppoDisplayComposition::prepare(std::vector<android::sp<android::DisplaySurface>>&)
 */

void _ZN7android22OppoDisplayComposition7prepareERSt6vectorINS_2spINS_13DisplaySurfaceEEESaIS6_EE() {
    // This function is intentionally left empty. Its existence is enough
    // to satisfy the linker and prevent the system_server crash.
}
