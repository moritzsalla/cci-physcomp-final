# Theremin

Experiemental instrument that uses light as an interface to output tones & melodies. It can be played by a single player or as a dialog between two.

![Image](schematic.png)

## Dependencies

1. SoftWire
2. ISL29125 SoftWire

```
.
├── README.md
├── code
│   ├── libs
│   │   ├── ISL29125_softwire
│   │   │   ├── LICENSE.md
│   │   │   ├── README.md
│   │   │   ├── examples
│   │   │   │   └── ISL29125Basics
│   │   │   │       └── ISL29125Basics.ino
│   │   │   ├── library.properties
│   │   │   └── src
│   │   │       ├── ISL29125_SoftWire.cpp
│   │   │       └── ISL29125_SoftWire.h
│   │   └── softwire
│   │       ├── README.TXT
│   │       ├── SoftwareWire.cpp
│   │       ├── SoftwareWire.h
│   │       ├── examples
│   │       │   ├── Small_example
│   │       │   │   └── Small_example.ino
│   │       │   ├── StressTest_Master
│   │       │   │   └── StressTest_Master.ino
│   │       │   └── StressTest_Slave
│   │       │       └── StressTest_Slave.ino
│   │       ├── keywords.txt
│   │       └── library.properties
│   └── theremin
│       ├── calibration.ino
│       ├── header.h
│       ├── light.ino
│       ├── read.ino
│       ├── theremin.ino
│       └── tone.ino
├── journal
│   ├── log-01
│   │   ├── README.md
│   │   ├── render-1.jpg
│   │   ├── render-2.jpg
│   │   ├── scan-001.png
│   │   ├── scan-002.png
│   │   ├── scan-003.png
│   │   ├── scan-004.png
│   │   ├── scan-005.png
│   │   ├── scan-006.png
│   │   ├── scan-007.png
│   │   ├── scan-008.png
│   │   ├── scan-009.png
│   │   ├── scan-010.png
│   │   ├── scan-011.png
│   │   ├── scan-012.png
│   │   └── scan-013.png
│   ├── log-02
│   │   ├── README.md
│   │   ├── image-001.jpeg
│   │   ├── image-002.jpeg
│   │   ├── image-003.jpeg
│   │   ├── image-004.jpeg
│   │   ├── image-005.jpeg
│   │   ├── image-006.jpeg
│   │   ├── image-007.jpeg
│   │   └── image-008.jpeg
│   ├── log-03
│   │   ├── README.md
│   │   ├── image-1.jpg
│   │   ├── image-2.jpg
│   │   ├── image-3.jpg
│   │   ├── image-4.jpg
│   │   ├── image-5.jpeg
│   │   ├── schematic.jpg
│   │   ├── screenshot-1.png
│   │   ├── screenshot-2.png
│   │   └── screenshot-3.png
│   ├── log-04
│   │   ├── Bildschirmfoto\ 2019-11-26\ um\ 15.17.12.png
│   │   ├── Bildschirmfoto\ 2019-12-06\ um\ 18.15.19.png
│   │   ├── Bildschirmfoto\ 2019-12-06\ um\ 18.15.39.png
│   │   ├── README.md
│   │   ├── image-1.jpg
│   │   ├── image-2.jpg
│   │   ├── image-3.jpg
│   │   ├── screenshot-0.png
│   │   ├── screenshot-1.png
│   │   └── screenshot-2.png
│   ├── log-05
│   │   ├── README.md
│   │   ├── image-01.jpeg
│   │   ├── image-02.jpeg
│   │   ├── image-03.jpeg
│   │   ├── image-04.jpeg
│   │   ├── image-05.jpeg
│   │   ├── image-06.jpeg
│   │   ├── image-07.jpeg
│   │   ├── image-08.jpeg
│   │   ├── image-09.jpeg
│   │   ├── image-10.jpeg
│   │   ├── image-11.jpeg
│   │   └── image-12.jpeg
│   ├── log-06
│   │   ├── README.md
│   │   └── render.jpg
│   ├── log-07
│   │   ├── README.md
│   │   └── image-1.png
│   ├── log-08
│   │   ├── README.md
│   │   ├── image-1.jpeg
│   │   ├── image-2.jpeg
│   │   ├── image-3.jpeg
│   │   ├── image-4.jpeg
│   │   └── image.png
│   ├── log-09
│   │   ├── README.md
│   │   └── schematic.png
│   └── log-10
│       ├── README.md
│       ├── image-1.jpg
│       └── schematic.png
├── presentations
│   ├── final.pdf
│   ├── proposal.pdf
│   └── theremin-1.mp4
├── renderings
│   ├── render-1.jpg
│   ├── render-2.jpg
│   ├── render-3.jpg
│   └── render.gif
└── schematic.png
```
