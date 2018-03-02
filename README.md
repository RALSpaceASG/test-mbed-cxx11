# test-mbed-cxx11

An example of how to create a Mbed OS 5 application that uses C++11 by default.

It has only been tested with GCC_ARM (version 7-2017q4-major).

Currently, the only way to specify a profile is using the mbed-cli flags.
The profile file `cxx11_profile.json` is designed to be appended to one of
the profiles that come with the mbed-os repo.

So, to use the profile, when compiling the flags `--profile mbed-os/tools/profiles/develop.json --profile cxx11_profile.json` need to be added to the command line.

For instance:

    $ mbed compile --target K64F --toolchain GCC_ARM --profile mbed-os/tools/profiles/develop.json --profile cxx11_profile.json

Note that the order is important; the cxx11_profile.json needs to be AFTER the base profile.
