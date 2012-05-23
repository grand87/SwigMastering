del *.java
swig -package com.samsung.work -c++ -java test.i
rem sed -i "s/Lcom//samsung//work//Data/Lcom//samsung//demo//Data" test_wrap.cxx
sed -i "s/Lcom\/samsung/Lcom\/gamsung/g" test_wrap.cxx
