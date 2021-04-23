set parallel-level=-j5
mingw32-make.exe -f makefile.gcc SHARED=0 MONOLITHIC=0 BUILD=release UNICODE=1 CFG="_static_release" %parallel-level% clean
mingw32-make.exe -f makefile.gcc SHARED=0 MONOLITHIC=0 BUILD=release UNICODE=1 CFG="_static_release" %parallel-level% setup_h
mingw32-make.exe -f makefile.gcc SHARED=0 MONOLITHIC=0 BUILD=release UNICODE=1 CFG="_static_release" %parallel-level%
mingw32-make.exe -f makefile.gcc SHARED=0 MONOLITHIC=0 BUILD=debug UNICODE=1 CFG="_static_debug" %parallel-level% clean
mingw32-make.exe -f makefile.gcc SHARED=0 MONOLITHIC=0 BUILD=debug UNICODE=1 CFG="_static_debug" %parallel-level% setup_h
mingw32-make.exe -f makefile.gcc SHARED=0 MONOLITHIC=0 BUILD=debug UNICODE=1 CFG="_static_debug" %parallel-level%