### Compilar com o makefile (qualquer IDE)
Só digitar `make all`. Mas os arquivos `.o` vão ficar espalhados por todo lugar.

### Compilar com o CMake (JetBrains CLion)
Só apertar o play que tem na IDE. O CMake coloca os arquivo `.o` numa pasta separada para não poluir as outras pastas. A compilação também fica mais rápida já que os arquivos `.o` não são apagados e o makefile não precisa os compilar de novo.