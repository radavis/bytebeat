# Bytebeat

Create interesting sounds by shifting bits around.

For example, here is a simple C program that creates a repeating audio pattern when piped to /dev/audio:

```
#include <stdio.h>

int main() {
  int i = 0;

  while(1) {
    i++;
    putchar(i&i>>8);
  }
}
```

## OSX Instructions

First, `brew install sox` in order to have a way to pipe data to the sound system.

Next, compile one of the .c files: `gcc -o 42_melody 42_melody.c`.

Pipe the output of the program to sox: `./42_melody | sox -traw -r8000 -b8 -e unsigned-integer - -tcoreaudio`. Or, use the handy bash script: `./play 42_melody`.

`CTRL+C` to stop the music.

Experiment!

## References

* [Algorithmic symphonies from one line of code](http://countercomplex.blogspot.com/2011/10/algorithmic-symphonies-from-one-line-of.html)
* [Deep analysis of one-line music programs](http://countercomplex.blogspot.com/2011/10/some-deep-analysis-of-one-line-music.html)
* [(youtube) Experimental music from very short C programs](https://www.youtube.com/watch?v=GtQdIYUtAHg)
* [(youtube) Experimental one-line algorithmic music (2nd iteration)](https://www.youtube.com/watch?v=qlrs2Vorw2Y)
* [(youtube) Music from very short programs (3rd iteration)](https://www.youtube.com/watch?v=tCRPUv8V22o)
* [Javascript Bytebeat Generator](http://wurstcaptures.untergrund.net/music/)
* [IBNIZ](https://github.com/viznut/IBNIZ/tree/master/src)
* [/r/bytebeat on reddit](http://www.reddit.com/r/bytebeat/)
* [Bytebeat on canonical.org](http://web.archive.org/web/20140209022048/http://canonical.org/~kragen/bytebeat/)
* [viznut-music on github](https://github.com/kragen/viznut-music)
* [Hacker News Discussion](https://news.ycombinator.com/item?id=3063359)

## Notes

Most of these programs are from [@viznut's](http://www.twitter.com/viznut) videos. All credit goes to him and the original authors.
