from conans import ConanFile, CMake
import os

class Pattern(ConanFile):
    name = "pattern"
    version = "0.0.1"
    license = "GPL"
    url = ""
    description = "C++ Pattern"
    settings = "os", "compiler", "build_type", "arch"
    generators = "cmake_paths"

    def build_requirements(self):
        self.build_requires("Catch2/2.7.0@catchorg/stable")

    def build(self):
        cmake = CMake(self, toolset=self.env["compiler.toolset"])
        cmake.definitions["CMAKE_TOOLCHAIN_FILE"]=os.path.join(self.install_folder,"conan_paths.cmake")
        cmake.configure()
        cmake.build()

    def package(self):
        cmake = CMake(self)
        cmake.install()
