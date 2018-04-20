# Complex

## Запуск программы 
```ShellSession
$ git clone https://github.com/BookaZluka/Complex
Cloning into 'Complex'...
remote: Counting objects: 220, done.
remote: Compressing objects: 100% (179/179), done.
remote: Total 220 (delta 87), reused 0 (delta 0), pack-reused 0
Receiving objects: 100% (220/220), 55.78 KiB | 0 bytes/s, done.
Resolving deltas: 100% (87/87), done.
$ cd Complex
```
## Вывод информации на экран
```ShellSession
$ g++ source/complex.h MainExample/main.cpp -I. -std=c++11 -o complex-example
$ ./complex-example
c1=3
c2=1+4i
c1+c2=4+4i
c1-c2=2-4i
c1*c2=3+12i
c1/c2=0.176471-0.705882i
