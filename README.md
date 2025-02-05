# Lime

![Lime](/lime.png?raw=true)

v1.1.0

## Info

Lime is a set of tools for data and asset packing intended for C++ game development. It depends on [zlib](https://zlib.net/) for compression. The Lime datafile [format](format.txt) allows for fast random access.

To create Lime datafiles, build the *Lime* utility in [`/lime/`](/lime/). You can find the build instructions in the build.txt file.

To unpack datafiles, copy the source file in [`/unlime/`](/unlime/) into your own project and use the provided classes to extract game data from a Lime datafile. Don't forget to link [zlib](https://zlib.net/) to your project.

To build the demo, read the build instructions in [`/demo/`](/demo/).

For a quick tutorial on usage, see [HOWTO.md](/howto/HOWTO.md).

## Notes

Ideally, Lime should be used for small datafiles but large datafiles (2GB and beyond) are fully supported. Packing enormous (individual) resource files is not recommended as Unlime expands each queried resource fully into memory (streaming is not supported). Packing lots of small resources is fine but packing may take a while when using compression.

You are advised to use *unlime_phony.h* during development (reads data directly from files but uses the same API as *unlime.h*). See the demo project's code for documentation (it is commented extensively).

## Credits

- [zlib](https://zlib.net/) - used for compression
- [SFML](https://www.sfml-dev.org/) - used for the demo project
- [Lato](https://fonts.google.com/specimen/Lato) - font used in the demo project

## License

Copyright (c) 2024 Danijel Durakovic

Licensed under the terms of the [MIT license](LICENSE)
