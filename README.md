# t_ninja



# 概述

		在android和chrome,还有webrtc的项目中都用到了ninja作为编译项目使用工具，与之对应的工具我们比较熟悉的是make,cmake。网上搜索ninja，说的ninja代理make最大的优点是编译速度，使用ninja相比与make在编译android和chrome时，可以节省大量的时间。

# 简单使用

	首先工程目录有以下文件：

```
bar.c  bar.h  build.ninja  foo.c
```

bar.c中定义了一个变量和函数，供foo.c调用:

```c
// Filename:  bar.c
#include "bar.h"
#include <stdio.h>

int g_bar = 0;

int run_bar()
{
	printf("g_bar  = %d\n", g_bar);
	return 0;
}

```

foo.c内容为：

```c
// Filename: foo.c
#include <stdio.h>
int main() 
{
	int a = 10;
	int b = 5;
	printf("ok");
}

```



ninja编译脚本内容为：

```shell
# Filename: build.ninja

cc = g++
cflags = -Wall

rule cc
  command = gcc $cflags -c $in -o $out
  description = compile .cc

build out/bar.o: cc bar.c
build out/foo.o: cc foo.c

```

**注意以上rule cc下面，command前面为两个空格，直接使用tab键，测试不行**



# 编译方法

编译命令为:

```c
ninja
```

清理命令为：

```shell
ninja -t clean 
```



参考：

[Ninja 构建系统](https://blog.csdn.net/yujiawang/article/details/72627121)

[The Ninja build system](https://ninja-build.org/manual.html)


