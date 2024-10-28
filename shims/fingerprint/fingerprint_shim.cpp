// fingerprint_shim.cpp

#include <vector>
#include <string>
#include <functional>

// Define minimal replacements for HIDL types
using hidl_string = std::string;

template <typename T>
using hidl_vec = std::vector<T>;

// Define external C functions for missing symbols
extern "C" {
    // Shim for the missing interfaceChain symbol
    void _ZN6vendor5oplus8hardware10biometrics11fingerprint4V2_138IBiometricsFingerprintClientCallbackEx14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(
        std::function<void(const hidl_vec<hidl_string>&)> callback) {

        // Define the interface chain to simulate expected behavior
        hidl_vec<hidl_string> ifaceChain {
            "vendor.oplus.hardware.biometrics.fingerprint@2.1::IBiometricsFingerprintClientCallback",
            "android.hardware.biometrics.fingerprint@2.1::IBiometricsFingerprintClientCallback",
            "android.hidl.base@1.0::IBase"
        };

        // Invoke the callback with the interface chain
        callback(ifaceChain);
    }

    // Shim for the missing interfaceDescriptor symbol
    void _ZN6vendor5oplus8hardware10biometrics11fingerprint4V2_138IBiometricsFingerprintClientCallbackEx19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(
        std::function<void(const hidl_string&)> callback) {

        // Simulate returning the descriptor
        hidl_string descriptor = "vendor.oplus.hardware.biometrics.fingerprint@2.1::IBiometricsFingerprintClientCallback";
        callback(descriptor);
    }

    // Shim for the missing debug symbol
    void _ZN6vendor5oplus8hardware10biometrics11fingerprint4V2_138IBiometricsFingerprintClientCallbackEx5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(
        const void* /* handle */, const hidl_vec<hidl_string>& /* options */) {

        // Intentionally left empty to satisfy compatibility requirements
    }
}
