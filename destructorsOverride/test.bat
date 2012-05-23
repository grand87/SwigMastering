del *.java

mkdir generated\com\samsung\swig\demos\demoDestructor

swig -package com.samsung.swig.demos.demoDestructor -c++ -java -outdir generated/com/samsung/swig/demos/demoDestructor test.i 
